#include <iostream>
#include <vector>
#include <fstream>

void countnum(const std::vector<std::string>& vin, const std::vector<std::string>& vout, std::vector<int>& out){
    int i, g,t;
    t = 0;
    for(i = 0; i < vout.size(); i++){
        for(g = 0; g < vin.size(); g++){
            if (vout[i] == vin[g]){
                t++;
            }
        }
        out.push_back(t);
        t = 0;
    }
}

int main(){
    std::string text;
    std::vector<std::string> vin, vout;
    std::vector<int> out;
    std::ifstream infile;
    infile.open("wordbank.txt");
    while(infile >> text){
        vin.push_back(text);
    }
    infile.close();

    infile.open("count.txt");
    while(infile >> text){
        vout.push_back(text);
    }
    infile.close();
    countnum(vin, vout, out);

    std::ofstream outfile;
    outfile.open("count.txt");
    int i = 0;
    for (; i < vout.size(); i++){
        outfile << vout[i] << out[i] << std::endl;
    }
    outfile.close();
    
}