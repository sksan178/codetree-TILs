#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    while(n > 1){
        if(n % 2 == 0){
            n /= 2;
            count++;
        }else{
            n = n * 3 + 1;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}