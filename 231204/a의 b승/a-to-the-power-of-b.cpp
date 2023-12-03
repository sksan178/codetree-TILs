#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int prod = a;

    for(int i = 1; i < b; i++){
        if(b == 0){
            prod *= 0;
        }else{
            int n = a;
            prod *= a;
        }
        
    }

    cout << prod;
    return 0;
}