
#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i;
    int arrLen = 3;
    int* ptrArr;

    ptrArr = (int*)malloc(arrLen * sizeof(int)); // dynamic allocation memory

    if (ptrArr == NULL) // dynamic allocation fail
    {
        cout << "Dynamic memory allocation fail....." << endl;
        exit(1);  // exit가 있을때는 그냥 양의 정수를 준다 
    }

    cout << "Dynamic allocation memory initial value : \n";
    for (int i = 0; i < arrLen; i++)
    {
        cout << ptrArr[i] << endl;
    }

    free(ptrArr);

    return 0;
}

