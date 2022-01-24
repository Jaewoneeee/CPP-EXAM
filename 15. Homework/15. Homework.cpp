#include <iostream>

using namespace std;

void serogugu(int* start, int* stop)
{
    int* gugu = start;
    while (gugu != stop)
    {
        for (int i = 1; i<10; i++)
        {
            cout << gugu << "x" << i << "=" << (*gugu * i) << endl;
        }
        //++(*gugu);  // increament value pointed(data) 주소값의 내용을 ++
        //++gugu;     // increamet pointer(adress) 주소값을 ++

        cout << *gugu << endl;
    }
}

//void garogugu(const int* start, const int* stop)
//{
//    const int* current = start;
//
//    while (current != stop)
//    {
//        cout << *current << endl;
//        ++current;
//    }
//}

int main()
{
    int gugu[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
    serogugu (gugu, gugu + 9);
    /*garogugu (gugu, gugu + 9);*/

    return 0;
}