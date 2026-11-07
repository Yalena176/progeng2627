#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int x,g,y;
    std::cin >> x;
    for(g = 0; g < x; g++){
        std::cin >> y;
        v.push_back(y);
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}