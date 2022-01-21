

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "Hamburger";
    string* ptrFood = &food;

    // * 는 그 방에 있는 값을 찍는다
    cout << "food : " << food << " / Address of food : " << &food << endl;
    cout << "ptrFood : " << *ptrFood << " / Address of ptrFood : " << ptrFood << endl;

    *ptrFood = "Pizza";

    int nNumber = 1234;
    int* ptrNumber = &nNumber;

    cout << "nNumber : " << nNumber << " / Address of nNumber : " << &nNumber << endl;
    cout << "ptrNumber : " << *ptrNumber << " / Address of ptrNumber : " << ptrNumber << endl;
}

