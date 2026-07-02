//c program to check whether a number is prime number or not
#include<stdio.h>
#include<conio.h>
{
  //Declaring varibles
  int a,i,half;
  bool check = true;
  
  //taking input from the user
  printf("Enter any number: ");
  scanf("%d",&a);

  //storing varibles
  half=a/2;
  
  //adding loop
  for(i=2, i <= half, i++)
  {
    //if number is prime
    if(a%i==0)
    {
      check = true;
      continue;
    }
    //if number isn't prime  
    else
    {
      check = false;
      break;
    }
  }
  //if it's not prime no
  if(check == false)
  {
    printf("the number is prime");
  }  
  else
  {
    printf("the number isn't prime");
  }
  
getch();
}
