// Name goes here
//
// Aim
// Calculate the smallest number of pound notes / coins needed
// ----------------------------------------------------------------------------

#include <stdio.h>

int main(void) {
  // Define variables
  int starting_amount = 93; // example total amount in pounds
  int num_fifties, num_twenties, num_tens, num_fives, num_ones;

  // Your code below here
  int amount_reduced_by_fifties, amount_reduced_by_twenties;
  int amount_reduced_by_tens;
  num_fifties = starting_amount / 50;
  amount_reduced_by_fifties = starting_amount - (50 * num_fifties);
  num_twenties = amount_reduced_by_fifties / 20;
  amount_reduced_by_twenties = amount_reduced_by_fifties - (20 * num_twenties);
  num_tens = amount_reduced_by_twenties / 10;
  amount_reduced_by_tens = amount_reduced_by_twenties - (10 * num_tens);
  num_fives = amount_reduced_by_tens / 5;
  num_ones = amount_reduced_by_tens - (5 * num_fives);

  // Display results
  printf("Starting amount in pounds: %d\n", starting_amount);
  printf("50 pound notes: %d\n", num_fifties);
  printf("20 pound notes: %d\n", num_twenties);
  printf("10 pound notes: %d\n", num_tens);
  printf("5 pound notes: %d\n", num_fives);
  printf("1 pound coins: %d\n", num_ones);
  return 0;
}
