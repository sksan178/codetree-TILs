#include <iostream>
using namespace std;

int main() {
    int n[10];
    int even = 0;
    int odd = 0;

    for(int i = 0; i < 10; i++){
        cin >> n[i];

        if(i % 2 == 0){
            odd += n[i];
        }else{
            even += n[i];
        }
    }

    if(odd > even){
        cout << odd - even;
    }else{
        cout << even - odd;
    }
    return 0;
}