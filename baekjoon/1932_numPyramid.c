#include <stdio.h>
int main(void) {
    int n,i,j,temp;
    int DP[500][500];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        for(j=0; j<i+1; j++) {
        scanf("%d", &DP[i][j]);
        }
    }
    for(i=n-2; i>=0; i--) {
        for(j=0; j<i+1; j++) {
            if(DP[i+1][j] > DP[i+1][j+1]) {
                DP[i][j] += DP[i+1][j];
            }
            else {
                DP[i][j] += DP[i+1][j+1];
            }
        }
    }
    printf("%d", DP[0][0]);
}
