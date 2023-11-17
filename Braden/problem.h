#include <iostream>
#include <vector>
using namespace std;

class problem{
private:
    
public:
    vector<int> SAP(int n, int m);

};

vector<int> problem::SAP(int n, int m){

    return {n+m, n*m};

}

