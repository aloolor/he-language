#include <iostream>
using namespace std;


int main(int argc, char ** argv)
{
    for(int i = 0; i < argc; i++)
    {
        cout << i <<  ":" << argv[i] << endl;
    }
    return 0;
}

/*
he@he-VMware-Virtual-Platform:~/桌面/he-language/class04$ ./a.out 1 2 3 4
0:./a.out
1:1
2:2
3:3
4:4

命令行参数可以进行输入

举例：g++ main.cpp 
g++ 就是一个程序a.out没什么区别，后面的相当于对程序的输入参数 如main.cpp

*/