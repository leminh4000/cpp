#include <iostream>
using std::cin;
int main()
{
    int sum = 0;
    for (int val = 0; cin >> val; )
    {
        sum += val;
    }
    std::cout << "The sum  is " << sum << std::endl ;
    return 0;
}
