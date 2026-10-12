#include <iostream>
int main(){

    double x1, x2, x3;
std::cout << "How many GBP would you like to exchange" << std::endl;
std::cin >> x1;
std::cout << "What is the current exchange rate to Euros?" << std::endl;
std::cin >> x2;
x3 = x1 * x2;
std ::cout << "it is equivalent to " << x3 << " Euros" << std::endl;
}