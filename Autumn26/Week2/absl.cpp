#include <iostream>
int main(){
    double n;
    std::cin >> n;
    bool negative;
    negative = n < 0;
    if (negative){
        n = -n;
    }
   else {
    n = n;
}
std::cout << n;
}