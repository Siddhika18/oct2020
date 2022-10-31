#include<stdio.h>  
void main()    
{    
 int i=1,n,fact=1;    
 printf("Enter a number to find its factorial: ");    
 scanf("%d",&n);    
 while(i<=n)
 {    
    fact=fact*i; 
    i+=1;
 }    
  printf("Factorial of number %d is: %d",n,fact);    
}   
