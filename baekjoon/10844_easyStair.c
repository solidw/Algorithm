#include <stdio.h>

int main(void) {
    int n, i, j, answer=0;
    int dp[101][10];
    scanf("%d", &n);
    for(i=0; i<10; i++) {
        dp[1][i] = 1;
    }

    for(j=2; j<=n; j++) {
        for(i=0; i<10; i++) {
            if(i==0) {
                dp[j][i] = dp[j-1][i+1]%1000000000;
            }
            else if(i==9) {
                dp[j][i] = dp[j-1][i-1]%1000000000;
            }
            else {
                dp[j][i] = (dp[j-1][i-1] + dp[j-1][i+1])%1000000000;
            }
        }
    }
    for(i=1; i<10; i++)
        answer = (answer + dp[n][i])%1000000000;
    printf("%d", answer);
}

