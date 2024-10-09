#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float f1 = 1.2f;
float f2 = f1 * 1000000000000000;
cout  << fixed << setprecision(15) << f1 << endl;
cout  << fixed << setprecision(15) << f2 << endl;
    return 0;
}

//0-1间实数有无穷多个，但是32位只能表达2的32次方个数，所以有些数是采样
//浮点数是会带来误差
//单精度浮点数，双精度浮点数？？？？