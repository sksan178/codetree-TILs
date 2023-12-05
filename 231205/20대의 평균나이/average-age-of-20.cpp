#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, count = 0;
    double avg = 0.0;

    while(true){
        cin >> n;
        if((n >= 20) && (n < 30)){
            sum += n;
            count++;
        }else{
            break;
        }
    }

    avg = sum / (double)count;
    cout.precision(2);
    cout << fixed;
    cout << avg;
    return 0;
}