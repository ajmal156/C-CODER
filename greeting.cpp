#include<iostream>
using namespace std;
int main()
{
    char question[] ="Please enter your first number: ";
    char greeting[] ="Hello, ";
    char yourname [80];
    cout<<question;
    cin>>yourname;
    cout<<greeting<<yourname<<"!";
    return 0;

}