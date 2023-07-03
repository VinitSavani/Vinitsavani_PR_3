/* PR.3-Q3 write a program to fid the sum of a first and the last digit of a number.
output

enter any number:456.
the sum of the first and last digit is 10.

*/

#include<stdio.h>
#include<conio.h>

void main(){
int  a,f,l,s;
clrscr();
printf("__________________________________________________________________\n\n");
printf("program to find the sum of a first and the last digit of a number.\n\n");
printf("------------------------------------------------------------------\n\n");
printf("Enter any number:");
scanf("%d",&a);

l = a % 10;

while(a>10){
f = a / 10;
a = f ;
}

s = f + l ;

printf("\n=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-\n");
printf("The sum of the first and the last digit is %d\n",s);
printf("=-=-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-\n");

getch();

}