//Albert Zhang
//Removes all vowels from a string
#include <stdio.h>
#include <string.h>
int main () {
	char in[100], out[100];
	printf("Input a string. \n");
	fgets(in, sizeof(in), stdin);
	int count, i;
	i = 0;
	for (count = 0; count < sizeof(in); count++) {
		if (in[count] == 'a' || in[count] == 'e' || in[count] == 'i' || in[count] == 'o' || in[count] == 'u' || in[count] == 'A' || in[count] == 'E' || in[count] == 'I' || in[count] == 'O'     || in[count] == 'U') {
			continue;
		}
		else {
			out[i] = in[count];
			i++;
		}
	}
	printf("%s", out);
	return 0;
}

