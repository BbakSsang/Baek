//#include<iostream>
//#include <string>
//using namespace std;
//
//
//int main(void) {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    int v1, v2;
//    string num1, num2, result;
//    cin >> num1 >> num2;
//    int max = 0, temp = 0, min;
//
//    if (num1.length() > num2.length()) {
//        max = num1.length();
//        min = num2.length();
//        for (int i = 0; i < max - min; i++) {
//            num2 = "0" + num2;
//        }
//    }
//
//    else {
//        max = num2.length();
//        min = num1.length();
//        for (int i = 0; i < max - min; i++) {
//            num1 = "0" + num1;
//        }
//    }//앞에 0을 추가해주는구나 그만큼 사이즈 값이 같게..
//
//    for (int i = max - 1; i >= 0; i--) { //거꾸로 맥스 스트링 사이즈가 끝까지 내린다
//
//        v2 = num2[i] - 48; //48=='0'
//        v1 = num1[i] - 48; //48=='0'
//
//        if (v1 + v2 + temp >= 10) { //로직 같아 10보다 클때 다 더한값이 기초 템프는 0
//
//            result.append(to_string(v1 + v2 + temp - 10));//append to_string? ??
//            temp = 1; //왜 1이지
//        }
//        else {
//            result.append(to_string(v1 + v2 + temp)); //
//
//            temp = 0;
//        }
//    }
//    if (temp == 1) {
//        result.append("1");
//    }
//
//
//    for (int i = result.length() - 1; i >= 0; i--) {
//        cout << result[i];
//    }
//    system("PAUSE");
//
//
//    return 0;
//}