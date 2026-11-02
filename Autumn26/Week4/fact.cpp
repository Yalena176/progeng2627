#include <iostream>
#include <cmath>

int fac(int x){
    int counter, y;
    counter = 1;
    y = 1;
    while(counter <= x){
        y = y*counter;
        counter++;
    }
    return y;
}

int main(){
    int m;
    std::cin >> m;
    std::cout << fac(m);
}