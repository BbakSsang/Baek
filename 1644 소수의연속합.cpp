//#include <iostream>
//#include <vector>
//
//using namespace std;
//int temp = 0;
//
//bool test = false;
//
////bool calc(int j, vector <int> a, int num,int &count)
////{
////    int b = j;
////
////    if (j == a.size())
////    {
////        test = true;
////        return true;
////    }
////
////    while (temp < num)
////    {
////        if (j == a.size())
////        {
////            test = true;
////            return true;// ���⸦ �ּ� ó���ϸ� ���Ͼȿ��� ��� ���ٰ� ���� a[i]������ ���ϴµ� ��� Ż�� return �� ������ �ƴѰ��� ������Ż�� return�� ����..?
////        }
////        if (test == true)
////            break;
////
////        temp += a[j];
////        if (temp == num)
////        {
////            count++;
////            temp = 0;
////            calc(++b, a, num, count);
////        }
////       j++;
////    }
////
////    if (test == true)
////        return true;
////
////    temp = 0;
////    calc(++b, a, num, count);
////}
//bool big = false;
//int main()
//{
//    int num; //�Է¹�������
//    vector <int> a; //0023050700011ó�� �Ҽ� ó�� ������ �迭
//    vector <int> arr;
//    cin >> num;
//
//
//    for (int i = 0; i <= num; i++) {
//        a.push_back(i);
//    }
//
//
//    for (int i = 2; i <= num; i++) //�̹� ����� �н��ϱ�����
//    {
//        if (a[i] == 0)
//            continue;
//
//        else
//        {
//
//            for (int j = 2 * i; j <= num; j += i)//�����غ��� ���� ���� 2�ǹ���� �迭�� 2������ 3�ǹ���� 3������ 4�ǹ���� ���� 0 �϶� �н��� �ð� �Ƴ��� 
//            {
//                a[j] = 0;
//
//            }
//        }
//
//    }
//  
//   // a.erase(remove(a.begin(), a.end(), 0), a.end()); // �����̽��� ����� ��ó�� ���Ϳ����� Ȱ�� ���� 0 �������
//    a.erase(a.begin());//�ϵ��ڵ� 0 �����
//    a.erase(a.begin());//�ϵ��ڵ� 1�����
//    for(int i=0;i<a.size();i++)
//    {
//    if (a[i] != 0)//0�̾ƴ� ���� �� ������� ���ڱ���~
//    {//���� ��ټ� ã��
//        arr.push_back(a[i]); // ���ͳ� �˰����߿� 
//    }
//    }
//    for (int i = 0; i < arr.size(); i++)
//    {
//        if (num == arr[i])
//            big = true;
//    }
//
///* �������� �Ƹ������ڸ����� ���� ü �Ͽ��� �Ҽ� ���ϱ� �迭 �ϼ�*/
//   // int j = 0;
//   // int count = 0;
//   // int result = calc(j, arr, num, count);
//   //// cout << calc(j, a, num,count);
//   // cout << count;
//
//
//    int k=0;
//    int k1=0;
//    int re=0;
//    int j = 0;
//
//while(k1<num ){
//
//    for (j=0; j < arr.size(); j++)
//    {
//       // j = k1;
//        if (k1 > 10) //������ �ߵ� Ż�⹮
//        {
//            if (arr[k1] + arr[(k1 + 1)] > num)
//            {
//                if (big == true)
//                {
//                    re++;
//                    test = true;
//                    break;
//                }
//                else
//                {
//                    test = true;
//                    break;
//                }
//            }
//        }
//
//
//        if ((k1 + j) >= arr.size())
//        {
//            test = true;
//            break;
//        }
//
//
//        k += arr[k1+j];
//        if (k == num)
//        {
//            k1++;
//            k = 0;
//            re++;
//            break;
//        }
//         else if (k > num)
//         {
//             k = 0;
//             k1++;
//             break;
//         }
//
//
//    }
//    if (test==true)
//    {
//        break;
//    }
//
//    //if ((k1 + j) > arr.size())
//    //{
//    //    break;
//    //}
//}
//cout << re;
//
//}