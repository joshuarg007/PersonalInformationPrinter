#include <iostream>
#include <string>

int main() {
    // Variables to store user info
    std::string first, last, addr, city, zip;

    // Prompt user for input
    std::cout << "Enter your first name: ";
    std::getline(std::cin, first);

    // Prompt user for input
    std::cout << "Enter your last name: ";
    std::getline(std::cin, last);

    // Prompt user for input
    std::cout << "Enter your street address: ";
    std::getline(std::cin, addr);

    std::cout << "Enter your city: ";
    std::getline(std::cin, city);

    // Prompt user for input
    std::cout << "Enter your zip code: ";
    std::getline(std::cin, zip);

    // Print out personal information
    std::cout << "\n----------------------------------------\n";
    std::cout << "Your Information:\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Name: " << first << " " << last << "\n";
    std::cout << "Address: " << addr << "\n";
    std::cout << "City: " << city << "\n";
    std::cout << "Zip Code: " << zip << "\n";
    std::cout << "----------------------------------------\n";

    return 0;
}
