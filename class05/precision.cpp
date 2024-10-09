#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float f1 = 2.34E+10f;
    float f2 = f1 + 10;

    cout.setf(ios_base::fixed,ios_base::floatfield);
    cout << "f1=" << f1 << endl;
    cout << "f2=" << f2 << endl;
    cout << "(f1 - f2 == 0) = " << (f1 -f2 == 0) << endl;

    return 0;
}

//注意浮点数的精度问题，因为是采样，所以f1加10之后因为没有达到下一个采样点所以数值不变
//inf  表示无穷大
// nan 表示不是数值