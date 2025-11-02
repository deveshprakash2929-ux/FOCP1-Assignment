#include<stdio.h>
#include<math.h>

int main(){

   int choice;
   printf("Choose conversion type:\n");
   printf("1. Binary to Decimal\n");
   printf("2. Decimal to Binary\n");
   printf("Enter your choice : ");
   scanf("%d",&choice);

   if(choice==1){
      long long bin;
      int dec=0,i=0,rem;
      printf("Enter the binary number : ");
      scanf("%lld",&bin);

      while(bin!=0){
         rem = bin%10;
         dec = dec + rem*pow(2,i);
         bin = bin/10;
         i++;
      }

      printf("Decimal value = %d",dec);
   }

   else if(choice==2){

      int dec,b[50],i=0;
      printf("Enter the decimal number : ");
      scanf("%d",&dec);

      while(dec>0){
         b[i]=dec%2;
         dec=dec/2;
         i++;
      }

      printf("Binary value = ");
      for(int j=i-1;j>=0;j--){
         printf("%d",b[j]);
      }
   }

   else{
      printf("Invalid choice !!");
   }

   return 0;
}