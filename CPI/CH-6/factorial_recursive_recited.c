#include <stdio.h>
#include <stdlib.h>

#define BASE 100000000
#define SIZE 6
//40! needs 48 digits so 48/8 = 6

void mult(unsigned int a[], unsigned b, int *len){//doing multiplication so need a carry and sth
	unsigned long long carry = 0;//carry initialized
	for(int i=0;i<*len;i++){//start from a[0] ... a[len-1]
		unsigned long long prod = ((unsigned long long)a[i] * b) + carry;//add this type name w/ () to set the type of value ig idk idfk
		//if(prod % BASE){//check if prod is over 8 digits / OR maybe we dont even need to check
		a[i]=(unsigned int)(prod%BASE);
		carry=prod/BASE;
	}
	while(carry){
		if(*len+1>=SIZE)break;
		a[(*len)++] += (unsigned int)(carry % BASE);
		carry /= BASE;	
	}
}
void foo(int n, unsigned int a[], unsigned int b, int *len){
	if(n==0)return;
	mult(a,b,len);//multiply and assign product to a[]
	foo(n-1,a,b+1,len);
}

static void printArr(unsigned int a[], int len){
	printf("%u", a[len-1]);//the one might not be 8 digits "xx" <-this" 00000000"
	a[len-1]=0;
	for(int i=len-2;i>=0;i--){
		printf(" %08u", a[i]);
		a[i]=0;
	}
	puts(".");
}

int main(void){
	const char *suffix[]={"st","nd","rd","th"};
	int n, len, suf=3;
	unsigned int arr[SIZE]={0};
	while(~scanf("%d",&n)){
		len=1, arr[0]=1;suf=3;//initialize
		foo(n, arr, 1, &len);5
		suf=(n%10)%4==0?3:(n%10)%4-1;//n==0, => suf=-1// n=4, => suf=-1
		switch(n){
			case 11:
			case 12:
			case 13:
				suf=3;
				break;
		}
		printf("The %d%s factorial number is ",n, suffix[suf]);
		printArr(arr, len);
	}
}
