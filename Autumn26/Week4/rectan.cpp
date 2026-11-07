#include <iostream>

void cal(double& x,double& y, double& area, double& pere){
    area = x*y;
    pere = 2*(x+y);
}
int main(){
    double a, b, area, pere;
    std::cin >>a >> b;
    cal(a, b, area, pere);
    std::cout << area << "  "<< pere;
}