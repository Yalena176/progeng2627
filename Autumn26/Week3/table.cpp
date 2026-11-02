#include <iostream>
int main(){
    int n, i, acc;
    i = 1;
    std::cin >> n;
    acc = 1;
    while(acc <= n){
        while (i <= n){
            std::cout << i*acc << " ";
            i++;
        }
    i = 1;
    acc++;
    std::cout << std::endl;
    }
}