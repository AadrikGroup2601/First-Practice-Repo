#include<stdio.h>  
int main()    
{    
  int n,r,sum=0,temp;    
  printf("enter the number=");    
  scanf("%d",&n);    
  temp=n;    
  while(n>0)    
  {    
    r=n%10;    
    sum=(sum*10)+r;    
    n=n/10;    
  }    
  if(temp==sum)    
     //TODO #1 uncomment this  printf("Palindrome number");
  else    
    //TODO #2  uncomment this   printf("Not palindrome number");
  return 0;  
}   
