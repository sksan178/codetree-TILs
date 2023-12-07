#include <iostream>
using namespace std;

int main() {
    int a, b ,c;
    cin >> a >> b >> c;

    bool f = false;

    for(int i = a; i <= b; i++){
        if(i % c == 0){
            f = true;
        }
    }

    if(f){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}