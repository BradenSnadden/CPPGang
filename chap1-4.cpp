#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float sec, d;

    cout << "enter seconds" << endl;
    cin >> sec;
    d = (9.8*pow(sec,2))/2;
    cout << d;
}