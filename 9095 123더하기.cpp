#include <iostream>
//#include <vector>
using namespace std;
int cnt = 0;
int temp = 0;
int sum;
void math(int temp, int i) //sum이 결과값이고 i가 sum이여야 했는데 ㅋㅋ;
{
	temp += i; 
	if (sum == temp)
	{
		cnt++;
		temp = 0;
		return;
	}
	else if (sum < temp)
	{
		temp = 0;
		return;
	}
	else
	{
		for (int j = 1; j < 4; j++)
			math(temp, j);
	}

}
int main()
{
	int n;
	cin >> n;
    //vector<int>arr;
	for (int i = 0; i < n; i++)

	{
		cin >> sum;
		math(temp, 0);
		cout << cnt << endl;
		//arr.push_back(cnt);
		cnt = 0;
	}

}