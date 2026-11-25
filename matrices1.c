#include <stdio.h>
int main() {
int r, c, i, j;
printf("Enter rows amd columns: ");
scanf("%d %d" ,&r, &c);
int matA[r][c], matB[r][c], matC[r][c];

printf("Enter elementsof A: \n");
for(i = 0; i < r; i++){
 for(j = 0; j < c; j++){
  scanf("%d" , &matA[i][j]);
  }}
  printf("\nMatrixA: \n");
for(i = 0; i < r; i++){
 for(j = 0; j < c; j++)
 {
  printf(" %d" , matA[i][j]);
  }
  printf("\n");
  }
  printf("Enter elements: \n");
for(i = 0; i < r; i++){
 for(j = 0; j < c; j++){
  scanf("%d" , &matB[i][j]);
  }}
  printf("\nMatrixB: \n");
for(i = 0; i < r; i++){
 for(j = 0; j < c; j++)
 {
  printf(" %d" , matB[i][j]);
  }
 
  printf("\n");
  }
  
  printf("Matrix addition")
  for(i = 0; i < r; i++){
 for(j = 0; j < c; j++)
 matC[i][j]=matA[i][j] + matB[i][j];
 printf(" %d", matC[i][j]);
 }
  return 0;
}

