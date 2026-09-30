#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int hanoi2(int n, int from, int to){
	int tmp = 6/(from*to);//, move=(to+2)%3+1 ts is sb behavior
	if(n==0)return 0;
	if(n==1){
		printf("Move disks %d and %d from %d to %d\n", (int)pow(2,n/2)-1, (int)pow(2,n/2), from, to);
		return 0;
	}
	if(n%2==1){//n= 3, 5, 7, 9
		hanoi2(n-1,from, tmp);//in n=3/ call hanoi2(2,from,tmp)
		printf("Move disk %d from %d to %d\n", n, from, to);
		hanoi2(n-1, tmp, to );
	}
	else{//n= 2, 4, 8, 6
		hanoi2(n-2, from, tmp);//n=3=>n=2=> n=0 so return. nothing happens when n=2;
		printf("Move disks %d and %d from %d to %d\n", (int)pow(2,n/2)-1, (int)pow(2,n/2), from, to);//when n=3 its from, tmp cuz peg3 gon from, to
		hanoi2(n-2, tmp, to );//(to+2)%3+1) ã÷®Ø°e¦Û¤v 
	}
}

int main(void){
	int n;
	while(~scanf("%d",&n)){
		if(n==1){
			printf("Move disk 1 from 1 to 3\n");
			continue;
		}
		hanoi2(n,1,3);
	}
}
