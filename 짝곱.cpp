#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector <int> arr(100001, -1);
vector <int> sosu;
int k;
int temp;
int mini = 199999999;
vector <int> qwe;
void asd(int temp)//sosu�� ����� �Ҽ������ ���ؼ� temp���� ũ�ų� ���� �Ҽ��ǰ��� mini�� �����ϸ鼭 ���� ���� ���� ã�� ����
{
    for (int i = 0; i < (sosu.size()/2)-1; i++)//   ���� �������� ������ �ʱ� ����  j=i+1 ������ �������ؼ� 
    {
        for (int j = i + 1; j < sosu.size()/2; j++)
        {
            if (sosu[i] * sosu[j] < temp)//������ �÷����� i=0/sosui=2 j=1 sosuj=3
            {
                continue;
            }
            else
                if (mini > sosu[i] * sosu[j])
                    mini = sosu[i] * sosu[j];
                else
                    continue;

        }
    }
    cout << mini << "\n";
  //  qwe.push_back(mini);//���� ����ذ����� ���� qwe�� �����ϰ� ��� ���纸���� ����ǵ� �ǹ�x
    mini = 199999999;

}


int main()
{
    int num = 100000;

    for (int i = 2; i <= num; i++)//����ü
    {
        if (arr[i] == 0)
            continue;

        for (int j = i + i; j <= num; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = 2; i <= num; i++)//sosu�� �Ҽ����� ���� 2.3.5.7.11....
    {
        if (arr[i] == -1)
        {
            sosu.push_back(i);//sosu�� 2���� �Ҽ� ����
        }
    }
    //cout << sosu.size();


    cin >> k;//� �Է¹����� k ����

    for (int i = 0; i < k; i++)//k��ŭ temp�� �� �ް� �� ���� asd�Լ��� ����
    {
        cin >> temp;
        asd(temp);
    }

   /* for (int i = 0; i < qwe.size(); i++)
        cout << qwe[i]<<"\n";*/
}