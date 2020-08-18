#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int x, y; // NM을 보기좋게 xy로 받음
	int temp;
	cin >> y >> x;
	vector <vector<int>> board(y, vector<int>(x));//[y][x]

	for(int i=0;i<y;i++)
		for (int j=0; j < x; j++)
		{
			cin >> temp;
			board[i][j]=temp;
		}
	//여까지 입력 받음

	int px[] = { -1,0,1,0 };
	int py[] = { 0,-1,0,-1 }; //위 왼 아 오


}