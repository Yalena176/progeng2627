#include <iostream>
int main(){
    int n, x, y;
    y = 1;
    std::cin >> x;
    std::cin >> n;
    for(int counter = 0; counter<n; counter++){
        y = y*x;
    }
    std::cout << y << std::endl;
}