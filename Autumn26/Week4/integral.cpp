#include <iostream>
void divi(int& x, int& y, int& rem, int& div){
    div = x/y;
    rem = x%y;
}

int main(){
    int a, b, rem;
    int div;
    std::cin >> a >> b;
    divi(a, b, rem, div);
    std::cout << rem << div;
}