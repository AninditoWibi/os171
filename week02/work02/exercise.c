/*
* Name: Anindito Izdihardian Wibisono
* NPM: 1506757466
* Class: C
* Comment: Am I doing this right? I probably am not.
*/
#define LOOP 9
#include <stdio.h>

void main() {
int input = 1;
int res, x;

for (x = 0; x < LOOP; x++) {
		res = res + input;
	}

printf("%d times %d equals %d", input, LOOP, res);
}
