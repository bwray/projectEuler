/*
 * P4.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=4
 *
 *      Description: A palindromic number reads the same both ways. The largest palindrome
 *      made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *      Find the largest palindrome made from the product of two 3-digit numbers.
 *
 *      Answer: 906609
 *
 */

#include "P_04.h"

#include <cmath>
#include <stdio.h>

P4::P4(): testNum(1000){};

bool P4::isPalindrome( int n ){
	int numDigits = 0;
	int digits[10];
	int index = 0;
	int workingNumber = n;

	while (index < 10)
	 {
		int digit = 0;
		if (workingNumber > 0){
			digit = workingNumber % 10;
			++numDigits;
			// printf("numDigits = %d, digit = %d.\n", numDigits, digit);
		}
	    digits[index] = digit;
	    workingNumber = workingNumber / 10; //Must be integer division
	    index++;
	 }

	for (int i = 0; i < numDigits; i++){
		// printf("digits[%d] = %d, digits[numDigits - %d - 1] = %d\n", i, digits[i], i, digits[numDigits - i - 1]);
		if (digits[i] != digits[numDigits - i - 1]) { return false; }
	}

	return true;
}

int P4::largestPalindrome(){

	int x = testNum;
	int y = testNum;
	int numMults = 0;
	int bigPal = 0;

	for ( int i = x; i > 900; i-- ) {
		for (int j = y; j >= i; j-- ){
			//printf("i = %d, j = %d, i * j = %d, numMults = %d\n", i, j, (i * j), numMults);
			++numMults;
			if (isPalindrome(i * j) && (i * j) > bigPal){
				bigPal = (i * j);
			}
		}
	}
	return bigPal;
}






