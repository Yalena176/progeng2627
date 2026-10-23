#include <iostream>
int main(){
    int num, rem ;
    std::cout << "Please enter a number" << std::endl ;
    std::cin >> num ;
    rem = num % 3;
if(rem == 0){
    std::cout << num << " is a multiple of 3" << std::endl;
}
else{
    std::cout << num << " is not a multiple of 3" << std::endl;
}
}