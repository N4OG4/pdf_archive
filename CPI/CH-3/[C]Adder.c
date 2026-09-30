#include <stdio.h>
#include <stdlib.h>
/*
3
2 1001 11
3 2012 101
4 2020 202
*/
int main(void) {
	int n,i, Bs, a, b, tp=0,cnt=1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&Bs,&a,&b);
		printf("Case %d: %d + %d (base %d)\n",cnt++,a,b,Bs);
		while(a+b+tp>0){
			//a%10 + b%10 = tp >0 then 
			//=> a%10 + b%10 + 0 with one carry tp==0 then no carry
			
			printf("%d + %d + %d = %d",a%10,b%10,tp,(a%10+b%10+tp)%Bs);tp=(a%10+b%10+tp)/Bs;//the carry
			printf("%s",tp>0?" with one carry\n":"\n");a/=10;b/=10;
			
		}printf("\n");
	}
	return 0;
}
