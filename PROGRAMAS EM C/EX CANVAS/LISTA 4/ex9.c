#include <stdio.h>

int main() {
  int x = 10;
  char y = 'C';
  double z = 5.5;

  int *px = &x;
  char *py = &y;
  double *pz = &z;

  printf("x=%d\n", x);
  printf("y=%c\n", y);
  printf("z=%lf\n", z);
  printf("px=%p\n", px);
  printf("py=%p\n", py);
  printf("pz=%p\n", pz);

  printf("\n\nInforme os novos valores:\n");
  scanf("%d  %c  %lf", px, py, pz);

  printf("\n\n\n\nx=%d\n", x);
  printf("y=%c\n", y);
  printf("z=%lf\n", z);
  printf("px=%p\n", px);
  printf("py=%p\n", py);
  printf("pz=%p\n", pz);

  return 0;
}