#include <stdio.h>
#include <cstdlib>

#include "P_01.h"
#include "P_02.h"
#include "P_03.h"
#include "P_04.h"
#include "P_05.h"
#include "P_06.h"
#include "P_07.h"
#include "P_08.h"
#include "P_09.h"
#include "P_10.h"
#include "P_11.h"
#include "P_12.h"
#include "P_13.h"


int main(){
  // Main for Project Euler.
//	int mode = 2;
//	printf("Hi, welcome to Brian's Project Euler program.\n");
//	printf("Enter 0 to learn about this program, -1 to exit.\n");
//	printf("Enter 1 for test mode, 2 for problem mode, or 3 for play mode: ");
//	scanf("%d", &mode);
//
//	switch (mode){
//	case 0: printf("This is my program for working through the problems on Project Euler. Project Euler\n");
//			printf("is a website of mathematics exercises to be solved with programming (projeceuler.org).\n");
//			printf("Each problem on the site includes an example with an answer, followed by a problem to be\n");
//			printf("solved. Test mode is for checking the examples. Problem mode checks for the solution to the\n");
//			printf("problem. Play mode lets you enter different values for the problems.");
//
//	case 1:
//	}
//
//
//  // Problem 1, multiples of 3 and 5
//  int userInput = 0;
//  int p1Sum = 0;
//  int p1Default = 1000;
//  P1 p1;
//
//  printf("For problem 1, please enter a positive integer (or just enter 0 for the default)\n");
//  scanf("%d", &userInput);
//  printf("userInput was ");
//
//
//  if (userInput == 0){
//    printf("0. Default = %d", p1Default);
//    userInput = p1Default;
//  }
//  else{
//    printf("%d", userInput);
//  }
//
//  p1.calc(userInput);
//
//  p1Sum = p1.getSum();
//  printf("\nP1: Sum = %d\n", p1Sum);
//
//
//
//  // Problem 2, fibonacci numbers
//  P2 p2;
//  p2.printFibonacci();
//
//  // Problem 3, largest prime factor
//  P3 p3;
//
//  // This number is huge.
//  long P3testNum = 600851475143;
//  int LPF = p3.largestPrimeFactor(P3testNum);
//  printf("The largest prime factor of %ld is %d.\n", P3testNum, LPF);
//  return 0;
//
//	// Problem 4, Largest palindrome product
//	P4 p4;
//	int tmp = p4.largestPalindrome();
//	printf("The largest palindrome from two three-digit integers is %d\n", tmp);
//
//	// Problem 5, smallest multiple
//	P5 p5;
//	int smallestMult = p5.smallestMultiple(21);
//	printf("The smallest multiple divisible by all numbers from 1 - 20 is %d\n", smallestMult);
//
//	P6 p6;
//	int testDif = p6.calcDifferenc();
//	printf("For the answer, the difference is %d\n", testDif);
//
//	P7 p7;
//	int testPrime = p7.getPrimeNumber(10001);
//	printf("For problem 7, the 10,001st prime number is %d\n", testPrime);
//

//	P8 p8;
//	int largestSumP8_4 = p8.findLargestProduct(4);
//	long long largestSumP8_13 = p8.findLargestProduct(13);
//
//	printf("Largest product of 4 consecutive integers should be %d, and is actually %d\n", 5832, largestSumP8_4);
//	printf("The largest product of 13 consecutive integers is %lld\n", largestSumP8_13);
//	P9 p9;
//	int pythagProduct = p9.returnTripletProduct();
//	printf("The answer for P9 is %d\n", pythagProduct);

//	P_10 p_10;
//	int twoMil = 2000000;
//	long primeSum = p_10.returnPrimeSum(twoMil);
//	printf("Testing P_10: primeSum = %ld\n", primeSum);
//
//	P_11 p_11;
//	int p11GreatestProduct = p_11.greatestProduct();
//	printf("P_11 greatest product of a 20 x 20 grid is %d\n", p11GreatestProduct);
//
//
//	P_12 p_12;
//	int fiveHundredFactors = p_12.fiveHundredDivisors();
//	printf("The first triangle number with 500 factors is %d\n", fiveHundredFactors);

	P_13 p_13;
	p_13.getAbbreviatedSum();
	//printf("The first ten digits of the P_13 sum are %ld\n", p13Sum);
}
