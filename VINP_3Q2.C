/* PR.3-Q2 write a program to count the total number of digits in  a number.
output
Enter any number:5674
total number of digits is 4.
*/

#include<stdio.h>
#include<conio.h>

void main(){
int A,B=0;
clrscr();
printf("*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n");
printf("Program to find total number of digits in a number\n");
printf("*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n\n\n");
printf("Enter any number:");
scanf("%d",&A);

while(A != 0){
  A = A / 10;
  B++;
}
printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");
printf("Total number of digits is %d.\n",B);
printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n");

getch();

}