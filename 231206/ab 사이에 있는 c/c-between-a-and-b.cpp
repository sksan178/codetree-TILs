#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool f = false;
    cin >> a >> b >> c;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            f = true;
            break;
        }
    }

    if(f){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}