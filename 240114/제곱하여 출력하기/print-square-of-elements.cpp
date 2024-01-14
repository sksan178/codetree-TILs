#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m[n];

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        m[i] = num * num;

        cout << m[i] << " ";
    }
    return 0;
}