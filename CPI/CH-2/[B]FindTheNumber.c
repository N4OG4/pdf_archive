#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	int n, i;
	scanf("%d", &n);
	int t, a0, a, c, N;
	for(i=0;i<n;i++){
		scanf("%d%d%d%d", &t, &a0, &c, &N);
		a=a0;
		if(t==1){//arithmetic sequence
			int min=999999999;
			while(1){
				if(abs(a-N)<min){//approach to the closest value
					min=abs(a-N);
				}
				else {
					if(abs((a-c)-N)==abs(a-N)){
						printf("The closest number to %d in the arithmetic sequence starting from %d with difference %d is %d and %d.", N, a0, c, a-c, a);
						break;
					} 
					printf("The closest number to %d in the arithmetic sequence starting from %d with difference %d is %d.", N, a0, c, a-c);//found the closest, the closest num'd be a-c
					break;
				}
				a+=c;//starting sequence
			}
			
		}
		else{//t==2 geometric sequence
			int min=999999999;
			while(1){
				if(abs(a-N)<min){//approach to the closest value
					min=abs(a-N);
				}
				else {
					if(abs((a/c)-N)==abs(a-N)) {
						printf("The closest number to %d in the geometric sequence starting from %d with ratio %d is %d and %d.", N, a0, c, a/c, a);
						break;
					}
					printf("The closest number to %d in the geometric sequence starting from %d with ratio %d is %d.", N, a0, c, a/c);//found the closest, the closest num'd be a/c
					break;
				}
				a*=c;//starting sequence
			}
		}
	}
	return 0;
}
