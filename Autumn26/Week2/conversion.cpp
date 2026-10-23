#include <iostream>
int main(){
    std::string inun;
    double inpu, Ce, Fa ;
    std::cin >> inpu >> inun;
    
    if(inun == "C"){
        inpu = Ce;
        Fa = (Ce- 30)/1.8;
        std::cout << Fa << "F";
    }
    else{
        inpu = Fa;
        Ce = 1.8*Fa + 30;
        std::cout << Ce << "C";
    }

   
}