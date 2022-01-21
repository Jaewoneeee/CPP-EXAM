

#include <iostream>
#include <string>

using namespace std;

void abc(int& x)
{
    x = 100;
    cout << x << endl;
}

int main()
{
    string food = "Pizza";
    string &meal = food; // meal의 주소에 food값을 넣어줌

    meal = "Hamburger";

    // food의 주소값이 즉 meal에 할당이 된거임
    // 그리고 meal이 바뀌면서 food도 바뀌어버림


    cout << food << "Address of food : " << &food << endl;
    cout << meal << "Address of meal : " << &meal << endl;
    
    int xx = 200;
    abc(xx);
    cout << "xx : " << xx << endl;

    return 0;
}

