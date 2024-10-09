
/*

编译和链接：
头文件
*/


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

    cout << "the result is " << result << endl;
    return 0;
}
/*
he@he-VMware-Virtual-Platform:~/桌面/he-language/calss02$ g++ -c mul.cpp  (-c是只编译不链接)
he@he-VMware-Virtual-Platform:~/桌面/he-language/calss02$ g++ -c main.cpp
he@he-VMware-Virtual-Platform:~/桌面/he-language/calss02$ g++ main.o mul.o -o mul
he@he-VMware-Virtual-Platform:~/桌面/he-language/calss02$ ./mul
pick two integers:2 3
the result is6
*/