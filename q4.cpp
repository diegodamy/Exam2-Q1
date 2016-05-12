#include <iostream>
#include <string>

using namespace std;

int FindPali(string word){
  int i, j;
  int size = word.size();

 /*This cycle should compare all indices to their opposites to chech for symmetry and decide wheter it is a palindrome or not, however it is not doing anything it seems.*/
  for (i=0; i<size; i++){
  } cout << word[i];
      for (j=size; j>0; j--){
      }   cout << word[j];
  if (word[i] == word[j]){
    return 1;
  }



}

int main(){
  string word;
  cout << "Please enter the word:" << endl;
  getline (cin, word);

if (FindPali(word)==1){
  cout << "Palindrome!" << endl;
} else {
  cout << "Not a palindrome."<< endl;
}
}
