
#include <iostream>
#include "StructExam.h"

// 헤더파일에서 선언을 했기 떄문에 주석처리 가능 
//using namespace std;
using namespace BooksInfo;

// ===== 헤더파일 사용 예시를 위한 주석처리
//struct Books
//{
//    char title[50];
//    char author[50];
//    char subject[100];
//    int book_id;
//};

//void PrintBooksInformation(Books* book);

int main()
{
    //struct Books book1;
    //struct Books book2;

    // 포인터로 바꾸기전 ( 밑에 book1. 으로 바꿔주면됨 -> 말고 / PrintBooksInformation * 없애기)
    // Books book1;
    // Books book2;

    // 포인터 활용한 new Books로 동적할당 
    Books* book1 = new Books;  // Memory allocated in Heap Memory

    // 동적할당 X
    Books book2;  // Memory assign to stack

    strcpy_s(book1->title, _countof(book1->title), "Learn C++ Programming 21 days");   // _countof를 써주는게 윈도우에서 안정적이다
    strcpy_s(book1->author, _countof(book1->author), "Jaewon Kim");
    strcpy_s(book1->subject, _countof(book1->subject), "C++ liquores");
    book1->book_id = 12341;
    PrintBooksInformation(book1);

    strcpy_s(book2.title, "Learn JAVA Programming 45 days");
    strcpy_s(book2.author, "Maria");
    strcpy_s(book2.subject, "JAVA liquores");
    book2.book_id = 98561;
    PrintBooksInformation(&book2);  //우리가 출력하는거에는 포인터로 넘겨줘야 하기때문에 여기서 주소를 넘겨줘야함. 아하!


    // 헤더파일에서 return으로 받아오기
    // typedef쓰기전 / struct Books book3 = SetBooksInformation((char*)"Wellcom C++", (char*)"Danny", (char*)"React", 85092);
    Books book3 = SetBooksInformation((char*)"Wellcom C++", (char*)"Danny", (char*)"React", 85092);
    PrintBooksInformation(&book3);

    // 56~59줄을 했기때문에 주석가능
    //cout << "Book title : " << book1.title << ", author : " << book1.author << ", subject : " << book1.subject << ", book_id : " << book1.book_id << endl;
    //cout << "Book title : " << book2.title << ", author : " << book2.author << ", subject : " << book2.subject << ", book_id : " << book2.book_id << endl;
    delete book1;
    
    //delete book2;


    return 0;
}

// namespace 사용을위한 주석
//void PrintBooksInformation(Books* book)
//{
//    cout << "Book title : " << book->title << ", author : " << book->author << ", subject : " << book->subject << ", book_id : " << book->book_id << endl;
//}
