#include <stdio.h>

int main() {
    char s[5][10] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int n = 0;
    int i, j;

    scanf("%c", &c);

    for(i = 0; i < 5; i++){
        if((s[i][2] == c) || (s[i][3] == c)){
            printf("%s\n", s[i]);
            n++;
        }
    }

    printf("%d\n",n);

    return 0;
}