#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, i;
	scanf("%d", &n);
	int a, b, c;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c);
		if(a==b && b==c)printf("The triangle with edges %d, %d, and %d is an equilateral triangle.", a,b,c);
		else if(a==b || b==c || a==c)printf("The triangle with edges %d, %d, and %d is an isosceles triangle.", a,b,c);
		else if(a!=b && b!=c && a!=c)printf("The triangle with edges %d, %d, and %d is an scalene triangle.", a,b,c);
	}
	return 0;
}
