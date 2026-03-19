// Required define functions
#define _USE_MATH_DEFINES
#include <complex.h>
#include <math.h>
#include <stdio.h>

// Main function
int main(void){
   
  // Declare and initialize variables - these are not changing on each iteration, so can be outside of the loop
  double z1 = 0;
  double complex z2 = 0;
  double complex v_in = 0, v_out = 0;
  double magnitude = 0, phase = 0;
  double c = 0, w = 0, a = 0, phi = 0;

  // Set up problem
  z1 = 1e3; // ohms
  c  = 1e-9; // F
   
  // For loop. f, standing for frequency is changed by a power of 2 on each iteration
  for (int f=1; f<pow(2,29); f*=2) {
        
    // Bulk of the code is then unchanged, it's just now in the loop
    w  = 2 * M_PI * f;
    z2 = 1 / (I * w * c);
    v_in = a * cexp(I * phi); // V
    v_out = (z2*v_in) / (z1+z2);
    magnitude = cabs(v_out);
    phase     = carg(v_out);                
              
    // Print outputs. Don't worry about the syntax of this line for now      
    printf("Frequency: %d\tMagnitude: %.2f\tPhase: %.2f\n", f, magnitude, phase);
  }

  return 0;
}
