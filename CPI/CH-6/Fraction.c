#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
	if(b==0)return a;
	return gcd(b, a%b)
}

int main(void){
	int a,b,c,d;
	while(~scanf("%d%d%d%d",&a,&b,&c,&d)){
		int lcm=(b*d)/gcd(b,d);
		long long e, f;
		e=(a*d+b*c)/gcd((a*d+b*c),(b,d));
		f=(b*d)/gcd((a*d+b*c),(b,d));
		printf("%s%d/%d %s %d/%d = %s%d/%d\n",a*b<0?"-":"",abs(a),abs(b),c*d<0?"-":"+",abs(c),abs(d),e*f<0?"-":"",abs(e),abs(f));
	}
}