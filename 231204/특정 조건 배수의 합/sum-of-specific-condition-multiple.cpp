#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int s = 0;
    
    if(a < b){
        for(int i = a; i <= b; i++){
            if(i % 5 == 0){
                s += i;
            }
        }
    }else{
        for(int i = b; i <= a; i++){
            if(i % 5 == 0){
                s += i;
            }
        }
    }

    cout<< s;
    

    return 0;
}