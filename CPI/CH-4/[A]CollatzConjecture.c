#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&n);
        printf("The sequence starts from %d is: %d ",n, n );
        while(n!=1){
            if(n%2==0){
                n/=2;
            }
            else{
                n*=3;n++;n/=2;
            }
            printf("%d%s",n,n-1?" ":"");
        }
        printf(".\n");
    }
    return 0;
}
