// finds the size and limits of shorts and doubles
// code by Ryuya Hirota

#include <iostream>
#include <limits>

int main() {
    std::cout << "size of short:  " << sizeof(short) << std::endl;
    std::cout << "size of double: " << sizeof(double) << std::endl;
    std::cout << "limits of short: min: " << std::numeric_limits<short>::min() << ", max: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "limits of double: min: " << std::numeric_limits<double>::min() << ", max: " << std::numeric_limits<double>::max() << std::endl;

    return 0;
}
