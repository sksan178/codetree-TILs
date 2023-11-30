#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, q, i, j;
    scanf("%d %d", &n, &q);

    int *m = (int*)malloc(sizeof(int) * n);
    int *p = (int*)malloc(sizeof(int) * q);

    for(i = 0; i < n; i++){
        scanf("%d", &m[i]);
    }

    for(i = 0; i < q; i++){
        scanf("%d", &p[i]);

        if(p[i] == 1){
            int a = 0;
            scanf("%d" , &a);
            printf("%d\n", m[a-1]);
        }
        else if(p[i] == 2){
            int a = 0;
            scanf("%d", &a);

            for(j = 0; j < n; j++){
                if(a == m[j]){
                    printf("%d\n", j+1);
                }
            }
        }else if(p[i] == 3){
            int a = 0, b = 0;
            scanf("%d %d", &a, &b);
            
            for(j = a-1; j <= b-1; j++){
                printf("%d ", m[j]);
            }
        }
    }

    free(m);
    free(p);
    return 0;
}