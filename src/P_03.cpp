/*
 * P3.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=3
 *
 *      Description: The prime factors of 13195 are 5, 7, 13 and 29.
 *      What is the largest prime factor of the number 600851475143 ?
 *
 *      Answer: 6857
 *
 */

#include "P_03.h"

#include <stdio.h>
#include <cmath>

// The prime numbers under 20 are 2, 3, 5, 7, 11, 13, 17 and 19
P3::P3():testNum(20){}

// I jacked this from someone else's code on project Euler. My original version of isPrime
// took way too long to run. The big difference here is the test in the for loop (i*i <= n)
bool P3::isPrime( long n ){

		for (long i = 2; i*i <= n; i++) {
			if (n % i == 0) return false;
		}
		return true;
	}


void P3::testIsPrime(){

	for (int i = 0; i < testNum; i++){
		printf("%d ", i);
		if (isPrime(i) == true) { printf("is a prime number.\n"); }
		else { printf( "is NOT a prime number.\n" ); }
	}
}

int P3::largestPrimeFactor( long n ){
	int LPF = 0; // LPF = largest prime factor

	for (long i = sqrt(n); i >= 1; i--){
		if (isPrime(i) == true){
			if ( n % i == 0 ) {
				LPF = i;
				return LPF;
			}
		}
	}

	return LPF;

}

void P3::testLargestPrimeFactor(){
	int tmp = 13195;
	int answer = largestPrimeFactor(tmp);
	printf("The largest prime factor of %d is %d.\n", tmp, answer);

}

