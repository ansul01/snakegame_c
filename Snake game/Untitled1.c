#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159265358979323846;

    // Display the value of pi
    std::cout << "The value of pi : " << pi << std::endl;

    // Display the value of pi with 4 decimal places of total width 8
    std::cout << "The value of pi 4 decimal place of total width 8 : |" << std::fixed << std::setprecision(4) << std::setw(8) << pi << "|" << std::endl;

    // Display the value of pi with 4 decimal places of total width 10
    std::cout << "The value of pi 4 decimal place of total width 10 : |" << std::fixed << std::setprecision(4) << std::setw(10) << pi << "|" << std::endl;

    // Display the value of pi with 4 decimal places of total width 8 and left alignment
    std::cout << "The value of pi 4 decimal place of total width 8 : |" << std::fixed << std::setprecision(4) << std::left << std::setw(8) << pi << "|" << std::endl;

    // Display the value of pi with 4 decimal places of total width 10 and left alignment
    std::cout << "The value of pi 4 decimal place of total width 10 : |" << std::fixed << std::setprecision(4) << std::left << std::setw(10) << pi << "|" << std::endl;

    // Display the value of pi in scientific format
    std::cout << "The value of pi in scientific format is : " << std::scientific << pi << std::endl;

    // Display the status in number
    int status = 0;
    std::cout << "Status in number : " << status << std::endl;

    // Display the status in alphabet
    if (status == 0) {
        std::cout << "Status in alphabet : false" << std::endl;
    } else {
        std::cout << "Status in alphabet : true" << std::endl;
    }

    return 0;
}
