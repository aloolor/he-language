#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"hello","c++","world","!"};

    for(const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}

/*
PS C:\Users\86151\Desktop\he-language> cd c
PS C:\Users\86151\Desktop\he-language\c> g++ hello.cpp
g++.exe: error: hello.cpp: No such file or directory
g++.exe: fatal error: no input files
compilation terminated.
PS C:\Users\86151\Desktop\he-language\c> 
PS C:\Users\86151\Desktop\he-language\c> 
PS C:\Users\86151\Desktop\he-language\c> g++ 'hello.cpp'
g++.exe: error: hello.cpp: No such file or directory
g++.exe: fatal error: no input files
compilation terminated.
PS C:\Users\86151\Desktop\he-language\c> g++ hello.cpp
PS C:\Users\86151\Desktop\he-language\c> ./a.exe
hello c++ world ! 
PS C:\Users\86151\Desktop\he-language\c> g++ hello.cpp -o helloss
PS C:\Users\86151\Desktop\he-language\c> ./helloss.exe
hello c++ world ! 
PS C:\Users\86151\Desktop\he-language\c> 

*/