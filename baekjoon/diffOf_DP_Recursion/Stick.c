#include <stdio.h>
#include <time.h>

#define MAX(x,y) ((x)>(y) ? (x) : (y))

int main(void) {
    int n, i, j;
    int value[11] = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    scanf("%d", &n);
    int R[1001];

    time_t startTime=0, endTime=0;

    R[0] = value[0];
    R[1] = value[1];

    startTime = clock();

    for(i=1; i<=n; i++) {
        int temp = 0;
        for(j=1; j<=i; j++) {
            if(j<11) {
                temp = MAX(temp, R[i-j]+value[j]);
            }
            else {
                temp = MAX(temp, R[i-j]);
            }
            R[i] = temp;
        }
    }
    endTime = clock();
    printf("최적 해: %d\n", R[n]);
    printf("걸린 시간: %f second\n", (float)(endTime-startTime)/(CLOCKS_PER_SEC));
}
