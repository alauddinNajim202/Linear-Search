#include<stdio.h>

int main(){

      int n , arr[100],value ,i;


      printf("Enter number of elements: ");
      scanf("%d", &n);

       printf("Enter elements of array : ");
       for(int i = 0; i<n ; i++){

            scanf("%d",&arr[i]);
       }

       printf("Enter number :");
       scanf("%d",&value);


       for( i = 0; i<n ; i++){

            if (arr[i]== value){
                  printf("The elements found at : %d",i+1);
            }
       }

       if(arr[i] == n ){
            printf("The elements not found");
       }






}













