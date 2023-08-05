#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main(){
  int T;
  cin>> T;
  for( int caseCount = 0 ; caseCount < T ; ++caseCount ){
    string input;
    cin >> input;

    int score = 0, add = 1;
    for( int i = 0 ; i < input.length() ; ++i ){
      if( input[i] == 'O' ){
        score += add;
        ++add;
      }
      else {
        add = 1;
      }
    }

    cout<< score;
  }
  return 0;
}
