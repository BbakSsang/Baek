#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int x, y; // NM�� �������� xy�� ����
	int temp;
	cin >> y >> x;
	vector <vector<int>> board(y, vector<int>(x));//[y][x]

	for(int i=0;i<y;i++)
		for (int j=0; j < x; j++)
		{
			cin >> temp;
			board[i][j]=temp;
		}
	//������ �Է� ����

	int px[] = { -1,0,1,0 };
	int py[] = { 0,-1,0,-1 }; //�� �� �� ��


}