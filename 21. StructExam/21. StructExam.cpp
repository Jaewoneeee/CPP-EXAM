
#include <iostream>

using namespace std;

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void PrintBooksInformation(Books* book);

int main()
{
    //struct Books book1;
    //struct Books book2;

    // 포인터로 바꾸기전 ( 밑에 book1. 으로 바꿔주면됨 -> 말고 / PrintBooksInformation * 없애기)
    // Books book1;
    // Books book2;

    // 포인터 활용한 new Books로 동적할당
    Books* book1 = new Books;  
    Books* book2 = new Books;

    strcpy_s(book1->title, _countof(book1->title), "Learn C++ Programming 21 days");
    strcpy_s(book1->author, _countof(book1->author), "Jaewon Kim");
    strcpy_s(book1->subject, _countof(book1->subject), "C++ liquores");
    book1->book_id = 12341;
    PrintBooksInformation(book1);

    strcpy_s(book2->title, "Learn JAVA Programming 45 days");
    strcpy_s(book2->author, "Maria");
    strcpy_s(book2->subject, "JAVA liquores");
    book2->book_id = 98561;
    PrintBooksInformation(book2);


   /* cout << "Book title : " << book1.title << ", author : " << book1.author << ", subject : " << book1.subject << ", book_id : " << book1.book_id << endl;
    cout << "Book title : " << book2.title << ", author : " << book2.author << ", subject : " << book2.subject << ", book_id : " << book2.book_id << endl;*/
    delete book1;
    delete book2;


    return 0;
}

void PrintBooksInformation(Books* book)
{
    cout << "Book title : " << book->title << ", author : " << book->author << ", subject : " << book->subject << ", book_id : " << book->book_id << endl;
}
