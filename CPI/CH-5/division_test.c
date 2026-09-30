#include <stdio.h>
#include <stdlib.h>
/*
611437 861811
451986 488555
702931 746846
85905 301402
42767 68057
*/
float divis(int n, int m){
	int a=n,b=m;
	float ans=0;
	//a=a%b;
	ans*=1;
	ans+=a/b;
	a%=b;a*=100;
	ans/=10000.0;
	//ans=(a/b)+(100*(a%b)/b)/100.0;
	//
	//ans=floor(ans*100.0)/100.0;
	if(n/m<0) return -1.0*ans;
	else return 1.0*ans;
}

int main() {
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		printf("%f\n",divis(n,m));
	}
	return 0;
}

