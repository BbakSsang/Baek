#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

vector <int> arr(100001, -1);
vector <int> sosu;
int k;
int temp;
int mini = 199999999;
vector <int> qwe;
void asd(int temp)//sosu에 저장된 소수값들로 곱해서 temp보다 크거나 같은 소수의곱을 mini에 저장하면서 제일 작은 수를 찾아 떠남
{
    for (int i = 0; i < (sosu.size()/2)-1; i++)//   서로 같은값을 곱하지 않기 위해  j=i+1 마지막 값생각해서 
    {
        for (int j = i + 1; j < sosu.size()/2; j++)
        {
            if (sosu[i] * sosu[j] < temp)//작으면 늘려야지 i=0/sosui=2 j=1 sosuj=3
            {
                continue;
            }
            else
                if (mini > sosu[i] * sosu[j])
                    mini = sosu[i] * sosu[j];
                else
                    continue;

        }
    }
    cout << mini << "\n";
  //  qwe.push_back(mini);//히도 답답해가지고 따로 qwe에 저장하고 출력 맞춰보려고 만든건데 의미x
    mini = 199999999;

}


int main()
{
    int num = 100000;

    for (int i = 2; i <= num; i++)//에리체
    {
        if (arr[i] == 0)
            continue;

        for (int j = i + i; j <= num; j += i)
        {
            arr[j] = 0;
        }
    }

    for (int i = 2; i <= num; i++)//sosu에 소수값만 저장 2.3.5.7.11....
    {
        if (arr[i] == -1)
        {
            sosu.push_back(i);//sosu에 2부터 소수 저장
        }
    }
    //cout << sosu.size();


    cin >> k;//몇개 입력받을지 k 저장

    for (int i = 0; i < k; i++)//k만큼 temp에 값 받고 그 값을 asd함수에 보냄
    {
        cin >> temp;
        asd(temp);
    }

   /* for (int i = 0; i < qwe.size(); i++)
        cout << qwe[i]<<"\n";*/
}