#include <iostream>

int main()
{
    char InputChar[20];
    //c

    //
    //scanf("%s", InputChar);
    
    // 공백을 포함하여 입력받기
    scanf("%[^\n]s", InputChar);

    //fgets(InputChar, 10, stdin);
    printf("Input key is %s\n", InputChar);

    for(int i=0 ; InputChar[i] != '\0'; i++)
    {
        printf("%c\n", InputChar[i]);
    }
   //c++f
    //cout << "Boy I Love Bacon \n" << endl;
    //cout << " and Ham";
    return 0;

}