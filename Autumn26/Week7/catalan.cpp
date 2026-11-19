#include <iostream>
#include <vector>

std::vector<unsigned long> catalan(int n){
    std::vector<unsigned long> v, oneterm;
    int g, y, k;
    int i;
    v.push_back(1);
    g = 0;
    for(k = 1; k < n; k++){
        for(i = 0; i < k; i++ ){
            y = v[i] * v[k-1-i];
            g = g + y;
        }
        v.push_back(g);
    }
    return v;

}


int main(){
    std::vector <unsigned long> v;
    int n, i;
    std::cin >> n;
    for(i = 0; i < catalan(n).size(); i++){
    std::cout << catalan(n)[i] << std::endl;
    }
}