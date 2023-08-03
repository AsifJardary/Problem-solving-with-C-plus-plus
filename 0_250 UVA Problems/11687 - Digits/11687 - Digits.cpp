#include <bits/stdc++.h>
using namespace std;

int getMinimum(int i, string number){

    stringstream ss;
    int digits = number.size();

    ss<< digits;

    if(ss.str() == number)
        return i;

    return getMinimum(++i, ss.str());
}

int main(){

    string input;
    int answer;

    while(cin>>input){
        if(input == "END")
            break;

        answer = getMinimum(1, input);
        printf("%d\n", answer);
    }

    return 0;
}
