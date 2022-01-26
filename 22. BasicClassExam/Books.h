#pragma once

#include <iostream>
#include <string>

using namespace std;

class CBooks
{
public:
	string m_title;   //member변수임을 선언
	string m_author;
	string m_subject;
	int m_nBookId;

	void PrintBookInformation();
	//{
	//	cout << "Book TItle : " << m_title << endl;
	//	cout << "Book author : " << m_author << endl;
	//	cout << "Book subject : " << m_subject << endl;
	//	cout << "Book ID: " << m_nBookId << endl;
	//}
};

void CBooks::PrintBookInformation()
{
	cout << "Book TItle : " << m_title << endl;
	cout << "Book author : " << m_author << endl;
	cout << "Book subject : " << m_subject << endl;
	cout << "Book ID: " << m_nBookId << endl;
}