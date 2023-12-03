#include <iostream>
using namespace std;

int main() {
    int n, s = 0;
    double avg = 0.0;

    cin >> n;

    int *m = new int[n];

    for(int i = 0; i < n; i++){
        cin >> m[i];
        s += m[i];
    }

    avg = s / (double)n;

    cout.precision(1);
    cout << fixed;
    cout << s << " " << avg;

    return 0;
}