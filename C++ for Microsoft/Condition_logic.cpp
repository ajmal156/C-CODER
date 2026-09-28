#include<iostream> 
#include<string>

using namespace std;

int main(){
    string playerChoice;
    cout << "Welcome to the Adventure Game!" << endl;
    cout << "You stand at a crossroads in a mysterious forest." << endl;
    cout << "Do you want to go 'left' or 'right'?: ";
    cin >> playerChoice;
    
    if(playerChoice == "left"){
        cout << "You discover a hidden treasure chest!" << endl;
        cout << "Inside you find 100 gold coins." << endl;
    }else if (playerChoice == "right"){
        cout << "You meet a wise old sage." << endl;
        cout << "The sage gives you a magical potion." << endl;
    }else {
        cout << "You stand still, unsure of your choice." << endl;
        cout << "Time passes and nothing happens." << endl;
    }

    return 0;
}
