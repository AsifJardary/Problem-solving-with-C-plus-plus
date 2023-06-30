#include <iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{

    string str = "192.168.0.100";
    int i = 0;
    int len= str.length();
    vector<int>arr;
    arr.resize(len);
  
    cout << len << endl;
    while (str[i] == '\0')
    {
        arr[i] = str[i] - '48';
    }
    for (i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }


}
