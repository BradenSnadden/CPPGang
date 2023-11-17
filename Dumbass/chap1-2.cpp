#include <iostream>
using namespace std;

int main(){
    for(int i; i < 20; i++){
        cout << "*";
    }
    cout << endl;
    for(int i = 0; i < 20; i++){
        if(i == 5){
            cout << "c";
        }
        else if(i == 15){
            cout << "s";
        }
        else{
            cout << " ";
        }
    }
    cout << endl;
    for(int i; i < 20; i++){
        cout << "*";
    }
}