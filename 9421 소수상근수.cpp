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
//    vector <int> a; //0023050700011ó�� �Ҽ� ó�� ������ �迭
//    vector <int> arr;//235711 0���� �Ҽ��� ������ �迭
//	vector <int> crr;//��ټ� ����Ҷ� temp�� ���� �����Ͽ� Ż���� ���� �迭
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
//        if (a[i] != 0)//0�̾ƴ� ���� �� ������� ���ڱ���~
//        {//���� ��ټ� ã��
//            arr.push_back(a[i]); // ���ͳ� �˰����߿� 
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
//			//}  //���̵�� �ִ»��? 700�϶� �Ǵ°� ��� ���ܷ� �־ �ֱ�
//
//			n = temp;
//			temp = 0;
//			insert(n, temp);
//		}
//
//		if (fail == true)
//		{
//			crr.clear(); //���⸦ �ּ�ó���ϰ� �ʱ�ȭ ���� �����͸��� Ʋ������ �������� �׾Ƽ� ������ �ð� ���̱�
//			cout << arr[z] << endl;
//		}
//
//
//
//	}
//
//	
//}