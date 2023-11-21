#include <iostream>
using namespace std;

int main(){
    int l = 0;
    double total = 0, disc = 0;


    cout << "length of carpet" << endl;
    cin >> l;
    disc = 2.75 * 0.15;
    for(int i = l; i > 0; i--){
        
        total += 2.75;

        if(i > 10){
            total -= disc;
        }
       
    }
    cout << total;
}