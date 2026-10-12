#include <iostream>
#include <string>
int main(){
std::string firstname, lastname;
std::cout << "WHat is your first name?" << std::endl;
std::cin >> firstname;
std::cout << "WHat is your last name?" << std::endl;
std::cin >> lastname;
std::cout << "Hello and Welcome, " << firstname << lastname << std::endl;
}