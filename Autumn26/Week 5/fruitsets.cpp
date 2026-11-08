#include <iostream>
#include <vector>
#include <fstream>

void func(std::vector<std::string>& v1, std::vector<std::string>& v2){
    int i, g, n1, n2;
    std::vector<std::string> same, notsame;
    for(i = 0;i < v1.size(); i++){
        for(g =0; g< v2.size(); g++){
            if(v1[i] == v2[g]){
                same.push_back(v1[i]);
            }
            else{
                notsame.push_back(v1[i]);
            }
        }
    }
    v1.clear();
    v2.clear();
    v1 = same;
    v2 = notsame;
}
int main(){
    std::ifstream infile;
    infile.open("warehouse1.txt");
    std::vector<std::string> same;
    if(infile.is_open()){
        std::string obj;
        while(infile >> obj){
            same.push_back(obj);
        }
        infile.close();
    }
    infile.open("warehouse2.txt");
    std::vector<std::string> notsame;
    if(infile.is_open()){
        std::string val;
        while(infile >> val){
            notsame.push_back(val);
        }
        infile.close();    
    }
    func(same, notsame);

    std::ofstream outfile;
    outfile.open("union.txt");
    int i;
    for(i = 0; i < same.size(); i++){
        outfile << same[i] << std::endl;
    }
    outfile.close();

    outfile.open("differ.txt");
    for(i = 0; i < notsame.size(); i++){
            outfile << notsame[i] << std::endl;
    }
    outfile.close();
    

}