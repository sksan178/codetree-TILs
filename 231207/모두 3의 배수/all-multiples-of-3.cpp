#include <iostream>
using namespace std;

int main() {
    int m[5];
    int count = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> m[i];
        if(m[i] % 3 == 0){
            count++;
        }
    }

    if(count == 5){
        cout << 1;
    }else{
        cout << 0;
    }

    return 0;
}