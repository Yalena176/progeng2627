#include <iostream>
#include <vector>
int print(const std::vector<int> v1, const std::vector<int> v2){
    int i;
    for(i = 0; i< v1.size();i++){
        std::cout << v1[i];
    }

    for(i = 0; i< v2.size();i++){
        std::cout << v2[i];
    }
    return 0;
}

int main(){
    std::vector<int> v1, v2;
    int n, m, i, x;
    std::cin >> n;
    std::cin >> m;
    for(i = 0; i < n;i++){
        std::cin >> x;
        v1.push_back(x);
    }  
    for(i = 0; i < m;i++){
        std::cin >> x;
        v2.push_back(x);
    }
    std::cout << print(v1, v2);

}