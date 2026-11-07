#include <iostream>
#include <vector>

int main(){
    double x, y, z;
    std::vector<double> v;
    std::cin >> x;
    std::cin >> y;
    std::cin >> z;
    v.push_back (x);
    v.push_back(y);
    v.push_back(z);
    std::cout << v[0]*(v[1]+v[2]) << std::endl;
}