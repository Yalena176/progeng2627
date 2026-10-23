#include <iostream>
int main(){
    double n, thesumsofar;
    n = 1;
    thesumsofar = 0;
    
    while(n != 0){
        std::cout << "enter a number" << std::endl;
        std::cin >> n;
        thesumsofar = thesumsofar + n;
        std::cout << "the sum so far is 1" << thesumsofar << std::endl;
    }
}