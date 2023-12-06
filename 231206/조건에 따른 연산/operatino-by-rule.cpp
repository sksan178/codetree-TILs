#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    while(n <= 1000){
        if(n % 2 == 0){
            n = n * 3 + 1;
            count++;
        }else{
            n = n * 2 + 2;
            count++;
        }
    }

    cout << count;
    return 0;
}