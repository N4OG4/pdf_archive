#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int atk, hp, atk2, hp2, cnt=1;
	while(scanf("%d%d%d%d",&atk, &hp, &atk2, &hp2)){
		if(atk==hp && hp==atk2 && atk2==hp2 && atk==hp2) break;
		printf("Combat %d: ",cnt);cnt++;
		if(hp2-atk<=0 && hp-atk2<=0){
			printf("Sacrificed attack. Both vanished. ");
		}
		else if(hp2-atk<=0){
			printf("Well attack. Defender vanished, and attacker survived. ");	
		}
		else if(hp-atk2<=0){
			printf("Poor attack. Attacker vanished, but defender survived. ");			
		}
		else if(hp2-atk>=0 && hp-atk2>=0){
			printf("Ineffective attack. Both survived. ");
		}
		
		if(hp2-atk<0)printf("Attacker caused %d damages to opponent player.",atk-hp2);
		else printf("No damage caused.");
	}
	return 0;
}
