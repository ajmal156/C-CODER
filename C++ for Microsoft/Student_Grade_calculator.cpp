#include<iostream>

int main(){


    // Problem 1: Lost precision in financial calculation
    int dollars = 1000;
    float interestRate = 0.05;// 5%
    int interest = dollars * interestRate;  // Issue here!    
    std::cout<< "Interest earned: $" << interest << std::endl;
    // Problem 2: Unexpected truncation
    double price = 19.99;
    int wholeDollars = price; // Issue here!
    std::cout << "Price in whole dollars: $" << wholeDollars << std::endl;
    
    // Integer to double conversion
    int TotalSum = 95;
    int Score  = 3;
    double average = static_cast<double>(TotalSum) / Score;
    std::cout <<"Average (implicit): " << average <<std::endl;

    // Character to integer
    char grade = 'A';
    int gradeValue  = static_cast<int>(grade);
    std::cout<<"ASCII value of 'A': " << gradeValue << std::endl;

    return 0;
}