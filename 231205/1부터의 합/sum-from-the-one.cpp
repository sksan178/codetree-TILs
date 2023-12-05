#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int c = 0;
    cin >> n;

    for(int i = 1; i <= 100; i++){
        sum += i;
        c = i;
        if(sum >= n){
            break;
        }   
    }

    cout << c;
    return 0;
}