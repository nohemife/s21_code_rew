#include <math.h>
#include <stdio.h>

int main() {
  int r = 0;
  int p = 21500;
  double pi = M_PI;
  // printf("Введите радиус шара: ");
  scanf("%d", &r);

  if (r >= 0) {
    printf("%0.lf", (p * (4.0 / 3.0) * pi * pow(r, 3)));
  } else {
    printf("n/a");
  }
  return 0;
}
