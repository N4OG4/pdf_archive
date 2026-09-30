#include <stdio.h>
#include <stdlib.h>
/*:sob: 
Hanoi Tower:
move n disks from pole to another pole
1. move one disk at a time
2. larger one cant be on smaller one
And the catch is that we can move two at a time maximum.
Think i should go code a normal hanoi solver first
*/
int pows(int a,int b){
    int s=1;b/=2;
    while(b--){
        s*=a;
    }
    return s;
}
int hanoi2(int a, int from, int to){
    if(a==0)return 0 ;
    if(a==1){//n=1,d1(1,3)
        printf("Move disks %d and %d from %d to %d\n", pows(2,a)-1,pows(2,a), from,to);
        return 0;
    }
    if(a%2==1){
        hanoi2(a-1,from,2);
        printf("Move disk %d from %d to %d\n", a, from, to);
        hanoi2(a-1,2,3);
    }
    else {
        hanoi2(a-2,from,6/(from*to));
        printf("Move disks %d and %d from %d to %d\n", pows(2,a)-1,pows(2,a), from, to);
        hanoi2(a-2, 6/(from*to), (to+2)%3+1);
    }
    
}
int main(void) {
    int n;
    while(scanf("%d",&n) != EOF){
        if(n==1){
            printf("Move disk 1 from 1 to 3\n");
        }
        else hanoi2(n,1,3);
    }
    return 0;
}
