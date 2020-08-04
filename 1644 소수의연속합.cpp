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
            return true;// 여기를 주석 처리하면 와일안에서 계속 돌다가 다음 a[i]참조를 못하는데 재귀 탈출 return 이 무적은 아닌갑다 무적권탈출 return은 없낭..?
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
    int num; //입력받을숫자
    vector <int> a; //0023050700011처럼 소수 처음 저장할 배열
    vector <int> arr;
    cin >> num;


    for (int i = 0; i <= num; i++) {
        a.push_back(i);
    }


    for (int i = 2; i <= num; i++) //이미 지운걸 패스하기위함
    {
        if (a[i] == 0)
            continue;

        else
        {

            for (int j = 2 * i; j <= num; j += i)//생각해보면 로직 간단 2의배수는 배열도 2씩증가 3의배수는 3씩증가 4의배수는 위에 0 일때 패스로 시간 아끼기 
            {
                a[j] = 0;

            }
        }

    }
  
    //a.erase(remove(a.begin(), a.end(), 0), a.end()); // 스페이스바 지우던 것처럼 벡터에서도 활용 가능 0 을지운다
    a.erase(a.begin());//하드코딩 0 지우고
    a.erase(a.begin());//하드코딩 1지우고
    for(int i=0;i<a.size();i++)
    {
    if (a[i] != 0)//0이아닌 수만 즉 상수에서 보자구웅~
    {//이제 상근수 찾자
        arr.push_back(a[i]); // 벡터나 알고리즘중에 
    }
    }


/* 요기까지가 아리스토텔리슨지 뭔지 체 하여간 소수 구하기 배열 완성*/
    int j = 0;
    int count = 0;
    int result = calc(j, arr, num, count);
   // cout << calc(j, a, num,count);
    cout << count;

}