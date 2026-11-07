#include <iostream>
#include <vector>

int main(){
    std::vector <double> v;
    int n, t, i, g;
    std::cin >> n;

    for(i = 0; i< n; i++){
        double x;
        std::cin >> x;
        v.push_back(x);
    }
    std::cin >> t;
    for(g = 0; v[g] < t; g++){
        std::cout << v[g] << std::endl;
    }
}