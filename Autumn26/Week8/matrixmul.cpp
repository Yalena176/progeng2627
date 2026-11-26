#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>


std::vector<std::vector<double>> ttom(std::string file){
std::vector<double> rowv;
std::vector<std::vector<double>> v;
std::ifstream infile;
infile.open(file);
double temp;
std::string rowt;
while(std::getline(infile, rowt)){
    std::stringstream ss(rowt);
    while(ss >> temp){
        rowv.push_back(temp);
    }
    v.push_back(rowv);
    rowv.clear();
}
infile.close();
return v;
}

std::vector<std::vector<double>> multi(std::vector<std::vector<double>> v1, std::vector<std::vector<double>> v2){
int i, g, k, j;
std::vector<double> row ,sum;
double temp;
std::vector<std::vector<double>> v;
for(j = 0; j < v1.size();j++){
    for(i = 0; i < v2[0].size();i++){
        for(g = 0; g< v1[0].size(); g++){
        temp = v1[j][g]*v2[g][i];
        sum.push_back(temp);
        }
        temp = 0;
        for(k = 0; k < sum.size(); k++){
            temp = temp +sum[k];
        }
        sum.clear();
        row.push_back(temp);
    }
    v.push_back(row);
    row.clear();
}
return v;
}

int main(int argc, char* argv[]){
std::vector<std::vector<double>> v;
std::vector<std::vector<double>> v1, v2;
v1 = ttom(argv[1]);
v2 = ttom(argv[2]);

v = multi(v1,v2);
int i, g;   
for(i = 0; i<v.size(); i++){
    for (g = 0; g < v[0].size(); g++){
        std::cout << v[i][g]<<" ";
    }
    std::cout << std::endl;
}
}

