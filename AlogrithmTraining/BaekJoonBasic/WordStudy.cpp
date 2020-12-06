#include <iostream>
#include <string>

using namespace std;

int main()
{
    string InputWord;
    char cInputWord[1001];
    int AlphabtTabel[26] = {0, };

    //cin >> InputWord;
    scanf("%s", cInputWord);

    for(int i=0; cInputWord[i] != '\0'; i++)
        if(cInputWord[i] >= 'a')
            cInputWord[i] = cInputWord[i] - 32;


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
 

    cout << cInputWord << endl;


}