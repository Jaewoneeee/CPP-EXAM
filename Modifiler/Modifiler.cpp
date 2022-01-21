

#include <iostream>

using namespace std;

int main()
{
    short int i;
    short unsigned int j;

    j = 50000;
    i = j;

    // 보통 내가 -값이 필요하지 않으면 unsigned해주면 된다
    cout << "i(signed) : " << i << ", j(unsigned) : " << j << endl;

    return 0;
}

