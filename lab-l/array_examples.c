#define N 10
#define M 3
int main(void) {

  double my_1d_array[N] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  
  my_1d_array[5] = 27.223;
  my_1d_array[12] = 27.223;
  my_1d_array[-2] = 27.223;

  double my_2d_array[N][M] = {[0][0]=3.3, [1][0]=1.1, [9][2]=77.0}; 
  return 0;
}