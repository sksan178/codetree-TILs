#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for(int i = 1; i <= n; i++){
        if(i % 4 == 0){
            if(!(i % 100 == 0 && i % 400 != 0)){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}