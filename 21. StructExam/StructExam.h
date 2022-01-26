#pragma once

using namespace std;

// namespace에 또 넣기 ㅋㅋ 슈발
namespace BooksInfo
{
    // struct 원형
    //struct Books
    //{
    //    char title[50];
    //    char author[50];
    //    char subject[100];
    //    int book_id;
    //};

    typedef struct
    {
        char title[50];
        char author[50];
        char subject[100];
        int book_id;
    } Books;

   /* void PrintBooksInformation(Books* book);*/

    void PrintBooksInformation(Books* book)
    {
        cout << "Book title : " << book->title << ", author : " << book->author << ", subject : " << book->subject << ", book_id : " << book->book_id << endl;
    }

    //struct Books SetBooksInformation(char* title, char* author, char *subject, int bookId)
    Books SetBooksInformation(char* title, char* author, char *subject, int bookId)
    {
        //truct Books book;
        Books book;

        strcpy_s(book.title, _countof(book.title), title);   // _countof를 써주는게 윈도우에서 안정적이다
        strcpy_s(book.author, _countof(book.author), author);
        strcpy_s(book.subject, _countof(book.subject), subject);
        book.book_id = bookId;
 
        return book;
    }
}

