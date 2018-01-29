#include <stdio.h>

int main(void){
	char operation[20];
	int num1;
	int num2;
	int cont = 0;

	while (cont == 0){
		printf("Enter an operation (enter ops for list of operations): ");
		scanf("%s", operation);

		if (strcmp(operation, "addition") == 0){
			printf("Enter an int: ");
			scanf("%d", &num1);

			printf("Enter another int: ");
			scanf("%d", &num2);

			printf("%d\n", num1 + num2);
		}
		else if (strcmp(operation, "subtraction") == 0){
			printf("Enter an int: ");
			scanf("%d", &num1);

			printf("Enter another int: ");
			scanf("%d", &num2);

			printf("%d\n", num1 - num2);
		}
		else if (strcmp(operation, "multiplication") == 0) {
			printf("Enter an int: ");
			scanf("%d", &num1);

			printf("Enter another int: ");
			scanf("%d", &num2);

			printf("%d\n", num1 * num2);
		}
		else if (strcmp(operation, "division") == 0) {
			printf("Enter an int: ");
			scanf("%d", &num1);

			printf("Enter another int: ");
			scanf("%d", &num2);

			printf("%.6f\n", (float)num1 / (float)num2);
		}
		else if (strcmp(operation, "exit") == 0) {
			printf("Goodbye\n");
			cont = 1;
		}
		else if (strcmp(operation, "ops") == 0) {
			printf("addition, subtraction, multiplication, division, exit\n");
		}
		else {
			printf("Sorry, not a recognized input\n");
		}
	}

	return 0;
}