#include <iostream>
bool pri(int& x, int counter){
    counter = 2;
    while(counter <x){
        if(x%counter == 0){
            return false;
        }
        else{
            return true;
        }
        counter++;

    }
}

int main(){
    int x, y, i;
    std::cin >> x >> y;
    i = x+1;
    int counter;
    while(i < y){
        if (pri(i, counter) == true){
            std::cout << i << std::endl;
        }
        i++;
    }
}

