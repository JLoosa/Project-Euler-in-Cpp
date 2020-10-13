/*
 * p6_SumSquareDifference.cpp
 *
 *  Created on: Sep 28, 2020
 *      Author: Jacob
 *
 *      Prompt: Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
 *
 *      Summation resource: https://brilliant.org/wiki/sum-of-n-n2-or-n3/
 */

int sumToN(int n) {
	return n * (n+1) / 2;
}

int sumSquaresToN(int n) {
	return n * (n+1) * (2*n+1) / 6;
}


int p6solve(int n) {
	return sumSquaresToN(n) - sumToN(n);
}

