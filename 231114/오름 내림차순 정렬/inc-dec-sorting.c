#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n], i, j;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(a[i] > a[j]){
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    printf("\n");

    for(i = n-1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    

    return 0;
}