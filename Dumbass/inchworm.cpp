#include <iostream>
using namespace std;

int main(){
    int b, r, l, total;

    cout << "length of branch" << endl;
    cin >> b;

    cout << "amount of rests" << endl;
    cin >> r;

    cout << "amoutn of leaves" << endl;
    cin >> l;

    for(int i = 0; i < b; i+=r){
        if(i == 0){
            total += 1;
        }
        else if(!(i % l)){
            total += 1;
        }
    }
    cout << total;

}