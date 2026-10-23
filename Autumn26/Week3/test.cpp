#include <iostream>
int main(){
    int n, y;
    std::cin >> n;
    y = 1;
    for(int counter = 1; counter < n; counter++){
    n = n*y;
    y = y + 1;
}  
std::cout << n;
}
