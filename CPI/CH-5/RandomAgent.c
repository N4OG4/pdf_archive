#include <stdio.h>
#include <stdlib.h>

int a_function(void){
	int a; scanf("%d",&a);
	return a;
}

int main(void){
	int n,cnt=1;
	while(~scanf("%d",&n)){
		int x=0,y=0,tmp;
		if(n!=0)printf("%sLog of Agent %d:\n",cnt-1==1?"":"\n",cnt++);
		for(int i=0;i<n;i++){
			tmp = a_function();
			switch(tmp%11){
				case 0:
					break;
				case 1:
					x++;
					break;
				case 2:
					y--;
					break;
				case 3:
					x--;
					break;
				case 4:
					y++;
					break;
				case 5:
					printf("Normal attack at (%d,%d).\n",x,y);
					break;
				case 6:
					printf("E-skill attack at (%d,%d).\n",x,y);
					break;
				case 7:
					printf("Q-skill attack at (%d,%d).\n",x,y);
					break;
				case 8:
					printf("R-skill attack at (%d,%d).\n",x,y);
					break;
				case 9:
					printf("Cast spell 1 at (%d,%d).\n",x,y);
					break;
				case 10:
					printf("Cast spell 2 at (%d,%d).\n",x,y);
					break;
			}
		}
	}
	return 0;
}