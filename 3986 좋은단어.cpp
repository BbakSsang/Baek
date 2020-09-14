//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//int cnt = 0;
//stack <char> god;
//
//void good(string a)
//{
//
//
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (god.empty())
//			god.push(a[i]);
//
//		else if (god.top() == a[i])
//			god.pop();
//
//		else
//			god.push(a[i]);
//
//
//	}
//	if (god.empty())
//		cnt++;
//}
//
//
//int main()
//{
//	int N;
//	cin >> N;
//	string a;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a;
//		good(a);
//		a.clear();
//		while (!god.empty()) god.pop();
//	}
//	cout << cnt;
//}