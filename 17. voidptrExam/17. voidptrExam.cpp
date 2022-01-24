

#include <iostream>
#include "voidptrExam.h"

using namespace std;


int main()
{
    char a = 'x';
    int b = 1024;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));

    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}

void increase(void* pData, int nSize)
{
    if (nSize == sizeof(char))
    {
        char* pChar;            // 초기 주소값
        pChar = (char*)pData;
        ++(*pChar);             // 그 데이터 숫자로변환되어있는 그거 하나 ++한다는 소리
    }
    else if (nSize == sizeof(int))
    {
        int* pInt;
        pInt = (int*)pData;
        ++(*pInt);
    }
}
