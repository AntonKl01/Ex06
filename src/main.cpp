#include"Prime.h"

int main() {

  Prime num1, num2;
  num1.setValue(2);
  num2 = num1.nextPrime();          // � num2 ��������������� 3
  bool result = num1.testPrime(17); // true
  num2.setValue(17);              // � num2 ������������� 17
  int count = num2.countBetween(num1); // count=5
  bool ans = num2.isValid();        // true
  int prime1 = num1.getValue();
  int prime2 = num2.getValue();
  return 0;
}