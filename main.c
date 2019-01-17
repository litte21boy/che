#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct point arr[100];
    printf("huanyingjinruzhuanchangcheliangguanlixitong\n");
    while (1)
    {
        printf("1---tianjiacheliangweizhi\n");
        printf("2---shanchucheliangweizhi\n");
        printf("3---xianshisuoyoucheliangweizhi\n");
        printf("4---xianshiliwozuijingdeyigecheliangweizhi\n");
        printf("5---tuichuxitong\n");

        printf("qingshuruxiangyingdegongnengbianhao\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshuruniyaotianjiadexzuobiaoheyzuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);

            arr[index].x = x;
            arr[index].y = y;

            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 2)
        {
            printf("shanchu\n");
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
            else{
                printf("wutingchewei,shanchushibai,dianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);

            }
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichuxitong\n");
            break;
        }
    }
}