/*
あなたは気象庁のデータ分析の担当者で、8 月の台風の上陸の間隔についてのデータを作るよう求められました。

サンプルとなる5 個の台風について上陸した日が与えられるので、それぞれ (2 個目以降) について直前の上陸日との間隔日数を出力してください。

例)
与えられる入力

1
5
15
27
28

期待する出力

4
10
12
1

*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    int d_1{}, d_2{}, d_3{}, d_4{}, d_5{};
    cin >> d_1;
    cin >> d_2;
    cin >> d_3;
    cin >> d_4;
    cin >> d_5;
    
    cout << d_2-d_1 << endl;
    cout << d_3-d_2 << endl;
    cout << d_4-d_3 << endl;
    cout << d_5-d_4 << endl;


    return 0;
}