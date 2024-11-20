#include <iostream>
using namespace std;

int main() 
{
    int num, num2, operation;
    double result;
    bool isContinue = true;
    string opt;
do
{
    cout <<"Enter Number 1: ";
    cin >>num;
    cout <<"Enter Number 2: ";
    cin >>num2;
    cout <<"Select an Operator:\n[1]add\n[2]sub\n[3]mult\n[4]div\noption: ";
    cin >>operation;
    if (operation == 1)
    {
        cout <<"the sum is: " << num + num2;
    }
    else if (operation == 2)
    {
        cout <<"the diff is: " << num - num2;
    }
    else if (operation == 3)
    {
        cout <<"the product is: " << num * num2;
    }
    else if (operation == 4)
    {
        cout <<"the quo is: " << num / num2;
    }
    cout <<". Do you want to do more? [yes|no]: ";
    cin >>opt;
    if (opt =="yes")
        isContinue = true;
    else
    isContinue = false;
}while(isContinue);
    
    return 0;
}