 
#include <iostream>
using namespace std;

int main()
{
  string InputStr;
  
  while(1)
  {
    getline(cin, InputStr);
    if(InputStr == "")
      break;
    cout << InputStr << endl;

  }
    return 0;
  
}