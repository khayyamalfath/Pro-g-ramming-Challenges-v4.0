/*
Fizzbuzz
Write a function to list the integers from 1 to 100, but for every multiple of 3, write “Fizz”, and for every multiple of 5, write “Buzz”. For numbers which are multiples of both 3 and 5, it should write “FizzBuzz”; for every other number, it should print the number unchanged.
*/

#include <stdio.h>

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			if (i % 3 == 0) {
				printf("Fizz");
			}
			if (i % 5 == 0) {
				printf("Buzz");
			}
			printf("\n");
		}
		else {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
