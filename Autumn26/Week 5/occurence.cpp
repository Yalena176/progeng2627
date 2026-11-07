#include <iostream>
#include <vector>

int main(){
    std::vector <double> v;
    int n, t, i, g;
    std::cout << "number of index" << std::endl;
    std::cin >> n;

    for(i = 0; i< n; i++){
        double x;
        std::cout << "next number" << std::endl;
        std::cin >> x;
        v.push_back(x);
    }
    std::cout << "count what?" << std::endl;
    std::cin >> t;
    g = 0;
    while(v[g] == t){
        g++;
    }
    std::cout << g;
}