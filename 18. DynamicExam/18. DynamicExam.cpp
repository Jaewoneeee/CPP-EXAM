
#include <iostream>
//#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i, totalLen;
    int arrLen = 3, addLen = 2;
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

    totalLen = arrLen + addLen;
    ptrArr = (int*)realloc(ptrArr, (totalLen * sizeof(int)));

    if (ptrArr == NULL) // dynamic allocation fail
    {
        cout << "Dynamic memory allocation fail....." << endl;
        exit(2);  // exit가 있을때는 그냥 양의 정수를 준다 
    }

    cout << "Dynamic allocation memory initial value : \n";
    for (int i = 0; i < totalLen; i++)
    {
        cout << ptrArr[i] << endl;
    }

    free(ptrArr);

    //==========================
    // 메모리를 왜 사용하는지에 대한 예제

    //const char* pStr = "This is character string pointer";
    //char* pStrDest = (char*)calloc(strlen(pStr) + 1, sizeof(char));

    //cout << "pStrDest Length : " << strlen((const char*)pStrDest) << endl;
    //strncpy_s(pStrDest, strlen((const char*)pStr) + 1, pStr, strlen((const char*)pStr) + 1);   // 메모리에 가져다 쓰는 코드
    //cout << "pStrDest Length : " << strlen(pStrDest) << endl;
    //cout << "pStrDest : " << pStrDest << endl;

    //free(pStrDest);

    //===========================
    // 다른 예제 

    //char cAlphabet, * pAlphabet, *ptr;
    //pAlphabet = (char*)calloc(35, sizeof(char));

    //if (pAlphabet == NULL)
    //{
    //    cout << "Dynamic memory allocation fail....." << endl;
    //    exit(1);
    //}

    //ptr = pAlphabet; 

    //for (cAlphabet = 0x41; cAlphabet < 0x5B; cAlphabet++)
    //{
    //    // 포인트ㄹㅇㄹㄻㄴㅇㄹㄴ
    //    *ptr++ = cAlphabet;
    //}

    //// 문자열 마지막에 NULL string해준것이고
    //*ptr = '\0';

    //cout << "Alphabet String : " << pAlphabet << endl;

    //free(pAlphabet);


    return 0;
}
