#include <iostream>
#include "mul.hpp"
using namespace std;
int main()
{
    int a,b;
    int result;

    cout << "pick two integers:";
    cin >> a;
    cin >> b;

    result = mul(a,b);

    cout << "the result is" << result << endl;
    return 0;
}