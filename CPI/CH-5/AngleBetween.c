#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
-459 -51 -172 -26 -350 209 -33 -171 436
-60 200 -383 -242 311 452 -9 493 431
323 -69 -141 90 399 -347 -208 -130 -96
198 199 376 -58 205 257 27 368 393
142 -227 -482 385 175 288 -209 -197 156
111 -440 435 238 329 462 -131 418 -218
162 -259 364 -276 20 227 -407 92 -422
115 387 369 276 -46 390 -362 163 -418
-97 152 -28 84 -349 -460 -289 -47 123
-238 -385 363 -477 -342 356 97 -421 398
48 -302 211 -266 -354 -98 -256 -207 234

*/

float divis(int n, int m){
	int a=abs(n),b=m;//
	float ans=0;
	for(int i=0;i<4;i++){
		ans*=10;
		ans+=a/b;
		a=a-(a/b)*b;a *= 10;
	}
	ans/=1000;
	if(n>0) return 1 * ans;
	else return -1 * ans;
}

int main(void){
	int ox, oy, oz, px, py, pz, qx, qy, qz;//xyz for point o, p, q
	while(~scanf("%d%d%d%d%d%d%d%d%d", &ox, &oy, &oz, &px, &py, &pz, &qx, &qy, &qz)){
		int xop=px-ox,yop=py-oy, zop=pz-oz,xoq=qx-ox, yoq=qy-oy,zoq=qz-oz, tmp, a, b;
		float ans;
		a=(xop*xoq+yop*yoq+zop*zoq);
		b=((int)sqrt(xop*xop+yop*yop+zop*zop)*(int)sqrt(xoq*xoq+yoq*yoq+zoq*zoq));
		ans = divis(a,b);
		ans = a>0 ?floor((ans+0.0000001)*100)/100:ceil((ans-0.0000001)*100)/100;//ans eg. 0.xxxxxx so add/subtract 0.0000001 doesnt mess up the number
		//printf("DEBUGGING: %d, %d, a/b=%f, a\%b=%d, divis(a,b)=%f, ans=%f\n",a, b ,(float)a/b,a%b,divis(a,b),ans);
		printf("The cosine theta between vectors (%d, %d, %d) and (%d, %d, %d) is %.2f\n",xop, yop, zop, xoq, yoq, zoq, ans );
	}
	return 0;
}
