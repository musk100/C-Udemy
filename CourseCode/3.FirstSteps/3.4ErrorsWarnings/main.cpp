#include <iostream>

int main()
{
    // Compile time error
    std::cout << "Hello World!" << std::endl;

    // Run time error
    int value = 7 / 0;
    return 0;
}