#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  int T;
  while( scanf("%d", &T) != EOF ){
    for( int testcase = 1 ; testcase <= T ; ++testcase ){
      int N;
      scanf("%d", &N);

      int speed, speedMax = 0;
      for( int i = 0 ; i < N ; ++i ){
        scanf("%d", &speed);
        speedMax = max( speed, speedMax );
      }

      printf("Case %d: %d\n", testcase, speedMax);
    }

  }
  return 0;
}
