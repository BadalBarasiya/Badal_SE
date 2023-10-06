#include <stdio.h>

int main() {
   int n;
   printf("Enter size of Swastik pattern: ");
   scanf("%d", &n);

   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i<n/2){
               if(j<n/2){
                   if(j==0) printf("*");
                   else printf(" ");
               } else if(j==n/2) printf("*");
               else if(i==0) printf("*");
               else printf(" ");
           } else if(i==n/2) printf("*");
           else {
               if(j==n/2) printf("*");
               else if(j>=n/2) {
                   if(i==n-1) {
                       if(j==n-1) printf("*");
                       else printf(" ");
                   } else printf(" ");
               } else printf(" ");
           }
       }
       printf("\n");
   }

   return 0;
}
