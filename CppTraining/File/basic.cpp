#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(void)
{
  //fstream fin("test.txt")
  fstream fin;
  fin.open("test.txt");

  if (!fin.is_open())
  {
      cout << "File open Error." << endl;
      exit(0); 

  }
  cout << " File open OK \n";



/*
// 파일에서 문자 하나씩 읽기
  char filechar;
  while (true) 
  {
    fin.get(filechar);
    if (fin.fail()) 
    {
      break;
    }
    cout << filechar << endl;
  }

*/


  // 파일에서 문자 한 단어씩 읽기
  char filestring[20];

  while (!fin.eof())
  {
    fin >> filestring;
    cout << filestring << endl; 
  }


  /*
  // 파일에서 문자 한 줄씩 읽기
  string fileline;
  while (!fin.eof())
  {
    getline(fin, fileline);
    cout << fileline << endl; 
  }
  */

  fin.close();
  //getchar();

}
