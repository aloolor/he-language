#include <iostream>
using namespace std;
int main(){
    int a = 56789;
    int b = 56789;
    int c = a * b;
    cout << "c " << c << endl;
    return 0;
}

//注意溢出问题，short,int ,long int ,long long int .
//注意有符号和法无符号数