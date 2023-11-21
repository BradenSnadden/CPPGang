#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> people;
    int n, m, l, t = 0;

    cout << "num for n" << endl;
    cin >> n;
    cout << "num for m" << endl;
    cin >> m;
    cout << "num for l" << endl;
    cin >> l;

    for(int i = 0; i < n; i++){
        people.push_back(0);
    }

    int i = 0;

    while(1){
        i %= people.size();
        people[i]++;

        if(people[i] == m){
            break;
        }

        else if(people[i] % 2 == 0){
            t++;
            i -= l - n;
        }
        else{
            t++;
            i += l;
        }    
        
    

        
    }

    for(int i = 0; i < people.size(); i++){

            cout << people[i] << endl;
        }
    cout << t;

}