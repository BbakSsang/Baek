#include <iostream>
#include <vector>

using namespace std;
int temp = 0;

bool test = false;

bool calc(int j, vector <int> arr, int num,int &count)
{
    int b = j;

    if (j == arr.size())
    {
        test = true;
        return true;
    }

    while (temp < num)
    {
        if (j == arr.size())
        {
            test = true;
            return true;// ���⸦ �ּ� ó���ϸ� ���Ͼȿ��� ��� ���ٰ� ���� a[i]������ ���ϴµ� ��� Ż�� return �� ������ �ƴѰ��� ������Ż�� return�� ����..?
        }
        if (test == true)
            break;

        temp += arr[j];
        if (temp == num)
        {
            count++;
            temp = 0;
            calc(++b, arr, num, count);
        }
       j++;
    }

    if (test == true)
        return true;

    temp = 0;
    calc(++b, arr, num, count);
}

int main()
{
    int num; //�Է¹�������
    vector <int> a; //0023050700011ó�� �Ҽ� ó�� ������ �迭
    vector <int> arr;
    cin >> num;


    for (int i = 0; i <= num; i++) {
        a.push_back(i);
    }


    for (int i = 2; i <= num; i++) //�̹� ����� �н��ϱ�����
    {
        if (a[i] == 0)
            continue;

        else
        {

            for (int j = 2 * i; j <= num; j += i)//�����غ��� ���� ���� 2�ǹ���� �迭�� 2������ 3�ǹ���� 3������ 4�ǹ���� ���� 0 �϶� �н��� �ð� �Ƴ��� 
            {
                a[j] = 0;

            }
        }

    }
  
    //a.erase(remove(a.begin(), a.end(), 0), a.end()); // �����̽��� ����� ��ó�� ���Ϳ����� Ȱ�� ���� 0 �������
    a.erase(a.begin());//�ϵ��ڵ� 0 �����
    a.erase(a.begin());//�ϵ��ڵ� 1�����
    for(int i=0;i<a.size();i++)
    {
    if (a[i] != 0)//0�̾ƴ� ���� �� ������� ���ڱ���~
    {//���� ��ټ� ã��
        arr.push_back(a[i]); // ���ͳ� �˰����߿� 
    }
    }


/* �������� �Ƹ������ڸ����� ���� ü �Ͽ��� �Ҽ� ���ϱ� �迭 �ϼ�*/
    int j = 0;
    int count = 0;
    int result = calc(j, arr, num, count);
   // cout << calc(j, a, num,count);
    cout << count;

}