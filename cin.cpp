#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (std::cin.fail()) {  // Check if input failed
        std::cin.clear();  // Reset error state
        std::cin.ignore(1000, '\n');  // Discard invalid input
        std::cout << "Invalid input. Please enter a number next time!" << std::endl;
    } else {
        std::cout << "Your age is: " << age << std::endl;
    }

    return 0;
}
