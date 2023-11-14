#include <iostream>
using namespace std;

int main() {
    int a[10];

    int count1 = 0;
    int count2 = 0;


    for(int i = 0; i < 10; i++){
        cin >> a[i];

        if(a[i] % 3 == 0)
            count1++;

        if(a[i] % 5 == 0)
            count2++;
    }

    cout<<count1<<" "<<count2;

    return 0;
}