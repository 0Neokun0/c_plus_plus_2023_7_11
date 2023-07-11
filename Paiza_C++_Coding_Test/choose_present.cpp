/*
クリスマスが今年もやってきます！子どもにプレゼントを選んであげましょう。あなたはプレゼントの候補を 3 つにしぼり、子どもの通知表の成績に応じてプレゼントを決めることにしました。

成績が 3 (最高) であれば候補の中で最も高価なものを、2 であれば 2 番目に高価なものを、1 であれば最も安価なものをあげます。


子どもの成績とプレゼント候補からあげるプレゼントを決定するプログラムを作成してください。


例)

成績: 3

プレゼント候補 (値段の安い順): 車のおもちゃ、プラモデル、ゲーム機

→ あげるプレゼント: ゲーム機


成績: 2

プレゼント候補 (値段の安い順): 手袋、マフラー、セーター

→ あげるプレゼント: マフラー
*/
#include <iostream>
using namespace std;

int main()
{
    int selection {};
    string present1;
    string present2;
    string present3;
    cin >> selection;
    cin >> present1 >> present2 >> present3;
    
    switch (selection) {
        case 1:
        cout << present1;
        break;

        case 2:
        cout << present2;
        break;

        case 3:
        cout << present3;
        break;
        default:
        cout << "None";
    }

    return 0;
}