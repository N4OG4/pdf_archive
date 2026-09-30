#include <stdio.h>
#include <stdlib.h>
/*
1 2 3 4
-1 2 -3 4

input a b c d
put them in a/b + c/d and print
but it has to be in fraction
and lcm is (x*y)/gcm(x,y)
*/
float gcd(int a, int b){
    if(b==0)return a;
    return gcd(b, a%b);
}
int lcm(int ab, float b){//x*y/gcd(x,y);
	return (b*d)/(gcd(b*1,d*1));
}
int main(void) {
    float a,b,c,d;
    
    while(scanf("%f%f%f%f",&a,&b,&c,&d)){
        int lcm(b*d, gcd(b*1,d*1));
        printf("%.f/%.f + %.f/%.f = %.f/%d",a,b,c,d, (a/b+c/d)*(lcm), lcm);a*c/b*d 
        //printf("%.f/%.f + %.f/%.f = %.f/%d",a,b,c,d, (a/b+c/d)*(lcm), lcm);
    }
    return 0;
}
