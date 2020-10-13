#include <cmath>

/*
 * p7_10001stPrime.cpp
 *
 *  Created on: Sep 28, 2020
 *      Author: Jacob
 *
 *      Prompt: What is the 10 001st prime number?
 *
 *      This problem ignores 1 as a possible prime.
 */

bool isPrime(const unsigned int n) {
	int stop = sqrt(n);
	while (stop > 1) {
		if (n % stop == 0) {
			return false;
		}
		stop--;
	}
	return true;
}

/**
 * This solution does store all of the primes that it finds in memory.
 * By replacing the array with a variable to store the most recent prime, this can be down in O(1) memory.
 */
int p7solve(int n) {
	unsigned int primeList[n];
	unsigned int currentValue = 2;
	unsigned short primePointer = 0;

	while (n > primePointer) {
		if (isPrime(currentValue)) {
			primeList[primePointer] = currentValue;
			primePointer++;
		}
		currentValue++;
	}

	n = primeList[primePointer-1];
	free(primeList);
	return n;
}


