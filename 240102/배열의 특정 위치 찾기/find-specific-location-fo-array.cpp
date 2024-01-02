#include <iostream>
using namespace std;

int main() {
    int n[10];
    int sum = 0;
    double avg = 0.0;
    for(int i = 0; i < 10; i++){
        cin >> n[i];

        if(i % 2 != 0){
            sum += n[i];
        }

        if(i == 2 || i == 5 || i == 8){
            avg += n[i];
        }
    }

    cout<<fixed;
    cout.precision(1);
    cout << sum << " " << avg / 3 << " ";

    return 0;
}