#include <stdio.h>
#include <string.h>
int main () {
	char in[100];
	printf("Input a string. \n");
	fgets(in, sizeof(in), stdin);
	int count, count2, uni, i, j;
	i = strlen(in);
	uni = 0;
	j = 0;
	for (count = 0; count <= i; count++) {
		j = 0;
		for (count2 = 0; count2 <= i; count2++) {
			if (in[count] == in[count2]) {
				j++;
				if (j >= 2) {
					j = 0;
					uni = 1;
					continue;
				}
			}
		}
	}
	if (uni == 1) {
		printf("Your string is not unique. \n");
	}
	if (uni == 0) {
		printf("Your string is unique.\n");
	}
	return 0;
}

