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
    int a = 0;
    int b = 0;
    int result = 0;

// Input 
#ifdef _FILE_INPUT_
  
    ifstream fin ("Quadrant.in");
    ofstream fout("Quadrant.out");
   

    if(!fin.is_open())
    {
        cout << " File open Error" << endl;
        exit(0);
    }

    fin >> a >> b;

    /*
    if (a != 0 && b != 0)
    {
        if (a > 0)
            result = ( b > 0 ? 1 : 4);         
        else if (a < 0)      
            fout << (b > 0 ? 2 : 3);
    }
    else
    {
        result =  -1;
    }
    */
#else
    scanf("%d", &a);
    scanf("%d", &b);
#endif

// Alogrithm Body

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
    fout << result;
#else
    printf("%d\n", result);
#endif
 
}