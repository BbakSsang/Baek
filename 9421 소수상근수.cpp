//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool fail = false;
//bool gman = false;
//void insert(int n , int &temp)
//{
//	while (n != 0) {
//		temp += (n % 10) * (n % 10);
//		n /= 10;
//	}
//}
//
//
//int main(void) {
//	int temp=0;
//    int num;
//	int n = 0;
//    vector <int> a; //0023050700011처럼 소수 처음 저장할 배열
//    vector <int> arr;//235711 0을뺀 소수만 저장할 배열
//	vector <int> crr;//상근수 계산할때 temp를 따로 저장하여 탈출을 만들 배열
//
//    cin >> num;
//    a.push_back(0);
//    a.push_back(0);
//    for (int i = 2; i <= num; i++) {
//        a.push_back(i);
//    }
//
//  
//    for (int i = 2; i <= num; i++) {
//        if (a[i] == 0) 
//            continue;
//        else
//        {
//           
//            for (int j = 2 * i; j <= num; j += i) {
//                a[j] = 0;
//              
//            }
//        }
//      
//    }
//    /*   */
//    for (int i = 0; i < num; i++)
//    {
//        if (a[i] != 0)//0이아닌 수만 즉 상수에서 보자구웅~
//        {//이제 상근수 찾자
//            arr.push_back(a[i]); // 벡터나 알고리즘중에 
//        }
//      
//    }
//
//	for (int z = 0; z < arr.size(); z++)
//	{
//		gman = false;
//		temp = 0;
//		num = arr[z];
//		insert(num,temp);
//		
//		while (1)
//		{
//			if (temp == 1)
//			{
//				fail = true;
//				break;
//			}
//
//			for (int j = 0; j < crr.size(); j++)
//			{
//				if (temp == crr[j])
//				{		
//					//crr.clear();
//					fail = false;
//					gman = true;
//					break;
//				}
//				else
//					fail = true;
//			}
//			if (gman == true)
//				break;
//
//
//
//			//if (temp = !49 || temp != 97 || temp != 130 || temp != 10 || temp != 1)
//			//{
//				crr.push_back(temp);
//			//}  //아이디어 있는사람? 700일때 되는거 몇개만 에외로 넣어서 넣기
//
//			n = temp;
//			temp = 0;
//			insert(n, temp);
//		}
//
//		if (fail == true)
//		{
//			crr.clear(); //여기를 주석처리하고 초기화 없이 빅데이터마냥 틀렸을때 차곡차곡 쌓아서 위검증 시간 줄이기
//			cout << arr[z] << endl;
//		}
//
//
//
//	}
//
//	
//}