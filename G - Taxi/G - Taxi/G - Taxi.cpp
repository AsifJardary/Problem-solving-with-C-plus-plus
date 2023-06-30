#include <iostream>
using namespace std;
#include<vector>

int main()
{
	int N, one = 0, two = 0, three = 0, four = 0, one_itself = 0 , group_3and1 = 0, group_2and1 = 0, two_itself = 0;
	cin >> N;
	vector<int>arr;
	arr.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] == 1)
		{
			one = one + 1;
		}
		else if (arr[i] == 2)
		{
			two = two + 1;
		}
		else if (arr[i] == 3)
		{
			three = three + 1;
		}
		else if (arr[i] == 4)
		{
			four = four + 1;
		}
	}
	if (three > one && one > 0)
	{
		group_3and1 = three - one;
		three = three - one;
		one = one - one;

	}
	else if (one > three && three > 0)
	{
		group_3and1 = one - three;
		three = three - three;
		one = one - three;
	}
	else if (three == one)
	{
		group_3and1 = three;
		three = 0;
		one = 0;
	}

	if(two > one && one > 1)
	{
			group_2and1 = (one / 2);
			two = two - group_2and1;
			one = one - (group_2and1 * 2);
	}
	else if (one > two && two > 0)
	{
		group_2and1 = (one / 2);
		two = two - group_2and1;
		one = one - (group_2and1 * 2);
	}

	if (two > 0 && one == 1)
	{
		group_2and1 = group_2and1 + 1;
		one = 0;
		two = two - 1;
	}
	if (two > 0)
	{
		if (two % 2 == 0)
		{
			two_itself = two / 2;
			two = 0;
		}
		else if (two % 2 != 0)
		{
			two_itself = (two / 2) + 1;
			two = 0;
		}
	}

	if (one > 3)
	{
		if (one % 4 == 0)
		{
			one_itself = one / 4;
		}
		else if (one % 4 != 0)
		{
			one_itself = (one / 4) + 1;
		}
	}
	else if (one < 4 && one>0)
	{
		one_itself++;
	}

	int res = four+ two + group_3and1 + group_2and1 + one_itself + two_itself + three;
	cout<< res;

}