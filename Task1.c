#include <stdio.h>

int main() {
  int n = 0;
  printf("Введите размер матрицы: ");
  scanf("%d", &n);
  if (n > 0) {
    int matrix_a[n][n];
    int matrix_b[n][n];
    int matrix_c[n][n];
    printf("Введите числа матрицы A: \n");
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &(matrix_a[i][j]));
      }
    }
    printf("Введите числа матрицы B: \n");
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &(matrix_b[i][j]));
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        matrix_c[i][j] = 0;
        for (int k = 0; k < n; k++) {
          matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
        }
        if (j == n - 1) {
          printf("%d", matrix_c[i][j]);
        } else {
          printf("%d ", matrix_c[i][j]);
        }
      }
      if (i < n - 1) printf("\n");
    }
  } else {
    printf("n/a");
  }
  return 0;
}

// 1 2     5 6
// 3 4     7 8

// 1*5+2*7 1*6+2*8

// 3*5+4.7 3.6+4.8

// 19 22
// 43 50