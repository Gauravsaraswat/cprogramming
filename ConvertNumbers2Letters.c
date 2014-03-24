#include<conio.h>
#include<stdio.h>
#include<math.h>

int main()
{
long int i,n;
printf("Enter the Number less then 1 crore");
scanf("%d",&i);

// To find The number of Bits in integer

n=(int)log10(i)+1;

// implementation of array of strings using two dimensional array
// Because String array does not support by C language

char ones[][11]={"","one","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eigthein","Ninteen"};
char twos[][11]={"","","Twenty","Thirty","Fourty","Fifty","Sixty","Seventy","Eighty","Ninty"};
switch(n)
{

case 8:
{
	int a=i/10000000;
	i=i%10000000;
	printf(" %s crore",ones[a]);	
}	
	
case 7:	
{   
    int a=i/1000000;
	if(a!=1)
	{
	i=i%1000000;	
	printf(" %s",twos[a]);
	}
	
	else
	{
		a=i/100000;
		printf(" %s lakh",ones[a]);
		i=i%100000;
	}
}	
	
case 6:
{
	int a=i/100000;
	i=i%100000;
	if(a!=0)
	printf(" %s lakh",ones[a]);
}	
	
case 5:
{
    int a=i/10000;
    if(a!=1)
    {
    	i=i%10000;
	    printf(" %s",twos[a]);
	}
	
	else
	{
		a=i/1000;
		printf(" %s thousand",ones[a]);
		i=i%1000;
	}
}	
	
case 4:
{
    int a=i/1000;
	i=i%1000;
	if(a!=0)
	printf("% s thousand",ones[a]);
}	
	
case 3:
{
    int a=i/100;
	i=i%100;
	if(a!=0)
	printf(" %s hundered",ones[a]);
}	
	
case 2:
{
	int a=i/10;
	if(a!=1)
	{
	i=i%10;
	printf(" %s",twos[a]);
    }
    
    else{
    printf(" %s",twos[i]);
	}	
}

default :	
{
printf(" %s ",ones[i]);
}	

}
getch();
return 0;
}

