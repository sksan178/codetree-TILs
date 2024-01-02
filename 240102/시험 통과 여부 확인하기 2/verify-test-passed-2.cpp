#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int count = 0;
    double avg = 0.0;
    cin >> n;
    
    int m[n][4];
    for(int i = 0; i < n; i++){
        sum = 0;
        avg = 0.0;
        for(int j = 0; j < 4; j++){
            cin >> m[i][j];
            sum += m[i][j];
            if(j == 3){
                avg = sum / 4.0;

                if(avg >= 60){
                    cout << "pass" << endl;
                    count++;
                }
                    
                else if(avg < 60){
                    cout << "fail" << endl;
                }
                    
            }
        }
    }

    cout << count << endl;
    return 0;
}