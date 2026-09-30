#include<stdio.h>
#include<stdlib.h>
/*
0 10 2 3 4 1
0 10 2 3 4 -1
0 10 -2 -3 -4 1
0 10 -2 -3 -4 -1
0 0 0 0 0 0
 */
int main(){
    int lb,ub,a,b,c,d;
   while(scanf("%d%d%d%d%d%d", &lb,&ub,&a,&b,&c,&d) != EOF){
           if(lb==0 && ub==0 && a==0 && b==0 && c==0 && d==0) return 0;
   
           int cnt=0;
           for(int i=lb;i<=ub;i++){
            for(int j=lb;j<=ub;j++){
                if(d==1){
                    if(a*i+b*j<=c){
                        cnt++;
                    }
                }
                else{
                    if(a*i+b*j>=c){
                        cnt++;
                    }
                }
            }
        }
        printf("The square area within %d to %d satisfying %dx%s%dy%s%d is %d.\n",lb,ub,a,b>0?"+":"",b,d==1?"<=":">=",c,cnt);
   }
  
    return 0;

}
