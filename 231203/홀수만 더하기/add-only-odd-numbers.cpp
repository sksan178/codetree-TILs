#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cin >> n;

    // 상수 크기의 배열을 정의하거나 동적 배열을 사용해야 함
    int *m = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> m[i];
    }

    for(int i = 0; i < n; i++) {
        if (m[i] % 2 != 0) {  // 홀수 인덱스
            if (m[i] % 3 == 0) {
                sum += m[i];
            }
        }
    }

    cout << sum;

    // 동적 배열을 사용한 경우 메모리 해제
    delete[] m;

    return 0;
}