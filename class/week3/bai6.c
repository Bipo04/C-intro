#include <stdio.h>
 
long long giaithua(int n){
   long long gt = 1;
   for(int i = 1; i <= n; i++)
      gt *= i;
   return gt;
}

long long pascal(int a,int b){
   return giaithua(a) / ( giaithua(a-b) * giaithua(b) );
}

int main(){
   int n;
   printf("Enter the height of the triangle: ");
   scanf("%d", &n);
   for(int i = 0; i < n; i++){
      for(int j = 0; j <= n-i; j++)
         printf("   ");
      for(int j = 0; j <= i; j++)
         printf(" %5d", pascal(i, j));
      printf("\n");
   }
   return 0;
}