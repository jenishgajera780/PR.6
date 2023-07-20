#include<stdio.h>

void main (){

	char l[150],p;
	int k,o=0;

	printf(" • type your string ~ ");
	gets(l);

	for(p='a';p<='z';p++){
	j=0;
	
    	for(k=0;l[k]!=0;k++){
        if(p==l[k])
			
    o++;}
        
 
 if(o>0)
		
        printf("\n%c ~ %d",p,o);	}

}