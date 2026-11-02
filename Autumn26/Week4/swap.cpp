#include <iostream>
void swa(std::string& a, std::string& b){
    std::string temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    std::string c, d;
    std::cin >> c >> d;
    swa(c, d);
    std::cout << c << d;
}