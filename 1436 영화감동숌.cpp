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

		temp = six; //�ӽ÷� �� temp ���� �� �����θ� ���
		while (temp != 0)//10�� �����ǵ� �װ� �ں��� �����
		{
			if (temp % 1000 == 666)//�ں��� ������ 666�� �����°��� ���� ���� 
			{
				issix = true;
				break;
			}
			temp /= 10;//�̰� �ڿ��� ����� ���
		}
		if (issix)
		{
			count++;//ã������
		}
		six++;//�ϳ��� ������ õ�� ���ϴ°� ���� �����⵵ ������

	}
	cout << six-1;//��¿�� ���� 666ã�Ƶ� 1�� ���� �����ϱ�

}