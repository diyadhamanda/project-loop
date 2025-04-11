//Develop a number to count a  total number of a digit in number//

#include<iostream>
using namespace std;

int main()
{
    int i, sum=0;

    cout<<"ENTER A NUMBER :";
    cin>>i;

    while(i!=0)
    {
        i=i/10;
        sum++;
    }
    

    cout<<"TOTAL NUMBER OF DIGIT :"<<sum;
    return 0;
}