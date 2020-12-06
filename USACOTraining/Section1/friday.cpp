/*
ID: jay.dct1
NAME: Friday the Thirteenth
PROG: friday 
LANG: C++
*/
//https://jaykaychoi.tistory.com/11?category=561047

#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int DaysOfMonth(int month, int year) 
{
    switch (month) 
    {
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                return 29;
            else
                return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}
 
int main() 
{
    ofstream fout("friday.out");
    ifstream fin("friday.in");
 
    int N;
    fin >> N;
 
    int days[7] = { 0, };
 
    int now = 0;
 
    for (int i = 1900; i < 1900 + N; i++)
    {
        for (int month = 1; month < 13; month++)
        {
            days[((now + 13) % 7)]++;
            now = (now + DaysOfMonth(month, i)) % 7;
        }
    }
 
    for (int i = 0; i < 7; i++)
    {
        fout << days[(i + 6) % 7];
 
        if (i == 6) 
            fout << endl;
        else 
            fout << " ";
    }
    return 0;
}