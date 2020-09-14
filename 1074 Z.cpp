#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int N, r, c;//r=y, c=x
int cnt = 0;

void board(int n, int y, int x)
{
	if (n == 2)
	{
		if (x == c && y == r)
		{
			cout << cnt;

		}
		cnt++;
		if (x + 1 == c && y == r)
		{
			cout << cnt;

		}
		cnt++;
		if (x == c && y + 1 == r)
		{
			cout << cnt;

		}
		cnt++;
		if (x + 1 == c && y + 1 == r)
		{
			cout << cnt;

		}
		cnt++;
		return;
	}
	board(n / 2, y, x);//일반
	board(n / 2, y, x + n / 2);//x+
	board(n / 2, y + n / 2, x);//y+
	board(n / 2, y + n / 2, x + n / 2);//x+y+
}

int main()
{

	cin >> N >> r >> c;

	board(pow(2, N), 0, 0);//칸수와 시작 좌표 확인 1234세트개 만큼 

}