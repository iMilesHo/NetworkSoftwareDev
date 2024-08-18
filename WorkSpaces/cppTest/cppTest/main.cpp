#include <iostream>

int main() {
    signed char delta = 'a'; // Minimum value for signed char
    
    delta += 1;
    std::cout << "Initial value of delta: " << static_cast<int>(delta) << std::endl;
    
    delta += 1;
    std::cout << "Initial value of delta: " << static_cast<int>(delta) << std::endl;

    // Using signed char in arithmetic operations
    for (signed char i = -5; i < 6; ++i) {
        std::cout << static_cast<int>(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
