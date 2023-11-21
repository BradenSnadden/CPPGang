#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //SSD-B---BD-DDSB-----S-S--------S-B----BSB-S--B-S-D
    string street = "---B--S-D--S--\n";
    int t = 0;
    for(int i = 0; i < street.size(); i++){
        // cout << street[i];
        if(street[i] == 'B'){
            if(i <= 1){
                continue;
            }
            else
                if(street[i - 1] == '-'){
                    street[i - 1] = ' ';
                    street[i - 2] = ' ';
                }    
        }
        if(street[i] == 'S'){
            if(i <= 1 || i >= street.size()){
                continue;
            }
            else
                if(street[i - 1] == '-'){
                    street[i - 1] = ' ';
                    street[i + 1] = ' ';
                }   
        }
        if(street[i] == 'D'){
            if(street[i + 1] == '-'){
                street[i + 1] == ' ';
            }
        }
        
    }
    for(int i = 0; i < street.size(); i++){
        if(street[i] == '-'){
            t += 1;
        }
    }
    cout << street;
    cout << t;
    return 0;
}