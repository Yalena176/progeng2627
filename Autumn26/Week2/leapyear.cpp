#include <iostream>

int main(){
int year;
std::cin >> year;
if (year % 4 == 0){
    if (year % 100 ==0){
    std::cout << "not leap";
    }
    else if (year % 400 == 0){
        std::cout << "leap";
    }
    else {
        std::cout << "not";
    }
}
else{
    std::cout << "not l";
}

}