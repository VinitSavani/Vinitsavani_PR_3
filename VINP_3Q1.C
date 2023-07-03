/* PR.3-Q1 Write a program to print all alphabats from a to z by skipping 3 alphabets using do while loop.
output
_____________________________________________________________
*-*-*-*Program to print alphabets skipping 3 alphabets*-*-*-*
_____________________________________________________________
       a
       e
       i
       m
       q
       u
       y
*/

#include<stdio.h>
#include<conio.h>

void main(){
char v = 'a';
clrscr();
printf("_____________________________________________________________\n");
printf("*-*-*-*Program to print alphabets skipping 3 alphabets*-*-*-*\n");
printf("_____________________________________________________________\n");
do{
 printf("       %c\n",v);
 v+=4;
}while(v<='z');
getch();
}