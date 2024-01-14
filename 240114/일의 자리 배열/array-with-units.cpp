#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int m[10];
    m[0] = n1;
    m[1] = n2;

    for(int i = 2; i < 10; i++){
        m[i] = m[i-2] + m[i-1];

        if(m[i] >= 10){
            m[i] = m[i] % 10;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << m[i] << " ";
    }
    return 0;
}