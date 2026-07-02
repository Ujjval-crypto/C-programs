//C Program to Print an Integer Entered By the User
#include <stdio.h>
#include <conio.h>
int main()
{
  //Declaring an integer to take input
  int a;

  //Printing message to enter the number
  printf("Enter any number: ");

  //taking input with scanf
  scanf("%d",&a);

  //printing the number
  printf("The number you have entered is: %d",a);
}
