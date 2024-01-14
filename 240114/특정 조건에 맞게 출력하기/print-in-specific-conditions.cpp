#include <iostream>
using namespace std;

int main() {
    int m[100];
    int n;

    for(int i = 0; i < 100; i++){
        cin >> m[i];

        if(m[i] == 0){
            n = i;
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(m[i] % 2 == 0){
            m[i] = m[i] / 2;
        }else{
            m[i] = m[i] + 3;
        }

        cout << m[i] << " ";
    }
    return 0;
}