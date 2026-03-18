#include <math.h>

int main(void) {
  double s = 20, u = 0, t, v, a = 10;

  // (a) Using u = 0 and re-arranging the given equation
  t = sqrt(2 * s / a);

  // (b) Using u = 0, the given equation, and the result from (a)
  v = u + a * t;

  return 0;
}