#include <iostream>
using namespace std;
int main(){
    int i = 0;
    short s = 0;
    cout << "sizeof(int )" << sizeof(int) << endl;
    cout << "sizeof(i)" << sizeof(i) << endl;
    cout << "sizeof(short)" << sizeof(short) << endl;
    cout << "sizeof(s)" << sizeof(s) << endl;
    return 0;
}
//注意sizeof不是函数，因为int不是变量，所以sizeof是操作符