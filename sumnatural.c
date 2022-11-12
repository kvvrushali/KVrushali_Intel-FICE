#include <stdio.h>
#include<time.h>

int addNumbers(int n);

int main() {

  int num;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
   clock_t t;
t = clock();
  printf("Sum = %d", addNumbers(num));
  t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("fun() took %f seconds to execute \n", time_taken);
  return 0;
}

int addNumbers(int n) {
  if (n != 0)
    return n + addNumbers(n - 1);
  else
    return n;
}

