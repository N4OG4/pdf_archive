#include <stdio.h>
#include <stdlib.h>
/*
1 2 3 4
-1 2 -3 4
5 5 6 6
input a b c d
put them in a/b + c/d and print
but it has to be in fraction
and lcm is (x*y)/gcm(x,y)

1*4+2*3 / 2*4== 10 / 8 gcd = 2
*/
int gcd(int a, int b){
    if(b<=0)return a;
    return gcd(b, a%b);
}

int main(void) {
	int a,b,c,d;
    
    while(scanf("%d%d%d%d",&a,&b,&c,&d)){
        int lcm = (b*d)/(gcd(b,d));
        printf("%d/%d + %d/%d = %d/%d",a,b,c,d, gcd(b,d)!=1? (a*d+b*c)/gcd(b,d): (a*d+b*c)/lcm,gcd(b,d)!=1?lcm:1);//5 5 6 6 ans: 60/30   sup_ans: (60/30)/ 
    }
    return 0;
}
