#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sInputWord;
    char caInputWord[1001];
//    int AlphabtTabel[26] = {0, };

    //cin >> InputWord;
    scanf("%s", caInputWord);

    for(int i=0; caInputWord[i] != '\0'; i++)
        if(caInputWord[i] >= 'a')
            caInputWord[i] = caInputWord[i] - 32;

    /*
    //char IndexChar;
    for(char IndexChar : InputWord)
    {
        cout << IndexChar << endl;
       
        if('a' <= c)
        {
            c = c - 32;
            cout << c << endl;
        }
    }
    */     

    cout << caInputWord << endl;
}