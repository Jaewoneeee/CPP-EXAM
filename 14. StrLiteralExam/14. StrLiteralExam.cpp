#include <iostream>

using namespace std;

void IncreamentAll(int* start, int* stop)
{
    int* current = start;
    while (current != stop)
    {
        ++(*current);  // increament value pointed(data) 주소값의 내용을 ++
        ++current;     // increamet pointer(adress) 주소값을 ++
        
    }
}

void PrintAll(const int* start, const int* stop)
{
    const int* current = start;

    while (current != stop)
    {
        cout << *current << endl;  
        ++current;     
    }
}

int main()
{
    int nNumbers[] = { 10, 20, 30 };
    IncreamentAll(nNumbers, nNumbers + 3);
    PrintAll(nNumbers, nNumbers + 3);

    return 0;
}