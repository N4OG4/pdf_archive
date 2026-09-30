#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,p,q,r,cnt=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d%d",&p,&q,&r);
		int found=0;
		for(int u=1;u<p && !found;u++){
			for(int v=u+1;v<p/2 && !found;v++){
				int w=q/(u*v);
				if(u+2*v+3*w==p && u*u*u+v*v+w==r){
					printf("Case %d: u = %d, v = %d, w = %d\n",cnt++,u,v,w);
					found=1;
				}
			}
		}
	}
}
