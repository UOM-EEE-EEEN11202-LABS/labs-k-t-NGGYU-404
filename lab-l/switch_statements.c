#include <stdio.h>
int main(void) {
 
  char grade = 'B';
  double mark = 0;
 
  switch (grade) {
    case 'A': mark = 80;
       printf("First class");
       break;
    case 'B': mark = 65;
       printf("2.1");
       break;
    case 'C': mark = 55;
       printf("2.2");
       break;
    case 'D': mark = 45; 
       printf("3rd");
       break;
    case 'E': mark = 35;
       printf("Failing");
       break;
    default: printf("Error. Something went wrong");
       break;
  }
}