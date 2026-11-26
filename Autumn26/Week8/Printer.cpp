#include <iostream>
#include <fstream>

int main(int argc, char* argv[]){
std::ifstream infile;
infile.open(argv[1]);
std::string temp;
while(std::getline(infile, temp)){
std::cout << temp << std::endl;
}
infile.close();
}