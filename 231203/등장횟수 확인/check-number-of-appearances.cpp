#include <iostream>
using namespace std;

int main() {
    int n[5] = {0};
    int count = 0; 
    
    for(int i = 0; i < sizeof(n)/sizeof(int); i++){
        cin >> n[i];

        if(n[i] % 2 == 0){
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}