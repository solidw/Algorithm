#include <stdio.h>
#include <time.h>

#define max(x,y) ((x)>(y) ? (x) : (y))

int CutRod(int price[], int n);

int main(void) {
    int n;
    int value[11] = {0,1,5,8,9,10,17,17,20,24,30};
    long long int answer;
    scanf("%d", &n);

    time_t startTime=0, endTime=0;
    
    startTime = clock();

    answer = CutRod(value, n);
    
    endTime = clock();
    printf("최적 해: %lld\n", answer);
    printf("걸린 시간: %f second\n", (float)(endTime-startTime)/(CLOCKS_PER_SEC));
}

int CutRod(int price[], int n) {
    if(n==0)
        return 0;
    long long int max_val = 0;
    for(int i=1; i<=n; i++) {
    if(i > 10){
        max_val = max(max_val, CutRod(price, n-i));
        }
    else{
        max_val = max(max_val, price[i]+CutRod(price, n-i)); 
        }
    }
    return max_val;
}
