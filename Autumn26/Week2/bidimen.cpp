#include <iostream>
int main(){
    int n, h, v;
    std::cin >> n;
    v = 0;
    h = 0;
    while(h < n){
        while(v < n){
            std::cout << "*";
            v++;
        }
        std::cout << std::endl;
        v = 0;
        h++;
    }
}