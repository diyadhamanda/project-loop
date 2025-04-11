//Develop the programthat print all alphabet from a to z by skipping three alphabet using do while loop//

#include<iostream>
using namespace std;

int main()
{
    char character='a';

    do
    {
        cout<<character<<" ";
        character+=4;
    }
    while (character<='z');

    return 0;
}