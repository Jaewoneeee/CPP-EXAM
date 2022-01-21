

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int grade[3] = { 85, 65, 90 };

    cout << grade << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << &grade[i] << endl;
    }
    // & : 참조연산자 

    string itCompany[] = { "Aplle", "Microsotf", "IBM", "Amazon", "ESP Guitar" };
    //string itCompany[5];
    //itCompany[0] = "Aplle";
    //itCompany[1] = "Microsotf";
    //itCompany[2] = "IBM";
    //itCompany[3] = "Amazon";
    //itCompany[4] = "ESP Guitar";

    cout << itCompany[4] << endl; 
    itCompany[0] = "Snakebyte Guitar";
    for (string str : itCompany)
        cout << str << endl;

    int nNumber[] = { 12, 34, 56, 89 };
    for (int i = 0; i < (sizeof(itCompany) / sizeof(itCompany[0])); i++)
        cout << "sizeof itComapany[" << i << "]:" << itCompany[i] << endl;

    return 0;
}
