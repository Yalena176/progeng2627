#include <iostream>
int main(){
    double temp, fahr;
    std::cout << "What is the T RIGHT NOW?" << std::endl;
    std::cin >> temp;
    fahr = (temp * 1.8) +32;
    std::cout << " Then it should be " << fahr << "F arenheit degrees" << std::endl;
}