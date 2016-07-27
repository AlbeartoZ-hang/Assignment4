//Albert Zhang
//This prints the sum of all previous numbers entered.
#include <stdio.h>
int main () {
	printf("Enter 0 to end the program. \n");
	int array1[50], input, count, count2;
	for (count = 0; count <= 50; count++) {
		printf("Input a character: ");
		scanf("%d", &array1[count]);
		if (array1[count] == 0) {
			break;
		}
	}
	int array2[count];
	printf("%d \n", array2[0]);
	for (count2 = 0; count2 < count; count2++) {
		array2[count2] = array2[count2 - 1] + array1[count2];
		if (array2[count2] != 0) {
			printf("%d \n", array2[count2]);
		}
	}

	return 0;
}
