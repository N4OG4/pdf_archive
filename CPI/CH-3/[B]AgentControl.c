#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
wwww,q/aaa,e/ss,r/d,f/ww,g/aaa,t/
was,d/t/e,q/r/f/g/
#
wwwwqaaaessrdfwwgaaat
wasdteqrfg
#
*/
int main(){
	int i, cnt=1,x=0,y=0;
	char str[1000],tmp;
	//gets(str);
	//printf("%s",str);
	
	while(gets(str)){
		x=(y=0);
		for(i=0;i<strlen(str);i++){
			tmp=str[i];
			switch(tmp){
				case 'w':
					x++;
					break;
				case 'a':
					y--; 
					break;
				case 's':
					x--;
					break;
				case 'd':
					y++;
					break;
				case 't':
					printf("Normal attack at (%d, %d).\n",x,y);
					break;
				case 'e':
					printf("E-skill at (%d, %d).\n",x,y);
					break;
				case 'q':
					printf("Q-skill at (%d, %d).\n",x,y);
					break;
				case 'r':
					printf("R-skill at (%d, %d).\n",x,y);
					break;
				case 'f':
					printf("Cast spell 1 at (%d, %d).\n",x,y);
					break;
				case 'g':
					printf("Cast spell 2 at (%d, %d).\n",x,y);
					break;
				case '#':
					return 0;
				default:
					printf("Log of Agent %d:",cnt++);
				
			}
		}
	}	
	return 0;
}
