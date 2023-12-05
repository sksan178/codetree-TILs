#include <iostream>
using namespace std;

int main() {
    int w, h;
    char c;

    while(true){
        int sum = 0;

        cin >> w >> h >> c;
        sum = w * h;
        cout << sum << endl;

        if(c == 'C')
            break;
    }
    return 0;
}