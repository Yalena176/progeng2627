#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("in.txt");
    if(infile.is_open()){
    std::string tmp;
    infile >> tmp;
    std::cout << tmp << std::endl;
   
    infile >> tmp;
    std::cout << tmp << std::endl;
    
    infile >> tmp;
    std::cout << tmp << std::endl;
    infile.close();
}

}