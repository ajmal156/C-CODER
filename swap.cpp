#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1 ="F.sc part I";
    string str2 ="F.sc Part II";
    cout<<"str1 is: "<<str1<<endl;
    cout<<"str2 is: "<<str2<<endl;
    str1.swap(str2);
    cout<<"str1 is: "<< str1<<endl;
    cout<<"str2 is: "<< str2<<endl;
    return 0;
}