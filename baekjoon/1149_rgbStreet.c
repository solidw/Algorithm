#include <stdio.h>

#define max(x,y) ((x) > (y) ? (x) : (y))

int main(void) {
    int DP[1001][1001];
    int n , i, j;
    int max=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", DP[i][j]);
        }
    }
    
    while(true) {
    
    }
}

