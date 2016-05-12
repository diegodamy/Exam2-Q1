#include <iostream>
using namespace std;

long GetPower (long base, long power){
  long result = 1;

  while (power!=0)
  {                        // 3 to the 4th power is = 3*3*3*3
    result = base*result; // What is happening: result = 3*1 --> result gets 3
    power--;             // What is happening: result = 3*3 --> result gets 9
  }                      // What is happening: result = 3*9 --> result gets 27
}                        // What is happening: result = 3*27 --> result gets 81
                          //And power deacreases because we have to do this process only 'power' times
int main(){
  long base, power;
  cout << "Please enter base:" << endl;
  cin >> base; // Let´s say base is 3
  cout << "Please enter power:" << endl;
  cin >> power; // Let´s say power is 4

cout << "The power of " << base << " to the " << power << " is " << GetPower(base,power);
}
