#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
std::vector<std::vector<double>> adder(std::vector<std::vector<double>> v1, std::vector<std::vector<double>> v2){
int i, g;
std::vector<double> row;
double temp;
std::vector<std::vector<double>> v;
for(i = 0; i < v1.size();i++){
    for(g = 0; g< v1[1].size(); g++){
    temp = v1[i][g]+v2[i][g];
    row.push_back(temp);
    }
    v.push_back(row);
    row.clear();
}
return v;
}

int main(int argc, char* argv[]){
std::vector<double> v11, v21;
std::vector<std::vector<double>> v12, v22, v;
std::ifstream infile;
infile.open(argv[1]);
double temp;
std::string row;
while(std::getline(infile, row)){
    std::stringstream ss(row);
    while(ss >> temp){
        v11.push_back(temp);
    }
    v12.push_back(v11);
    v11.clear();
    row.clear();
}
infile.close();

infile.open(argv[2]);
while(std::getline(infile, row)){
    std::stringstream ss(row);
    while(ss >> temp){
        v21.push_back(temp);
    }
    v22.push_back(v21);
    v21.clear();
    row.clear();
}
infile.close();
v = adder(v12, v22);
int i, g;
for(i = 0; i<v.size(); i++){
    for (g = 0; g < v[0].size(); g++){
        std::cout << v[i][g]<<" ";
    }
    std::cout << std::endl;
}

}

