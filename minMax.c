#include <stdio.h>

int main() {
    int N, M;
   scanf("%d %d", &N, &M);
    
    if (N != M) {
        printf("NO\n");
        return 0;
    }
    int matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ((i == j || i + j == N - 1) && matrix[i][j] != 1) {
                printf("NO\n");
                return 0;
            }
        if (i != j && i + j != N - 1 && matrix[i][j] != 0) {
            printf("NO\n");
            return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
