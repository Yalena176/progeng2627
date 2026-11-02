#include <iostream>
#include <cmath>
int main(){
    int x, n, sum, counter, pro;
    std::cin >> x;
    std::cin >> n;
    counter = 1;
    sum = 0;
    while(counter<=n){
        pro = std::pow(x, counter);
        sum = sum + pro;
        counter++;
    }
    std::cout << sum;
}
