#include <iostream>
#include <iomanip>

int main()
{
    // Declare and initialize the variables
    float number1{1.12345678901234567890f}; // Precision : 7
    double number2{1.12345678901234567890}; // Precision : 15
    long double number3{1.12345678901234567890L};

    // Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

    // Precision
    std::cout << std::setprecision(20);                   // Control the precision from std::cout
    std::cout << "number1 is : " << number1 << std::endl; // 7 digits
    std::cout << "number2 is : " << number2 << std::endl; // 15'ish digits
    std::cout << "number3 is : " << number3 << std::endl; // 15+ digits

    // float problems : The precision is usually too limited
    // for a lot of applications
    float number4 = 192400023.0f;

    std::cout << "number4 : " << number4 << std::endl;

    //Scientific notation
    //What we have seen so far in terms of floating point types
    //is fixed notation. There is anothewr notation, scientific
    //that is handy if you have really huge numbers or small numbers
    //to represent

    double number5 {192400023};
    double number6 {1.92400023e8};

    return 0;
}