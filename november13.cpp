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
    
    {
    int month,date;
    cout<<" Enter your birth month:";
    cin>>month;
    cout<<" Enter your birth date:";
    cin>>date; 
    
    if (( month == 1 && date >= 20) || ( month == 2 && date <=18))
    {
         cout<<" Your zodiac sign is AQUARIUS\n";
         
    }
    else if (( month == 2 && date >= 19) || ( month == 3 && date <= 20))
    {
         cout<<" Your zodiac sign is PISCES\n";
    }
    else if (( month == 3 && date >= 21) || ( month == 4 && date <= 19))
    {
         cout<<" Your zodiac sign is ARIES\n";
    }
    else if (( month == 4 && date >= 20) || ( month == 5 && date <= 20))
    {
         cout<<" Your zodiac sign is TAURUS\n";
    }
    else if (( month == 5 && date >= 21 ) || ( month == 6 && date <= 20 ))
    {
         cout<<" Your zodiac sign is GEMINI\n";
    }
    else if (( month == 6 && date >= 21 ) || ( month == 7 && date <= 22 ))
    {
         cout<<" Your zodiac sign is CANCER\n";
    }
    else if (( month == 7 && date <= 23 ) || ( month == 8 && date <= 22))
    {
         cout<<" Your zodiac sign is LEO\n";
    }
    else if (( month == 8 && date >= 23 ) || ( month == 9 && date <= 22 ))
    {
         cout<<" Your zodiac sign is VIRGO\n";
    }
    else if (( month == 9 && date >= 23 ) || ( month == 10 && date <= 22))
    {
         cout<<" Your zodiac sign is LIBRA\n";
    }
    else if (( month == 10 && date >= 23 ) || ( month == 11 && date <= 21))
    {
         cout<<" Your zodiac sign is SCORPIO\n";
    }
    else if (( month == 11 && date >= 22 ) || ( month == 12 && date <= 21))
    {
         cout<<" Your zodiac sign is SAGUITTARIUS\n";
    }
    else if (( month == 12 && date >= 22 ) || ( month == 1 && date <= 19 ))
    {
         cout<<" Your zodiac sign is CAPRICORN\n";
    }
    else
    {
        cout<<" INVALID INPUT";
    }
         system("pause");
}
