/*
    あなたは 0 % 〜 100 % 降水確率の数値を得て、その数値から天気を文字列で表示をしようと考えました。
表示のルールは以下のよう定めました。

・降水確率が 0 % 以上 30 % 以下ならば "sunny"
・降水確率が 31 % 以上 70 % 以下ならば "cloudy"
・降水確率が 71 % 以上ならば "rainy"

降水確率 n (%) が与えられるので上のルールに従って文字列を出力して下さい。
*/
#include <iostream>
using namespace std;

int main()
{
    int n {};
    cin >> n;

    if ( n >= 0 && n <=30)
    {
        cout << "sunny";
    }
    else if ( n >= 31 && n <=70)
    {
        cout << "cloudy";
    }
    else
        cout << "rainy";
    


    return 0;
}