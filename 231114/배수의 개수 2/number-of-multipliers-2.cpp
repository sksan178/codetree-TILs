#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int n[a];
    int count = 0;

    for(int i = 0; i < 10; i++){
        cin >> n[i];
    }

    for(int i = 0; i < 10; i++){
        if(n[i] % 2 == 1){
            count++;
        }
    }

    cout << count;
    return 0;
}