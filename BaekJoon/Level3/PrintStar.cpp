
#include<iostream>
//#define _FILE_INPUT_

#ifdef _FILE_INPUT_
    #include<fstream>
    #include<string>
#endif

using namespace std;

int main(void)
{
    int iStarCount = 0;
  
// Input 
#ifdef _FILE_INPUT_
    // File Open
    ifstream fin ("PrintStar.in");
    ofstream fout("PrintStar.out");
   
    if(!fin.is_open())
    {
        cout << " File open Error" << endl;
        exit(0);
    }
    // File input
    fin >> a >> b;

#else
    // Key Input
    scanf("%d", &iStarCount);

    // Check Input Number
    if(iStarCount>100 || iStarCount<0)
        exit(0);

#endif

// Alogrithm Body


// Output
#ifdef _FILE_INPUT_
    // File Output
    fout << result;
#else
    // Screen Ouptput
    for(int i=1 ; i<=iStarCount ;i++)
    {
        for(int j=0;j<i;j++)
            cout << '*';
        cout << endl;
    }
#endif
 
}