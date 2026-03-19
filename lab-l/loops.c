#include <stdio.h>
int main(void) {
  for (int i=1; i<1024; i*=2) {
    printf("%d\n",i);
  }
  return 0;

  int j = 1;
while (j < 1024) {
  printf("%d\n",j);
  j *= 2;
}

int k = 1;
do {
  printf("%d\n",k);
  k *= 2;
} while (k < 1024);
}

