#include <stdio.h>
#include <stdlib.h>
int solve(int N, int* A) {
    long long total = 0;
    int maxVal = 0;
    for (int i = 0; i < N; i++) {
        total += A[i];
        if (A[i] > maxVal)
            maxVal = A[i];
    }
    if (total % (N - 1) != 0)
        return -1;
    int operations = total / (N - 1);
    if (maxVal > operations)
        return -1;
    return operations;
}
int main() {
    int T;
    scanf("%d", &T);
    for (int t_i = 0; t_i < T; t_i++) {
        int N;
        scanf("%d", &N);
        int* A = (int*)malloc(sizeof(int) * N);
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        int out_ = solve(N, A);
        printf("%d\n", out_);
        free(A); 
    }
    return 0;
}