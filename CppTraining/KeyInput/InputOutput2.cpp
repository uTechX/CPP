//https://jhnyang.tistory.com/128
//https://jhnyang.tistory.com/107

#include <iostream>
using namespace std;

int main()
{
  string str;
  getline(cin, str);
  
  /*
  while (str.length()>0)     
  {         
    cout << str << endl;
    getline(cin, str);     
  } 
  */
  /*

  while(str != "\0")
  {
      puts(str.c_str());
      getline(cin, str);

  }
  */
//https://kih0902.tistory.com/22

  while(1)
  {
    getline(cin, str);
    if(str == "")
      break;
    cout << str << endl;

  }


    return 0;






}