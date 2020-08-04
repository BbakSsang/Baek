//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool sosu(int temp)//소수인지 확인 중간에 탈출이 있어서 왠만해서는 음.. 아 모르겠다
//{
//	for (int i = 2; i < temp; i++)
//	{
//		if (temp % i == 0)
//			return false;
//		if (i == temp)
//			return true;
//	}
//}
//vector <int> brr;// 소수상근수일때 저장할 벡터형 배열
//
//void insert(vector <int>& arr, vector <int>& n, int& temp)
//{
//	for (int i = 0; i < n.size(); i++)
//	{
//		/*	temp = n[i] - '0';*/ //템프로 따로 쓰려다가 템프는 나중에 사용할거 같음
//		arr.push_back(n[i]);//요로코롬 하나씩 따로 int 배열에 저장 완료 ★ '0'은 아스키로 48을 빼주는거였나 할튼 ㅇㅇ
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
//	vector <int> arr;//따로따로 나눠 저장할 벡터 (사실 그냥 사용해보고 싶었음)
//
//	vector <int> crr;// 소수상근수일때 저장할 벡터형 배열
//
//	vector <int> n;
//	//string n;//getchar(n) push_back n; 할까 하다가 스트링이 편해서
//	//getline(cin, n); // 일단 스트링에 \n전까지 받아둠
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
//	///*	temp = n[i] - '0';*/ //템프로 따로 쓰려다가 템프는 나중에 사용할거 같음
//	//	arr.push_back(n[i]-'0');//요로코롬 하나씩 따로 int 배열에 저장 완료 ★ '0'은 아스키로 48을 빼주는거였나 할튼 ㅇㅇ
//	//	temp += (arr[i]) * (arr[i]);
//	//}
//	insert(arr, n, temp);
//
//
//	/*---일단 여기까지 벡터형 arr에 따로따로 저장 완료 ---*/
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