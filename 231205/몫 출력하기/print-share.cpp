#include <iostream>
using namespace std;

int main() {
    int n, a = 0;
    int count = 0;
    while(true){
        cin >> n;
        if(n % 2 == 0){
            a = n / 2;
            cout << a << endl;
            count++;
            if(count == 3){
                break;
            }
        }
    }
    return 0;
}