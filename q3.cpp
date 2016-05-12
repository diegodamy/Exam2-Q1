#include <iostream>
using namespace std;

int Fibonacci(int counter){

  int a = 0; //The sequence begins with 0 and 1
  int b = 1;
  int sum;
  int i=0;

  while (i<counter){//First loop:                 second loop:          Third loop:          and so on and so forth...
      sum = a + b; //Sum = 0+1 = 1                Sum = 1+0 = 1         Sum = 1+1
      b = a;      //b becomes 0                   b becomes 1           b becomes 1
      a = sum;    //a becomes 1                   a becomes 1           a becomes 2
      cout << sum << ", " ; //output: sum = 1     output: sum =1        output: sum =2
      i++;
  }
}

int main(){

  int counter;

    cout << "How many numbers of the Fiboncacci sequence do you want: ";
    cin >> counter;
    Fibonacci(counter);
}
