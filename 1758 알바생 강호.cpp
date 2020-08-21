//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N;
//	cin >> N;//사람의수
//	long tmp; //아 개같은거 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
//	vector <int> arr;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> tmp;
//		arr.push_back(tmp);
//	}
//	sort(arr.begin(), arr.end(), greater<int>());
//
//	tmp = 0;
//	//주려던 돈 -(등수-1) ->등수는 1부터 시작이지만 배열 for=0부터 즉 i로 치부해도 괜찮을듯
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