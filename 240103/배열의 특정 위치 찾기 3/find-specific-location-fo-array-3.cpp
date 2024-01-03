#include <iostream>
using namespace std;

int main() {
    int n[100];
    int sum = 0;
    for(int i = 0; i < 100; i++){
        cin >> n[i];
        
        if(n[i] == 0){
            sum = n[i-1] + n[i-2] + n[i-3];
            break;
        }
    }

    cout << sum << endl;
    return 0;
}