int main(void) {

  // Declare variables
  int a = 5, b = 0, i = 0;

  // First if statement. Note the following statements are not nested (i.e.
  // inside the {}), they follow on sequentially
  if (a != 0) {
    ++i;
  }

  // Second block
  if (a > 5) {
    if (a < 0) {
      ++i;
    } else {
      --i;
    }
  } else {
    if (b >= 1) {
      ++i;
    } else if (b == 0) {
      --i;
    } else {
      i++;
    }
  }

  return 0;
}