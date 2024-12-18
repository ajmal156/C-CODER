#include<iostream>
using namespace std;
int main(){
    
    int birthdate,currentdate;
    cout<<"Please enter your birth date: "<<endl;
    cin>>birthdate;

    currentdate =2024-birthdate;

    cout<<"Your current age is: ";
    cout<<currentdate;

    return 0 ;
    
}