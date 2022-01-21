
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 포인터 값을 주는 여러가지 방법 
    // 주소값과 방 이걸 잘 이해해야할듯

    int arrNumber[5];
    int* ptr;
    ptr = arrNumber; *ptr = 10; //arrNumber[0] 에 넣는것이랑 똑같은 개념
    ptr++; *ptr = 20; // int는 4byte이기 때문에 그만큼 공간을 ++해준다는 의미. 즉, arrNumber[1]
    ptr = &arrNumber[2]; *ptr = 30; //arrNumber[2]
    ptr = arrNumber + 3; *ptr = 40; //arrNumber[3]
    ptr = arrNumber; *(ptr + 4) = 50; // ptr에 주소를 다시 주고, 그 이후 ptr에 +4를 해준것과 같다. 즉 arrNumber[4]
                       
    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i << "] = " << arrNumber[i] << endl;
    }

    int var = 20;
    int* ip;

    ip = &var;

    cout << var << endl;
    cout << ip << endl;
    cout << *ip << endl;

    return 0;
}



