#include <iostream>
#include <vector>

int search(const std::vector<int>& v, const int& n){
    int i;
    for(i = 0; i < v.size(); i++){
        if(v[i] == n){
            return i;
        }
    }
    return -1;

}

int main(){
    int x, i, n, w;
    std::vector<int> v;
    std::cout << "number you want" << std::endl;
    std::cin >> n;
    for(i = 0; i < n; i++){
        std::cout << "next number" << std::endl;
        std:: cin >> x;
        v.push_back (x);
    }
    std::cout << "what to search for" << std:: endl;
    std::cin >> w;
    std::cout << "it is " << search(v, w);
}