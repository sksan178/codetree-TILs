#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double count = 0.0;
    int sum = 0;

    for(int i = a; i <= b; i++){
        if((i % 5 == 0) || (i % 7 == 0)){
            sum += i;
            count++;
        }
    }
    double avg = sum / count;
    cout.precision(1);
    cout<<fixed;
    cout << sum << " " << avg;
    return 0;
}