// c program to add two numbers
#include<stdio.h>
#include<conio.h>
int main()
{
  //declaring varibles 
  int a,b,sum;

  //taking input in a and b
  printf("Please enter your two numbers: ");
  scanf("%d%d",&a,&b);

  //using "+" operator to add the two numbers  
  sum = a+b;

  //printing the output 
  printf("The sum is: %d",sum);

getch();
}
