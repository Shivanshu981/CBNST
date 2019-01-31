#include<stdio.h>
#include<math.h>
int functionDegreeThree(int, int, int, int, int, int, int);
int functionDegreeTwo(int, int, int, int, int);
void checkRoot(int, int);

int main() {
	int choose, result1, result2;
	int num1, num2, num3, num4;
	int dg1, dg2, dg3, dg4;
	printf("Function of Degree\n 1. DEGREE OF 2\n 2. DEGREE OF 3\n");
	scanf("%d", &choose);
	switch(choose) {
		case 1:
			printf("a?="); scanf("%d", &num1);
			printf("b?="); scanf("%d", &num2);
			printf("c?="); scanf("%d", &num3);
			result1 = functionDegreeTwo(num1, 2, num2, 1, num3);
			result2 = functionDegreeTwo(num1, 2, num2, 1, num3);
			break;
		case 2:
			printf("a?="); scanf("%d", &num1);
			printf("b?="); scanf("%d", &num2);
			printf("c?="); scanf("%d", &num3);
			printf("d?="); scanf("%d", &num4);
			result1 = functionDegreeThree(num1, 3, num2, 2, num3, 1, num4);
			result2 = functionDegreeThree(num1, 3, num2, 2, num3, 1, num4);
			break;
		default:
			printf("\nOpps Something Went Wrong :(");
	}

	checkForRoots(result1, result2);
}

void checkForRoots(int result1, int result2) {
	int itr, interval, presc, i;
	float c;

	if ((result1*result2) > 0) {
		printf("Root don't exist");
	} else if ((result1*result2) == 0) {
		if (result1 == 0) {
			printf("f(%d) is zero", result1);
		} else {
			printf("f(%d) is zero", result2);
		}
	} else if ((result1*result2) < 0) {
		for (i=0;i<interval;i++) {
			c = (result1 + result2)/2;
			if ((result1*result2) > 0) {
				result1 = result1;
				result2 = c;
			} else if ((result1*result2) == 0) {
				if (result1 == 0) {
					printf("f(%d) is zero", result1);
				} else {
					printf("f(%d) is zero", result2);
				}
			} else {
				result1 = c;
				result2 = result2;
			}
		}
		printf("%f", c);
	}
}

int functionDegreeTwo(int num1, int dg1, int num2, int dg2, int num3) {
	int x, xSquare, xSimple, valueOfx;
	int digit1, digit2;
	printf("Please Enter the value of f(x)="); scanf("%d", &valueOfx);
	xSquare = pow(x, dg1);
	num1 = num1*xSquare;
	xSimple = x;
	num2 = num2*xSimple;
	return(num1 + num2 + num3);
}

int functionDegreeThree(int num1, int dg1, int num2, int dg2, int num3, int dg3, int num4) {
	int x, xCube, xSquare, xSimple, valueOfx;
	int digit1, digit2;
	printf("Please Enter the value of f(x)="); scanf("%d", &valueOfx);
	xCube = pow(x, dg1);
	num1 = num1*xCube;

	xSquare = pow(x, dg2);
	num2 = num2*xSquare;

	xSimple = x;
	num3 = num3*xSimple;
	return(num1 + num2 + num3 + num4);
}

