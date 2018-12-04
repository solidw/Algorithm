#include <stdio.h>

int main() {
    int n, i, j, min[1001], result=0, temp=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &min[i]);
    }

    for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(min[j]>min[j+1]) {
                temp = min[j];
                min[j] = min[j+1];
                min[j+1] = temp;
            }
        }
    }

    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            result += min[j];

        }
    }

    printf("%d", result);
}
