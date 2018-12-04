#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1<num2)
        return 1;

    else if(num1>num2)
        return -1;
    else
        return 0;
}

int main() {
    int n, k, i, j;
    int result=0;
    scanf("%d", &n);
    int newlen[n];
    for(i=0; i<n; i++) {
        scanf("%d", &newlen[i]);
    }
    qsort(newlen, sizeof(newlen)/sizeof(int), sizeof(int), compare);

    for(i=0; i<n; i++) {
        if(result < newlen[i]*(i+1))
            result = newlen[i]*(i+1);
    }
    printf("%d", result);
}
