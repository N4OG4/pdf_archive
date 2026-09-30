#include <stdio.h>
#include <stdlib.h>
/*
4
42 98 99 -1
24 8 59 96 -1
65 30 59 87 89 91 95 98 -1
39 99 -1

*/
int main(void) {
	int i, n, t, S, tgd=0,cnt=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d",&S);	
		while(scanf("%d",&t)){
			if(t==-1)break;	
			cnt++;
			if(S>t){
				S+=t;
				tgd++;
				cnt--;
			}
		}
		if(tgd>1){
			printf("%d people have been caught, and ",tgd);
		}
		else{
			printf("%s has been caught, and ",tgd==1?"One person":"No one");
		}
		if(cnt>1){
			printf("%d people have escaped.\n",cnt);
		}
		else{
			printf("%s has escaped.\n",cnt==1?"one person":"no one");
		}
		tgd=(cnt=0);
	}
	return 0;
}
