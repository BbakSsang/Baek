#include <iostream>
#include <vector>
#include <string>

using namespace std;
int temp = 0;

int sum = 0;
int r, c;//r=y,c=x
int  bigger = 0;

void again(vector<vector<int>>board, int x, int y, int sum)
{

	if (x == c)
	{
		return;
	}
	if (y == r)
	{
		return;
	}
	sum = board[y][x] + sum;

	if (x == c)
		return;
	if (y == r)
		return;
	again(board, x + 1, y, sum);
	again(board, x, y + 1, sum);

	if (sum > bigger)
		bigger = sum;

}



int main()
{

	cin >> r >> c;
	vector<int> trow;
	vector<vector<int>>board;


	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> temp;
			trow.push_back(temp);
		}
		board.push_back(trow);
		trow.clear();
	}

	again(board, 0, 0, sum);
	cout << bigger;
}

