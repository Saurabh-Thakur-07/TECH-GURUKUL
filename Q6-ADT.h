#include<math.h>
int add(int a , int b){
    return a+b ;
}
int sub(int a , int b){
    return a-b ;
}
int mod(int *ptr , int size){
    int mod ; 
    for(int i = 0 ; i < size ; i++){
        mod = mod + (*(ptr+i)) * (*(ptr+i)) ;
    }
    return sqrt(mod) ;
}
int dot(int *ptr , int size ){
    int dot = 1 ;
    for(int i = 0 ; i < size ; i++){
       dot = dot * (*(ptr+i)) ;
    }
    return dot ;
}
int fill(int *ptr1 , int *ptr2 ,int size){
    printf("Enter the values\n");
    for(int i = 0; i < size ; i++)
    scanf("%d",(ptr1+i));
    printf("\n");
    for(int i = 0; i < size ; i++)
    scanf("%d",&(*(ptr2+i)));
    printf("\n");
}
int fill1(int *ptr ,int size){
    printf("Enter the values\n");
    for(int i = 0; i < size ; i++)
    scanf("%d",(ptr+i));
    printf("\n");
}