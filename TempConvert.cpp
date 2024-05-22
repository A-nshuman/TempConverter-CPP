#include <iostream>
#include <cmath>
#include <cctype>

int main() {

    char temp_to;
    char temp_from;
    double temp;
    double result;

    std::cout << "Temp to convert from [k,c,f] : ";
    std::cin >> temp_from;
    temp_from = std::tolower(temp_from);

    std::cout << "Temp to convert to [k,c,f] : ";
    std::cin >> temp_to;
    temp_to = std::tolower(temp_to);

    std::cout << "Enter temperautre : ";
    std::cin >> temp;

    if (temp_from == temp_to) {
        result = temp;
    }

    else if (temp_from == 'k' && temp_to == 'c') {
        result = temp - 273.15;
        std::cout << result << " C";
    }

    else if (temp_from == 'k' && temp_to == 'f') {
        result = (temp - 273.15) * (double) 9/5 + 32;
        std::cout << result << " F";
    }
    
    else if (temp_from == 'c' && temp_to == 'k') {
        result = temp + 273.15;
        std::cout << result << " K";
    }

    else if (temp_from == 'c' && temp_to == 'f') {
        result = temp * (double) 9/5 + 32;
        std::cout << result << " F";
    }

    else if (temp_from == 'f' && temp_to == 'k') {
        result = (temp - 32) * (double) 5/9 + 273.15;
        std::cout << result << " K";
    }

    else if (temp_from == 'f' && temp_to == 'c') {
        result = (temp - 32) * (double) 5/9;
        std::cout << result << " C";
    }

    else {
        std::cout << "Please enter valid temperature unit";
    }

}
