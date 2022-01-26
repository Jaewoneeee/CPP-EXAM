#include <iostream>

using namespace std;
int main()
{
	int* ptrInt = new int;
	*ptrInt = 1024;

	double* ptrDouble = new double;

	//동적 할당 연산자
	*ptrDouble = 3.142592;
	
	cout << "int type ptr value : " << *ptrInt << endl;
	cout << "double type ptr value : " << *ptrDouble << endl;

	if (ptrInt != NULL)
	{
		delete ptrInt;
		ptrInt = NULL;
	}
	if (ptrDouble != NULL)
	{
		delete ptrDouble;
		ptrDouble = NULL;
	}

	char* pChar = new char;
	*pChar = 'a';
	cout << "Memory address : " << (void*)pChar << "\t value : " << pChar << endl;
	cout << "Heap size : " << sizeof(*pChar) << endl;
	if (pChar != NULL)
	{
		delete pChar;
		pChar = NULL;
	}

	int* ptrNUm = new int;
	*ptrNUm = 24;
	cout << "Memory address : " << (void*)ptrNUm << "\t value : " << ptrNUm << endl;
	cout << "Heap size : " << sizeof(*ptrNUm) << endl;

	float* ptrFNum = new float;
	*ptrFNum = 3.141592;
	cout << "Memory address : " << (void*)ptrFNum << "\t value : " << ptrFNum << endl;
	cout << "Heap size : " << sizeof(*ptrFNum) << endl;

	return 0;
}