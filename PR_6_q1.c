#include<stdio.h>

 void main ()
 
 {
 	
 	
 char j1[50],j2[50];
 
 printf("\n ~ enter the string ot check for palindrome :- ");
 gets(j1);
 
 strcpy(j2,j1);
 strrev(j2);
 
 if(strcmp(j1,j2)==0)
 
 {
 
 printf("\n ~ string is palinbrome :- ");
 		
 }
 
 else
 
 {
 	printf(" ~ string is not a palinbrome :- ");
 }
 }


























