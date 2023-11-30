#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1, m2;
    int *n1, *n2;
    scanf("%d %d", &m1, &m2);

    n1 = (int*)malloc(sizeof(int) * m1);
    n2 = (int*)malloc(sizeof(int) * m2);

    int i, j, k;
    int count = 0;

    for (i = 0; i < m1; i++) {
        scanf("%d", &n1[i]);
    }

    for (i = 0; i < m2; i++) {
        scanf("%d", &n2[i]);
    }

    for (i = 0; i <= m1 - m2; i++) {
        for (j = 0; j < m2; j++) {
            if (n1[i + j] != n2[j]) {
                break;
            }
        }
        if (j == m2) {
            count++;
        }
    }

    if (count > 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    free(n1);
    free(n2);
    return 0;
}