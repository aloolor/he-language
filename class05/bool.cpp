#include <iostream>
using namespace std;

int main()
{
    bool b1 = true;
    int i = b1;
    bool b2 = -256;
    cout << "i:" << i << "b1:" << b1 << "b2:" << b2 << endl;
    cout << true << endl;
    return 0;
}
//表达内存用size_t  ?????


//<csdint>  引入该头文件，  int8_t,int16_t,int32_t,int64_t,uint8_t,uint16_t,uint32_t,uint64_t
//           定义宏        INT8_MIN...    INT8_MAX...