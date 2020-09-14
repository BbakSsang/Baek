#include <iostream>
using namespace std;

bool issix = false;

int main()
{
	int n;
	cin >> n;
	
	int six = 666;
	int temp = 0;
	int count = 0;
	while (n!=count)
	{
		issix = false;

		temp = six; //임시로 쓸 temp 생성 후 템프로만 계산
		while (temp != 0)//10씩 나눌건데 그게 뒤부터 지운다
		{
			if (temp % 1000 == 666)//뒤부터 지워서 666이 나오는가에 대한 고찰 
			{
				issix = true;
				break;
			}
			temp /= 10;//이게 뒤에서 지우는 방법
		}
		if (issix)
		{
			count++;//찾았을때
		}
		six++;//하나씩 도저히 천씩 더하는건 무리 나누기도 귀찮고

	}
	cout << six-1;//어쩔수 없음 666찾아도 1이 더해 나오니까

}