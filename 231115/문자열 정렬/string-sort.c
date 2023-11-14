#include <stdio.h>
#include <string.h>
void swap(char a[], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = i; j < n; j++){
            if(a[i] > a[j]){
                char c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
}

int main() {
    char a[100], i;
    scanf("%s", a);

    int n = strlen(a);
    
    swap(a, n);

    for(i = 0; i < n; i++){
        printf("%c", a[i]);
    }
    

    return 0;
}