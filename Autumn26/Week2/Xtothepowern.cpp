#include <iostream>
int main(){
    int n, counter;
    double x, acc;

    n = 0, counter = 0;
    x = 1, acc = 1;
    std::cin >> x >> n;
    while(counter<n){
        acc = acc *x;
        counter = counter +1;
    }
std::cout << acc;
}