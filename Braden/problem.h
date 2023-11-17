#include <iostream>
#include <vector>
using namespace std;

class problem{
private:
    
public:
    void SAP(int n, int m);
    void printer();
    void money();
    void gravity();

};

void problem::SAP(int n, int m){

    cout << "Sum: " << n+m << " Product: " << n*m << endl;

}

void problem::printer(){

    for (int i = 0; i < 20; i++){
        cout << '*';
    }
    cout << endl;
    for (int i = 0; i < 20; i++){
        cout << ' ';
    }
    cout << endl;
    cout << "      C       S      " << endl;
    for (int i = 0; i < 20; i++){
        cout << ' ';
    }
    cout << endl;
    for (int i = 0; i < 20; i++){
        cout << '*';
    }
    

}

void problem::money(){

    float q,d,n;
    cout << "# of Quarters: " << endl;
    cin >> q;
    cout << "# of Dimes: " << endl;
    cin >> d;
    cout << "# of Nickels: " << endl;
    cin >> n;
    cout << 25*q + 10*d + 5*n << " cents" << endl;
}

void problem::gravity(){

    float t;

    cout << "How many seconds in freefall? " << endl;
    cin >> t;

    cout << 9.81 * t * t / 2 << endl;


}