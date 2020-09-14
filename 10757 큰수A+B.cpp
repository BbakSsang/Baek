#include <iostream>
#include <vector>
#include <string>

#define bigger(A,B) (((A)>=(B))?(A):(B))
#define smaller(A,B) (((A)<=(B))?(A):(B))

using namespace std;


string a; string b;



void putter(string& a, vector <int>& A)
{
    for (int i = 0; i < a.length(); i++)
    {
        A.push_back(a[i] - '0');
        A.erase(A.begin(), A.begin() + 1);//������� 30 ���� ��ų ���� �ϳ��� �ְ� �տ��� �ϳ��� �����
    }
}


void pluss(vector <int>& A, vector <int>& B, vector <int>& C) //A�� �۰� B�� Ŭ���� �Է��Ҷ� ����
{
    int index = 0;
    //a�� ������
    int small = smaller(a.size(), b.size());
    int big = bigger(a.size(), b.size());

    while (index < small)
    {
        int MAX_NUM = bigger(a.size(), b.size());
        if (A[MAX_NUM - index] + B[MAX_NUM - index] + C[MAX_NUM - index] < 10)
        {
            C[MAX_NUM - index] = C[MAX_NUM - index] + (A[MAX_NUM - index] + B[MAX_NUM - index]);
        }
        else
        {
            C[MAX_NUM - index] = C[MAX_NUM - index] + (A[MAX_NUM - index] + B[MAX_NUM - index]) - 10;
            C[MAX_NUM - index - 1]++;
        }
        index++;
    }
    while (index < big)//b�� Ŭ��
    {
        if (C[MAX_NUM - index] + B[MAX_NUM - index] < 10)
        {
            C[MAX_NUM - index] = C[MAX_NUM - index] + B[MAX_NUM - index];
        }
        else
        {
            C[MAX_NUM - index] = C[MAX_NUM - index] + B[MAX_NUM - index] - 10;
            C[MAX_NUM - index - 1]++;
        }
        index++;
    }
}

int main()
{
    cin >> a >> b;


    vector <int> A(a.size() + 1, -1);//-1�� �ʱ�ȭ �ƹ��� Ŀ�� 30���� �ȳѰ�������.. //a
    vector <int> B(b.size()+1, -1);
    vector <int> C(bigger(a.size(),b.size())+ 1, 0);


    putter(a, A);   putter(b, B); //��Ʈ���� ���;ȿ� �ִ� �Լ� �� �ڷ� �з����� ex) ~~A[30]

    //cout << A[30];//�����ڷ� �ٲٴ� �� �Ǵ���

    //cout<<bigger(a.size(), b.size()); //define bigger test


    if (b.size() >= a.size())
    {
        pluss(A, B, C);
    }
    else
        pluss(B, A, C);

    while (C[0] == 0)
    {
        C.erase(C.begin(), C.begin() + 1);
    }
    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i];
    }
}