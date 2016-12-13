/*
 * P3.h
 *
 *  Created on: Dec 5, 2016
 *      Author: brianwray
 */

#ifndef P_03_H_
#define P_03_H_

class P3{

public:
	// The big 4
	P3();
	~P3(){};
	//P3(const P3 &) = default;
	//P3& operator = (const P3 &P3) = default;

	bool isPrime( long n );
	int largestPrimeFactor( long n );
	void testIsPrime();
	void testLargestPrimeFactor();

private:
	int testNum;




};



#endif /* P_03_H_ */
