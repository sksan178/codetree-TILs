#include <stdio.h>
#include <string.h>


int main() {
    
    int n, i, j;
    int sum = 0;
    int count = 0;
    char c = 'a';

    scanf("%d", &n);

    char s[n][101];


    for(i = 0; i < n; i++){
        scanf("%s",s[i]);
    }
    
    for(i = 0; i < n; i++){
        sum += strlen(s[i]);
    }

    for(i = 0; i < n; i++){
        if(s[i][0] == c){
            count++;
        }
    }

    printf("%d %d", sum, count);

    return 0;
}