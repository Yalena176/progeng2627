#include <iostream>

int myfact(int n){
    int acc = 1;
    for(int counter = 1; counter < n + 1; counter++){
        acc = acc * counter; 
    }
    return acc;
}


int main(){
    
    std::cout << (myfact(3) == 6) << std::endl;
    std::cout << (myfact(4) == 24) << std::endl;
    std::cout << (myfact(5) == 120) << std::endl;
}

/*
n = 4
n! = 4 * 3 * 2 * 1 = 1 * 2 * 3 * 4



*/