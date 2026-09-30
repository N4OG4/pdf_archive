#include <stdio.h>
#include <stdlib.h>

#define SIZE 6 
#define BASE 100000000

//unsigned int sum[5]={0};//直接取全域變數 
//int cnt=1;//count how many array do we need 
void mult(unsigned int a[], unsigned int b, int *len){//do a*b but digits of a is separated in array
	unsigned long long carry =0;
	for(int i=0;i<*len;i++){
		unsigned long long prod = (unsigned long long)a[i] * b + carry;
		a[i] = (unsigned int)(prod%BASE);
		carry = prod / BASE;
	}
	while(carry){
		a[(*len)++] = (unsigned int)(carry%BASE);
		carry/=BASE;
	}
}

void foo(int n, unsigned int f1[], unsigned int f2, int *len){//(5,1,1)=> 4,1,2=> 3,2,3 => 2,6,4=>1,24,5=>0,120,6
	if(n>0){
		mult(f1,f2,len);//multiply and proceed to next
		return foo(n-1, f1,f2+1, len);
	}
	else return;
}

static void print_ts(unsigned int a[], int len){//len is 1 on default
	printf("%u", a[len-1]);
	for(int i=len-2;i>=0;i--) printf(" %08u", a[i]);
	printf(".\n");
}

int main() {
	char *suffix[]={"th","st","nd","rd","th","th","th","th","th","th"};
	unsigned int arr[SIZE]={0};
	int n,len,suf=0;
	//{0,0,0,0,0,1}
	while(scanf("%d", &n) != EOF){
		unsigned int arr[SIZE]={0};
		arr[0]=1;len=1;
		suf=n>10?0:(n%10);
		foo(n,arr,1,&len);
		printf("The %d%s factorial number is ",n , suffix[suf]);
		print_ts(arr,len);
		//printf("%d",foo(n,1,1));
	}
	return 0;
}
