//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;//����Ǽ�
//	long tmp; //�� �������� ������������������������������������������������������������������������������������������������������
//	vector <int> arr;
//	//vector <int> brr;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> tmp;
//		arr.push_back(tmp);
//	}
//	sort(arr.begin(), arr.end(), greater<int>());
//
//	//for (int i = 1 ; i < 100001; i++)
//	//{
//	//	if (find(arr.begin(), arr.end(), i)>1)
//	//		brr.push_back(i);
//
//	//	else
//	//		continue;
//	//}
//
//
//	tmp = 0;
//	//�ַ��� �� -(���-1) ->����� 1���� ���������� �迭 for=0���� �� i�� ġ���ص� ��������
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (arr[i] - i <= 0)
//			break;
//		tmp += (arr[i] - (i));
//	}
//
//	cout << tmp;
//
//}