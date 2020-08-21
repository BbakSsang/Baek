//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;
//	vector <string> arr;
//	string temp;
//	int tmp = 1;//최소한 하나는 있을테니까
//	int max = -1;
//	int index = 0;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> temp;
//		arr.push_back(temp);
//	}
//
//	//brr.resize(arr.size());//같은크기로 할당
//
//	sort(arr.begin(), arr.end());
//	if (arr.size() == 1)
//	{
//		cout << arr[0];
//		return 0;
//	}
//
//	for (int i = 1; i < arr.size(); i++)
//	{
//
//		if (arr[i - 1] == arr[i])
//		{
//			tmp++;
//		}
//		else
//		{
//			if (tmp > max)
//			{
//				max = tmp;
//				index = i - 1;
//				tmp = 1;
//			}
//			tmp = 1;
//		}
//		if (i == arr.size() - 1 && tmp > max)
//				index = i;
//	}
//
//
//	cout << arr[index];
//
//}