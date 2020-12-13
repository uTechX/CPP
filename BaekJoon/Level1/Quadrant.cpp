//http://blog.naver.com/PostView.nhn?blogId=kooda21&logNo=222057202301&categoryNo=0&parentCategoryNo=0&viewDate=&currentPage=1&postListTopCurrentPage=1&from=postView

#include <stdio.h>
int main(void)
{

    int a = 0;
    int b = 0;

    scanf("%d", &a);
    scanf("%d", &b);
    if (a != 0 && b != 0)
    {
        if (a > 0)
            printf("%d", b > 0 ? 1 : 4);         
        else if (a < 0)      
            printf("%d", b > 0 ? 2 : 3);
    }
    else
    {
        printf("%d", -1);
    }

}