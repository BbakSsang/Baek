//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool sosu(int temp)//�Ҽ����� Ȯ�� �߰��� Ż���� �־ �ظ��ؼ��� ��.. �� �𸣰ڴ�
//{
//	for (int i = 2; i < temp; i++)
//	{
//		if (temp % i == 0)
//			return false;
//		if (i == temp)
//			return true;
//	}
//}
//vector <int> brr;// �Ҽ���ټ��϶� ������ ������ �迭
//
//void insert(vector <int>& arr, vector <int>& n, int& temp)
//{
//	for (int i = 0; i < n.size(); i++)
//	{
//		/*	temp = n[i] - '0';*/ //������ ���� �����ٰ� ������ ���߿� ����Ұ� ����
//		arr.push_back(n[i]);//����ڷ� �ϳ��� ���� int �迭�� ���� �Ϸ� �� '0'�� �ƽ�Ű�� 48�� ���ִ°ſ��� ��ư ����
//		temp += (arr[0] * arr[0]);
//		arr.pop_back();
//	}
//	if (sosu(temp))
//	{
//		brr.push_back(temp);
//	}
//}
//
//bool fail = false;
//int main()
//{
//	vector <int> arr;//���ε��� ���� ������ ���� (��� �׳� ����غ��� �;���)
//
//	vector <int> crr;// �Ҽ���ټ��϶� ������ ������ �迭
//
//	vector <int> n;
//	//string n;//getchar(n) push_back n; �ұ� �ϴٰ� ��Ʈ���� ���ؼ�
//	//getline(cin, n); // �ϴ� ��Ʈ���� \n������ �޾Ƶ�
//	char k = 0;
//
//	while (1)
//	{
//		cin.get(k);
//		if (k == '\n')
//			break;
//		else
//			n.push_back(k - '0');
//	}
//	int temp = 0;
//
//	//for (int i = 0; i < n.length(); i++)
//	//{
//	///*	temp = n[i] - '0';*/ //������ ���� �����ٰ� ������ ���߿� ����Ұ� ����
//	//	arr.push_back(n[i]-'0');//����ڷ� �ϳ��� ���� int �迭�� ���� �Ϸ� �� '0'�� �ƽ�Ű�� 48�� ���ִ°ſ��� ��ư ����
//	//	temp += (arr[i]) * (arr[i]);
//	//}
//	insert(arr, n, temp);
//
//
//	/*---�ϴ� ������� ������ arr�� ���ε��� ���� �Ϸ� ---*/
//	//cout << temp;
//
//
//	while (1)
//	{
//		if (temp == 1)
//		{
//			fail = true;
//			break;
//		}
//
//		for (int j = 0; j < crr.size(); j++)
//		{
//			if (temp == crr[j])
//				return false;
//			else
//				fail = true;
//		}
//
//		crr.push_back(temp);
//		if (temp > 99) //100~999
//		{
//			n.clear();
//			n.push_back(temp / 100);
//			temp -= (temp / 100) * 100;
//			n.push_back(temp / 10);
//			n.push_back(temp % 10);
//			temp = 0;
//			insert(arr, n, temp);
//		}
//		else if (temp > 9) //10~99
//		{
//			n.clear();
//			n.push_back(temp / 10);
//			n.push_back(temp % 10);
//			temp = 0;
//			insert(arr, n, temp);
//
//		}
//		else //1~9
//		{
//			n.clear();
//			n.push_back(temp % 10);
//			temp = 0;
//			insert(arr, n, temp);
//		}
//	}
//	if (fail == true)
//	{
//		for (int i = 0; i < brr.size(); i++)
//			cout << brr[i] << endl;
//	}
//
//}