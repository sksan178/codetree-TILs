#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int count = 0;
    scanf("%d", &n);

    int *m = (int*)malloc(sizeof(int) * n);

    int i = 1;

    for(i; i <= n; i++){
        scanf("%d", &m[i]);
        if(m[i] == 2){
            count++;
            if(count == 3){
                printf("%d\n", i);
                break;
            }
        }
    }

    free(m);
    return 0;
}