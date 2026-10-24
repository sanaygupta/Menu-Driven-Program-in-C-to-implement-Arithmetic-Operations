#include <stdio.h>

int main() {
	int math;
	int a, b, result;
	a = 10;
	b = 30;
	printf("Enter math operation number (1-5): ");
	scanf("%d", &math);
	
	
	switch (math) {
		case 1 : result = a + b;
		printf("%d", result);
			break;
		case 2 : result = a - b;
		printf("%d", result);
			break;
		case 3 : result = a * b;
		printf("%d", result);
			break;
		case 4 : result = a / b;
		printf("%d", result);
			break;
		case 5 : result = a % b;
		printf("%d", result);
			break;
		default: printf("Invalid math operation nmber");
	}
	return 0;
}
		
		
