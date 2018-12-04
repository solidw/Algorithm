#include <stdio.h>

int main(void) {
    int X, i, temp;
    int DP[1000000];

    scanf("%d", &X);
    DP[1] = 0;
    DP[2] = 1;
    DP[3] = 1;

    for(i=4; i<=X; i++) {
        DP[i] = DP[i-1]+1;

        if(i%2==0) {
            temp = DP[i/2]+1;
            if(temp<DP[i]) {
                DP[i]=temp;
            }
        }
        if(i%3==0) {
            temp = DP[i/3]+1;
            if(temp<DP[i]) {
                DP[i]=temp;
            }
        }
    }

    printf("%d\n", DP[X]);
}

