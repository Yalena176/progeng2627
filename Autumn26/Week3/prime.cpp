#include <iostream>
int main(){
    int n, m, r;
    m = 2;
    std::cin >> n;
    while(m <n){
        if(n % m ==0){
            std::cout << "not a prime number";
            return 0;
        }
        else{
        m++;
        }

    }
    stf::cout << "is prime number";
}