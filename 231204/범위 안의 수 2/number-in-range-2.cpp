#include <iostream>
using namespace std;

int main() {
    int *m = new int[10];
    int sum = 0;
    double avg = 0.0;
    int count = 0;

    for(int i = 0; i < 10; i++){
        cin >> m[i];

        if(m[i] >= 0 && m[i] <= 200){
            sum += m[i];
            count++;
        }
    }

    avg = sum / (double)count;

    cout.precision(1);
    cout<<fixed;
    
    cout << sum << " " << avg;
    return 0;
}