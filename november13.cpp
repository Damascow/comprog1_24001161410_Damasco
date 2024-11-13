#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, I am zhi !!! Welcome to my first C++ application \n";
    std::string x;
    std::cout << "Hey! What is your name? ";
    std::cin >> x;
    std::cout << "Good Day " << x; 
    std::cout << "! It's nice to meet you\n";
    
    int month;
    int day;
    int year;
    int leapyear = year % 4;
    
    std::cout << "When is your birthday?\n";
    std::cout << "month; ";
    std::cin >> month;
    std::cout << "day; ";
    std::cin >> day;
    std::cout << "year; ";
    std::cin >> year;
    
    if(year % 4 == 0)
    std::cout<< year << "is a leap year";
    else if(year % 4 == 0 && year % 100 !=0)
    std::cout<< year << " is a leap year";
    else
    cout<< year << " is not a leap year";
    
    
    
    return 0;
}