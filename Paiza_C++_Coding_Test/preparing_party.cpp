/*
あなたはクリスマスパーティーに向けて用意を進めています。
必要なモノの値段のリストを作ったので合計でいくらか計算することにしました。

必要なモノの個数 n 個とそれぞれの必要なモノの値段 p_i が入力されるので合計でいくらになるかを出力してください。

入力例 1 の場合
3
120
1000
400
と入力されるので
1520
と出力してください。
*/
#include <iostream>
using namespace std;

int main()
{
    int n{};
    cin >> n; // Read the number of items

    int total = 0;
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price; // Read the price of each item
        total += price; // Add the price to the total
    }

    cout << total; // Output the total

    return 0;
}
