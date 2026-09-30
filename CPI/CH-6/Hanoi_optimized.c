#include <stdio.h>
#include <stdlib.h>
/*:sob: 
Hanoi Tower:
move n disks from 1st pole to 3rd pole
1. move one disk at a time
2. larger one cant be on smaller one
code a normal hanoi solver first

from is the current location, to is the destination
from=1, to=3, let n=3:
the state of hanoi:
3 hanoi(1,3)=> { // fff 0 ABC 
	2 hanoi( 1, 2) {   // ffc AB 0
		1 hanoi( 1, 3) { // fbc 0 A 
			MOVE: abc 0 0 => bc 0 a
		}
		MOVE: bc 0 a => c b a
		1 hanoi( 1, 2) { // c Ab f
			MOVE: c b a => c ab 0
		}
	} Result: c ab 0 
	MOVE: c ab 0 => 0 ab c
	2 hanoi( 2, 3) {  // 0 ff ABc
		1 hanoi( 2, 3) { // A fb c
			MOVE: 0 ab c => a b c
		}
		MOVE: a b c => a 0 bc
		1 hanoi( 1, 3) { //  f 0 Abc
			MOVE: a 0 bc => 0 0 abc
		}
	} Result: 0 0 abc  Yippie!
}



*/
void tabs(int n){
	while(n--){
		printf("\t");
	}
	return;
}
int hanoi(int a, int from, int to){
	printf("a %d, from %d, to %d\n",a ,from ,to);
	tabs(4-a);
	
    if(a==1){//n=1,d1(1,3)
        printf("disk %d from %d to %d\n", a, from,to);//MOVE
        return 0;
    }
    hanoi(a-1,from,6/(from*to));
    tabs(4-a);
    printf("disk %d from %d to %d\n", a, from, to); //MOVE
    tabs(4-a);
    hanoi(a-1,6/(from*to),(to+2)%3+1);
}

int main(void) {
    int n;
    while(scanf("%d",&n) != EOF){
        hanoi(n,1,3);//from is the current location, to is the destination
    }
    return 0;
}
