#include <iostream>
#include <cmath>
double func(double x){
    double y;
    if (x < 0){
        y = -x;
    }
    else{
        y = x;
    }
    return y;
}

int main(){
    double n;
    std::cin >> n;
    std::cout << func(n);
    return 0;
}

