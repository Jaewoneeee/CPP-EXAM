
#include <iostream>
#include <string>
#include "Books.h"
#include "CCar.h"

using namespace std;

// 헤더파일 이용을 위한 주석
//class CBooks
//{
//public:
//	string m_title;   //member변수임을 선언
//	string m_author;
//	string m_subject;
//	int m_nBookId;
//
//	void PrintBookInformation();
//	//{
//	//	cout << "Book TItle : " << m_title << endl;
//	//	cout << "Book author : " << m_author << endl;
//	//	cout << "Book subject : " << m_subject << endl;
//	//	cout << "Book ID: " << m_nBookId << endl;
//	//}
//};
//
//void CBooks::PrintBookInformation()
//{
//	cout << "Book TItle : " << m_title << endl;
//	cout << "Book author : " << m_author << endl;
//	cout << "Book subject : " << m_subject << endl;
//	cout << "Book ID: " << m_nBookId << endl;
//}

int main()
{
	CBooks booksObj; // booksObj는 클래스 오브젝트 
	booksObj.m_title = "Perfect C++ ";
	booksObj.m_author = "Jaewon Kim";
	booksObj.m_subject = "C++";
	booksObj.m_nBookId = 8840292;

	//cout << "Book TItle : " << booksObj.m_title << endl;
	//cout << "Book author : " << booksObj.m_author << endl;
	//cout << "Book subject : " << booksObj.m_subject << endl;
	//cout << "Book ID: " << booksObj.m_nBookId << endl;

	booksObj.PrintBookInformation();

	cout << "==========" << endl;

	CBooks cppBook; 
	cppBook.m_title = "Money Ball";
	cppBook.m_author = "jichan Kim";
	cppBook.m_subject = "SS";
	cppBook.m_nBookId = 911352;
	cppBook.PrintBookInformation();

	cout << "==========" << endl;

	CCar carObj;
	carObj.m_strCompany = "Benz";
	carObj.m_strCarName = "S class";
	carObj.m_strCarNo = "NY 1948";
	carObj.PrintCarInformation();

	return 0;
}

