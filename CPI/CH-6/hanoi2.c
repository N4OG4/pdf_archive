#include <stdio.h>
#include <stdlib.h>

void hanoi2(int n, int from, int to){
	int tmp=6/(from*to);
	if(n==1){
		printf("Move disk %d from %d to %d\n", n, from, to);
		return;
	}
	if(n==2){
		printf("Move disks %d and %d from %d to %d\n",n-1, n, from, to);
		return;
	}
	if(n%2==0){
		hanoi2(n-2,from,tmp);
		printf("Move disks %d and %d from %d to %d\n",n-1, n, from, to);
		hanoi2(n-2,tmp,to);
	}
	else{
		hanoi2(n-1,from,tmp);
		printf("Move disk %d from %d to %d\n", n, from, to);
		hanoi2(n-1,tmp,to);
	}
}

int main(void){
	int n;
	while(scanf("%d",&n) != EOF){
		hanoi2(n,1,3);
		printf("\n");
	}
}
