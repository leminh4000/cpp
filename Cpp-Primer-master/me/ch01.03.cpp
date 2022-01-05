#include <iostream>
int main(){
    int const valMin = 50, valMax = 100;
    int val = valMin, sum = 0;
    
    while (std::cin >> val){
        sum += val;
    }
    std::cout << "The sum  is " << sum << std::endl ;
    return 0;
}
