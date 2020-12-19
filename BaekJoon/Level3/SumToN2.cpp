//https://gooddaytocode.blogspot.com/2016/04/freopen.html


#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int iNumberInput = 0;

    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout);

    for(int i=0;i<10;i++)
    {
        cin >> iNumberInput;
        cout << iNumberInput;
        //scanf("%d", &iNumberInput);
        //printf("%d", iNumberInput);
    }
    return 0;
    
}

