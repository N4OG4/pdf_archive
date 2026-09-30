#include<stdio.h>
#include<stdlib.h>

/*

[-11,81) 2 -70 32
(38,95) 5 93 75 -45 -80 -20
[-29,40] 10 -50 -41 88 -2 -1 36 73 -85 35 41
(-26,32) 4 32 61 65 -45
*
Sample Output
32 = 32
93 + 75 = 168
-2 - 1 + 36 + 35 = 68
All values are out of range.

*/

int main(){
    char ca,cb,non;
    int ub,lb;
    
    while(scanf(" %c%d,%d%c",&ca,&lb,&non,&ub,&cb) != EOF){ 
        if(ca=='*')return 0;
        int n,tmp,found=0,sum=0;
        scanf("%d",&n);
        if(ca=='(')lb++;
        if(cb==')')ub--;
        for(int i=0;i<n;i++){
            scanf("%d",&tmp);
            if(tmp<=ub && tmp>=lb){
                if(!found) printf("%d ",tmp);
                else {
                    printf("%s%d ",tmp>=0?"+ ":"- ",abs(tmp));
                } 
                found=1;
                sum+=tmp;
            }
        }
        if(found){
            printf("= %d\n",sum);
        }
        else{
            printf("All values are out of range.\n");
        }
    }
    return 0;

}
