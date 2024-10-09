//char实际上是一个八位整数，可以是有符号和无符号char
#include <iostream>
using namespace std;
int main()
{
    char c1 = 'C';
    char c2 = 80;
    char c3 = 0x50;
    char16_t c4 = u'于';
    char32_t c5 = U'于';
    cout << c1 << ";" << c2 << ":" << c3 << endl;
    cout << +c1 << ";" << +c2 << ":" << +c3 << endl;//通过添加正号来打印整数
    cout << c4 << ":" << c5 << endl;
    return 0;

}