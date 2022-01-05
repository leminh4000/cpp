#include <iostream>
int main(){
    int const valMin = 50, valMax = 100;
    int val = valMin, sum = 0;
    
    while (val <= valMax){
        sum += val++;
    }
    std::cout << "The sum from " << valMin << " to " << valMax << " is " << sum << std::endl ;
    return -1;
}
