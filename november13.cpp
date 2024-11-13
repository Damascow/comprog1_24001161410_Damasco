#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, I am Zhi!!! Welcome to my first C++ application \n";
    std::string name;
    std::cout << "Hey! What is your name? ";
    std::cin >> name;
    std::cout << "Good Day " << name << "! It's nice to meet you\n";

    int month;
    int day;
    int year;
    int leapyear = year % 4;

    std::cout << "When is your birthday?\n";
    std::cout << "Month: ";
    std::cin >> month;
    std::cout << "Day: ";
    std::cin >> day;
    std::cout << "Year: ";
    std::cin >> year;


    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (isLeapYear) {
        std::cout << year << " is a leap year\n";
    } else {
        std::cout << year << " is not a leap year\n";
    }


    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        cout << "Your zodiac sign is AQUARIUS\n";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        cout << "Your zodiac sign is PISCES\n";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        cout << "Your zodiac sign is ARIES\n";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        cout << "Your zodiac sign is TAURUS\n";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        cout << "Your zodiac sign is GEMINI\n";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        cout << "Your zodiac sign is CANCER\n";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        cout << "Your zodiac sign is LEO\n";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        cout << "Your zodiac sign is VIRGO\n";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        cout << "Your zodiac sign is LIBRA\n";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        cout << "Your zodiac sign is SCORPIO\n";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        cout << "Your zodiac sign is SAGITTARIUS\n";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        cout << "Your zodiac sign is CAPRICORN\n";
    } else {
        cout << "INVALID INPUT\n";
    }

    return 0;
}
