
#include <iostream>

//using namespace std;

// 2. using 선언자 ~ std에서 cout만 쓰기로한것 14줄 보면 endl에는 std::를 붙어줘야하는걸 볼 수 있음
using std::cout;


namespace first_space
{
    void myFunc()
    {
        cout << "This function is in first _space" << std::endl;
    }
}


namespace second_space
{
    void myFunc()
    {
        cout << "This function is in second_space\n";
    }
}

// 1. 전역 범위에서 사용된 using지시자는 해당 namespace의 모든 이름을 전역적으로 사용할 수 있게 만들어줌
using namespace first_space;

int main()
{
    
    myFunc();
    second_space::myFunc();

    std::cout << "Hello World!\n";

    return 0;
}