#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    int m[10];
    for(int i = 0; i < 10; i++){
        m[i] = n * (i+1);
    }

    for(int i = 0; i < 10; i++){
        if(m[i] % 5 == 0){
            count++;
        }

        if(count < 2){
            cout << m[i] << " ";
        }
        else{
            cout << m[i] << " ";
            break;
        }
    }
    return 0;
}