// https://www.acmicpc.net/problem/10869

#include<iostream>
//#define _FILE_INPUT_

#ifdef _FILE_INPUT_
    #include<fstream>
    #include<string>
#endif

using namespace std;

int main(void)
{
    // Input, Output Variable
    int iNnumberFirst = 0;
    int iNumberSecond = 0;
    int iResult = 0;
// Input 
#ifdef _FILE_INPUT_
    // File Open
    ifstream fin ("Calculator.in");
    ofstream fout("Calculator.out");
   
    if(!fin.is_open())
    {
        cout << " File open Error" << endl;
        exit(0);
    }
    // File input
    fin >> a >> b;

#else
    // Key Input
    //scanf("%d", &iNnumberFirst);
    //scanf("%d", &iNumberSecond);

    cin >> iNnumberFirst;
    cin >> iNumberSecond;

#endif

// Alogrithm Body
 

 
// Output
#ifdef _FILE_INPUT_
    // File Output
    fout << result;
#else
    // Screen Ouptput
    //printf("%d\n", result);

    cout << iNnumberFirst + iNumberSecond << endl;
    cout << iNnumberFirst - iNumberSecond << endl;
    cout << iNnumberFirst * iNumberSecond << endl;
    cout << iNnumberFirst / iNumberSecond << endl;
    cout << iNnumberFirst % iNumberSecond << endl;


#endif
 
}