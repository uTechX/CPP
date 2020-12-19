//http://blog.naver.com/PostView.nhn?blogId=kooda21&logNo=222057202301&categoryNo=0&parentCategoryNo=0&viewDate=&currentPage=1&postListTopCurrentPage=1&from=postView

#include<iostream>
//#define _FILE_INPUT_

#ifdef _FILE_INPUT_
    #include<fstream>
    #include<string>
#endif

using namespace std;

int main(void)
{
// Input 
#ifdef _FILE_INPUT_
    // File Open
    ifstream fin ("Quadrant.in");
    ofstream fout("Quadrant.out");
   
    if(!fin.is_open())
    {
        cout << " File open Error" << endl;
        exit(0);
    }
    // File input
    fin >> a >> b;

#else
    // Key Input
    scanf("%d", &a);
    scanf("%d", &b);
#endif

// Alogrithm Body
    int a = 0;
    int b = 0;
    int result = 0;

    if (a != 0 && b != 0)
    {
        if (a > 0)
            result = (b > 0 ? 1 : 4);         
        else if (a < 0)      
            result = (b > 0 ? 2 : 3);
    }
    else
    {
        result =  -1;
    }

// Output
#ifdef _FILE_INPUT_
    // File Output
    fout << result;
#else
    // Screen Ouptput
    printf("%d\n", result);
#endif
 
}