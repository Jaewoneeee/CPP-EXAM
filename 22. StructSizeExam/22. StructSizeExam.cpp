
#include <iostream>

using namespace std;

#pragma pack (push, 1) // 이걸 사용하면 bytepadding이 일어나지 않는다

struct ExamSize 
{
    char a;    // 1byte
    int b;     // 4byte
    double c;  // 8byte
};
#pragma pack (pop) // pack과 pop사이에 들어간 구조체는 전부 push,1을 받는다. 이게 ExamSize1을 감싸면 밑에도 13으로 나옴

struct ExamSize1
{
    char a;    // 1byte
    int b;     // 4byte
    double c;  // 8byte
};

int main(int argc, char* argv[])
{
    cout << "Structure ExamSize's each member variable size : " <<  endl;
    cout << "char : " << sizeof(char) << ", int : " << sizeof(int) << ", double : " << sizeof(double) << endl;

    cout << "Size of structur : " << sizeof(ExamSize) << endl;
    cout << "Size of structur : " << sizeof(ExamSize1) << endl;
    //cout << "count of structur : " << _countof(ExamSize) << endl;

    return 0;
}
