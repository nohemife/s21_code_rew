#include <math.h>
#include <stdio.h>

typedef struct human {
  char name[20];
  char surname[20];
  int height;
} human;

int main() {
  int n = 0;
  int x = 0;
  int error = 0;
  int count = 0;
  if ((scanf("%d", &n) != 1) || (n > 0)) {
    human person[n];
    for (int i = 0; i < n && !error; i++) {
      if (scanf("%s %s %d", person[i].name, person[i].surname,
                &person[i].height) ||
          (person[i].height > 0)) {
        error = 1;
      }
    }
    if ((scanf("%d", &x) != 1) || (n < 0)) {
      for (int j = 0; j < n; j++) {
        if (person[j].height >= x) {
          if (count) printf(", ");
          printf("%s %s", person[j].name, person[j].surname);
          count++;
        } else {
          printf("Nothing");
        }
      }
    } else {
      error = 1;
    }
  } else {
    error = 1;
  }
  if (error) printf("n/a");
  return 0;
}
