#include <iostream>
using namespace std;

int main(){
    int q, d, n, total = 0;

    cout << "enter quarter" << endl;
    cin >> q;
    cout << "enter dime"<< endl;
    cin >> d;
    cout << "enter nickel" << endl;
    cin >> n;

    for(int i = 0; i < q; i++){
        total += 25;
    }
    for(int i = 0; i < d; i++){
        total += 10;
    }
    for(int i = 0; i < d; i++){
        total += 5;
    }
    cout << total;
}