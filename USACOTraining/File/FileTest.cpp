#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 
int main(void)
{
    ifstream readFile;
    readFile.open("ride.in");    //파일 열기
 
    if (!readFile.is_open())
    {
        cout << " File open Error";
        exit(0);
    }
    while (!readFile.eof())
    {
        //1. istream의 getline.
        /*
        char tmp[256];
        readFile.getline(tmp, 256);
        cout << tmp << endl;    //지금은 읽은 문자열 바로 출력.
        */

        //2. std::getline.
        string str;
        getline(readFile, str);
        cout << str << endl;    //지금은 읽은 문자열 바로 출력.
    }

    readFile.close();    //파일 닫아줍니다.
    return 0;
}
