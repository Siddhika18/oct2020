#include<stdio.h>  
void main()    
{    
 int i=1,n,fact=1;    
 printf("Enter a number to find factorial: ");    
 scanf("%d",&n);    
 while(i<=n)
 {    
    fact=fact*i; 
    i++;
 }    
  printf("Factorial of number %d is: %d",n,fact);    
}   
