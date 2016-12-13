/*
 * P2.h
 *
 *  Created on: Dec 2, 2016
 *      Author: brian wray
 */

#ifndef P_02_H_
#define P_02_H_

class P2{
 public:
  P2(int n);
  P2();
  ~P2();
  void printFibonacci();

 private:
  int fibonacci(int n);
  int num;

};

#endif /* P_02_H_ */
