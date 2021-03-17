#include<stdio.h>
#include"Q6-ADT.h"
#include<string.h>
int main()
{
    char choice[3] ;
    printf("Enter your choice\n");
    scanf("%s",choice);
    int num1 , num2 , num3  , n ;
    printf("Enter the dimension of complex numbers \n");
    scanf("%d",&n);
    if(strcmp(choice , "ADD")==0){
        int arr1[n] , arr2[n] , arr3[n] ;
        fill(arr1 , arr2 , n);
        for(int i = 0 ; i < n ; i++){
          arr3[i] = add(arr1[i] , arr2[i]) ;
        }
        for(int i = 0 ; i < n ; i++){
        printf("%d\n",arr3[i]);
        }
    }
    if(strcmp(choice , "SUB")==0){
        int arr1[n] , arr2[n] , arr3[n] ;
        fill(arr1 , arr2 , n);
        for(int i = 0 ; i < n ; i++){
          arr3[i] = sub(arr1[i] , arr2[i]) ;
        }
        for(int i = 0 ; i < n ; i++){
        printf("%d\n",arr3[i]);
        }
    }
    if(strcmp(choice , "MOD")==0){
        int arr[n] ;
        fill1(arr,n);
        int result = mod(arr , n);
        printf("%d\n",result);
    }
    if(strcmp(choice , "DOT")==0){
        int arr[n] ;
        fill1(arr,n);
        int result = dot(arr , n);
        printf("%d\n",result);
   }
}