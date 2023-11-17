#include <iostream>
#include "problem.h"
#include <vector>
using namespace std;

int main(){

    problem h;

    vector<int> b = h.SAP(8,6);

    cout << b[0] << "   " << b[1] << endl;
    
    return 0;

}