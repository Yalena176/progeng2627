#include <iostream>
#include <vector>

int minv(const std::vector<int>& v){
    int i, ind, x;
    x = v[0];
    ind = 0;
    for (i=1 ; i < v.size();i++){
        if(v[i] < x){
            ind = i -1;
            x = v[i];
        }
    }
    return ind;
}

int main(){
    std::cout << "number of element to input" << std::endl;
    std::vector<int> v;
    int n, g, y;
    std::cin >> n;
    g = 0;
    while (g < n){
        std::cout << "next number" << std::endl;
        std::cin >>y;
        v.push_back(y);
    }
    std::cout << minv(v);
}