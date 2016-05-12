#include <iostream>
#include <string>
using namespace std;

int PrintSize(int rows2){
int row;

  for (row = 0; row <= rows2; row++)     //Nested fors: first for loops through the ascending part of the triangle until it reaches the row parameter given by the user
  {                                      // The second for gets into every row and prints out a T according to the row number it is in ==> so we have the ascending part of the triangle
   for (int i = 0; i < row; i++)
    cout << "T";
    cout << endl;
  }

  for (row = rows2; row >0; row--)  //Third and fourth fors: reverse logic of the first to rows. Here we begin from the top and work our way down to the first row
  {
  for (int j = row; j>0; j--)
    cout << "T";
    cout << endl;
  }

 }

int main(){

int rows;
cout << "Please enter triangle paramater (rows):" << endl;
cin >> rows; //Can be thought of as half of all rows or total rows for the increasing and decreasing parts individually

PrintSize(rows);

}
