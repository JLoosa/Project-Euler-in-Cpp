#include <cmath>

/*
 * p5_SmallestMultiple.cpp
 *
 *  Created on: Sep 28, 2020
 *      Author: Jacob Loosa
 *
 *      Prompt: What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
 */

bool isPrime(int n) {
	int stop = sqrt(n);
	while (stop > 1) {
		if (n % stop == 0) {
			return false;
		}
		stop--;
	}
	return true;
}

unsigned long long int p5solve(const int n) {
	// Store all numbers up to n in a list
	int* factorList = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		factorList[i] = i+1;
	}

	unsigned long long int solution = 1llu;
	int i = 2, j, matched;
	while (i <= n) {
		if(!(isPrime(i))) {
			i++;
			continue;
		}
		matched = 0;
		// Check for i as a factor
		for (j = 0; j < n; j++) {
			if (i > factorList[j]) {
				continue;
			}
			if (factorList[j] % i== 0) {
				matched = 1;
				factorList[j] /= i;
			}
		}
		// If i is is not a factor, increment it, otherwise, multiply
		if (matched) {
			solution *= i;
		}
		else {
			i++;
		}
	}
	free(factorList);
	return solution;
}



