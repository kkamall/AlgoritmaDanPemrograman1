#include <stdio.h>
int main(){
	
	char a, b, c, d, e, f;
	int g;
	scanf("%c %c %c %c %c %c %d", &a, &b, &c, &d, &e, &f, &g);
	int aa = 0, bb = 0, cc = 0, dd = 0, ee = 0, ff = 0, gg = 0;
	
	if ((a == 'a') || (a == 'i') || (a == 'u') || (a == 'e') || (a == 'o')){
		aa = 1;
	}
	if ((b == 'a') || (b == 'i') || (b == 'u') || (b == 'e') || (b == 'o')){
		bb = 1;
	}
	if ((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')){
		c = 1;
	}
	if ((d == 'a') || (d == 'i') || (d == 'u') || (d == 'e') || (d == 'o')){
		dd = 1;
	}
	if ((e == 'a') || (e == 'i') || (e == 'u') || (e == 'e') || (e == 'o')){
		ee = 1;
	}
	if ((f == 'a') || (f == 'i') || (f == 'u') || (f == 'e') || (a == 'o')){
		aa = 1;
	}
	if ((aa + bb + cc + dd + ee + ff + gg == 3) && (g % 2 == 0)){
		printf("Riddle Stone Acquired! Everybody comes home\n");
	}
	else if ((aa + bb + cc + dd + ee + ff + gg > 3) && (g % 2 != 0)){
		printf("Riddle Stone Acquired! Everybody comes home\n");
	}
	else if ((aa + bb + cc + dd + ee + ff + gg < 3) && (g == 0)){
		printf("Riddle Stone Acquired! Everybody comes home\n");
	}
	else{
	    printf("You are Unworthy\n");
	}
	return 0;
}