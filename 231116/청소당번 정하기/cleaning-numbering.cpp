#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 0, c = 0;
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        if(i == 0){
            continue;
        }
        if(i % 2 == 0){
            if((i % 2 ==0) && (i % 3 == 0) && (i % 12 == 0)){
                c++;
            }else if((i % 2 == 0) && (i % 3 == 0)){
                b++;
            }
            else{
                a++;
            }
        }
        else if(i % 3 == 0){
            if((i % 3 == 0) && (i % 12 == 0)){
                c++;
            }else{
                b++;
            }
        }else if(i % 12 == 0){
            c++;
        }
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}