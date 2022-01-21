
#include <iostream>
#include <stdio.h>
#include <string>

#include "Variables_exam.hpp"
// 약간 react에서 import로 데려오는 느낌 

//#define width   1024
//#define height  768
//#define new_line "\n";
 
using namespace std;

// 예제1
//int main(int argc, char* argv[]) // 이게 원형이라함
//{
//    const int nNumber = 10;
//    
//    cout << nNumber << endl;
//
//    const int iMinutesPerHour = 60;
//    const float PI = 3.141592;
//    
//    cout << "iMinutesPerHour is " << iMinutesPerHour << NEW_LINE;
//    cout << "PI is " << PI << endl;
//    printf("iMinutesPerHour[%d], PI[%f]\n", iMinutesPerHour, PI);
//
//    cout << "Define const WIDTH = " << WIDTH << NEW_LINE;
//    cout << "Define const HEIGHT = " << HEIGHT << NEW_LINE;
//
//    // 디버깅 - 명령 인수 - hello world
//    // 근데 이걸로 디버깅을 한다는건데 머 어떻게 활용한다는 건지 모르겠다
//    if (argc > 1)
//    {
//        cout << "argc = " << argc << endl;
//        for (int i = 0; i < argc; i++)
//        {
//            cout << "argv[" << i << "J" << "=" << argv[i] << endl;
//        }
//    }
//
//    return 0;
//}


// 예제2 . type
int main()
{
	int nNum = 6;
	float fNum = 6.12345678;
	double dNum = 8.123456789012341;
	char cLetter = 'Z';
	bool isVar = true, isFalse = false;
	string strText = "Hello \t \bC++ \a";
	
	cout << "int : " << nNum << endl;
	cout << "fNum : " << fNum << endl;

	cout.precision(13);
	cout << "dNum : " << fixed << dNum << endl;

	cout << "cLetter : " << cLetter << endl;
	cout << "bool isVar : " << isVar <<", bool isFalse : " << isFalse << endl;
	cout << "strText : " << strText << endl;

	// %d는 정수 숫자 출력
	printf("cLetter number : %d\r\n", cLetter);
	cout << "=================" << endl;

	float f1 = 24e3;
	double d1 = 15E4;
	cout << "f1 : " << f1 << endl;
	cout << "d1 : " << d1 << endl;

	char chA = 'A';
	/*char chAA = 65;
	char chBB = 66;
	char chCC = 67;*/

	char chAA = 0x41;
	char chBB = 0x42;
	char chCC = 0x43;

	// (int)는 숫자형으로 형변환을 해준다
	cout << "chA : " << (int)chA << endl;
	cout << chAA << chBB << chCC << endl;

	string strGreeting = "Hello C++";
	cout << strGreeting << endl;


	return 0;
}
