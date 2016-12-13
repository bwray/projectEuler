/*
 * P8.cpp
 *.
 *  Created on: Dec 7, 2016
 *      Author: brian wray
 *
 * 		projecteuler.net/problem=8
 *
 *      Description: The four adjacent digits in the 1000-digit number that have the greatest
 *      product are 9 × 9 × 8 × 9 = 5832.

		73167176531330624919225119674426574742355349194934
		96983520312774506326239578318016984801869478851843
		85861560789112949495459501737958331952853208805511
		12540698747158523863050715693290963295227443043557
		66896648950445244523161731856403098711121722383113
		62229893423380308135336276614282806444486645238749
		30358907296290491560440772390713810515859307960866
		70172427121883998797908792274921901699720888093776
		65727333001053367881220235421809751254540594752243
		52584907711670556013604839586446706324415722155397
		53697817977846174064955149290862569321978468622482
		83972241375657056057490261407972968652414535100474
		82166370484403199890008895243450658541227588666881
		16427171479924442928230863465674813919123162824586
		17866458359124566529476545682848912883142607690042
		24219022671055626321111109370544217506941658960408
		07198403850962455444362981230987879927244284909188
		84580156166097919133875499200524063689912560717606
		05886116467109405077541002256983155200055935729725
		71636269561882670428252483600823257530420752963450

 *		Find the thirteen adjacent digits in the 1000-digit number that have the greatest
 *		product. What is the value of this product?
 *
 *      Answer: 2091059712
 *
 */

#include "P_08.h"
#include <stdio.h>


P8::P8(){
	this->numToArray();
}

P8::~P8(){}

long long P8::findLargestProduct( int n ){
	// Take the 1000 digit number, and find the largest sum of n consecutive digits
	//numToArray();
	long long sum = 0;
	long long tempSum = 0;

	for (int i = 0; i < 1000 - n; i++){
		tempSum = 1;
		for (int j = i; j < i + n; j++){
			tempSum *= numbers[j];
		}
		printf("tempSum #%d = %ll\n", i, tempSum);
		if (tempSum > sum) { sum = tempSum; }
	}
	return sum;
}

void P8::numToArray(){
	// We are supposed to work with a 1000 digit number, which is far too large for any of the primitive
	// data types. So, I pasted the number into a file, and I'll use File functions in order to take
	// one integer at a time and place them in the numbers array.
	FILE *in_file = fopen("/Users/brianwray/Dropbox/BWCode/sandbox/ProjectEuler/src/P8bigNum.txt", "r");


//	if (in_file == 0) {
//		fprintf(stderr, "Can't open input file in.list!\n");
//		exit(1);
//	}

	int i = 0;

	while (i < 1000) {
		// First, go through the file one digit at a time and grab the ascii value of the character
		int temp = getc(in_file);

		// If the ascii value is newline, then just skip on to the next one
		if (temp == 0xA){
			continue;
		}

		// This will conert the ascii value in to the integer of what that ascii represents
		temp = temp - '0';

		// Put in the array
		numbers[i] = temp;
		printf("numbers[%d] = %d\n", i, numbers[i]);


		i++;

	}

	// close the file.
	fclose(in_file);
}



