//WAP to input an alphanumeric string and print the sum of all digits present in the string

#include<stdio.h>
#include<conio.h>
main()
{
	char str[100];
	int i=0,sum=0;
	printf("Enter a string :");
	gets(str);
	
	while(str[i]){
		if(isdigit(str[i]))
		   sum=sum+str[i]-'0';
		i++;
	}
	printf("Sum of digit is %d",sum);
}
