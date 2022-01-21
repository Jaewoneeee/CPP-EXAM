

#include <iostream>


int main()
{
    int x = 100 + 200;
    int y = x + 400;
    double z = (double)y / (double)x;
    int xx = y % x;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << std::endl;
    std::cout << "xx = " << xx << std::endl;

    int nNumber = 10;
    nNumber *= 25;

    std::cout << "nNumber : " << nNumber << std::endl;

    int isX = 10, isY = 15;
    //std::cout << "Return value : " << (isX > isY) << std::endl;
    std::cout << "Return value : " << (isX <= isY) << std::endl;
    // <= , != 등을 활용할땐 항상 왼쪽 기준으로!
    // true면 1, false면 0 출력


    // 비트연산자 
    // 60 : 0011 1100, 13: 0000 1101
    unsigned char A = 60, B = 13;
    std::cout << "(A & B) = " << (unsigned)(A & B) << std::endl;
    std::cout << "(A ! B) = " << (A | B) << std::endl;
    std::cout << "(A ^ B) = " << (A ^ B) << std::endl;
    std::cout << "~A = " << ~A << std::endl;

    return 0;
}

