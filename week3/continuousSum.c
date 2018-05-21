#include <stdio.h>

void main() {
    int dp[100001] = {};
    int val[100001] = {};
    int n;

    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &val[i]);
    }

    for(int i=1; i<n; i++) {
        if(dp[i-1] + val[i] < val[i]) {
            dp[i] = val[i];
        }
        else {
            dp[i] = dp[i-1]+val[i];
        }
    }
    int max = val[0];
    for(int i=1; i<n; i++) {
        if(dp[i-1] < dp[i]) {
            max = dp[i];
        }
    }
    printf("%d", max);
}
