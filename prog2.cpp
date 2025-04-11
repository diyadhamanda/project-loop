//Develop a program to find the sum of the number's first and last digit//

#include<iostream>
using namespace std;

int main()
{

    int n, sum=0,lastDigit,firstDigit;

    cout<<"ENTER A NUMBER :";
    cin>>n;

    lastDigit=n%10;

    while(n>0)
    {
        firstDigit=n%10;
        sum+=firstDigit;
        n=n/10;
    }

    cout<<"Sum of First Digit & Last Digit :"<<firstDigit+lastDigit;

    return 0;
}

