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
            else
            {
                printf("wutingchewei,shanchushibai,dianjihuichejixu\n");
                char xx;
                scanf("%c", &xx);
                scanf("%c", &xx);
            }
        }
        if (code == 3)
        {
            printf("suoyoucheliangdezuobiaoweizhiruxia\n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgecheliangdezuobiaoweizhishi(%d,%d)\n", i + 1, arr[i].x, arr[i].y);
            }
            printf("dianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 4)
        {
            printf("qingshurunidangqianweizhizuobiao:\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            //用当前的x和y坐标，与每一个停车位进行计算，然后将最小的值输出
            //两点之间的距离公式
            double min = 100000;
            int carID = 0;

            for (int i = 0; i < index; i++)
            {
                int dx = x - arr[i].x;
                int dy = y - arr[i].y;
                double l = sqrt(dx * dx + dy * dy);

                printf("yonghudangqianweizhiyu%dgecheliangdejulishi%lf\n", i + 1, l);
                if (min > l)
                {
                    min = l;
                    carID = i;
                }
            }
            printf("yonghudangqianweizhiyudi%dgechedejuliwei,%lf,shizuixiaojuli\n", carID + 1, min);

            printf("dianjihuichejixu\n");
            char xx;
            scanf("%c", &xx);
            scanf("%c", &xx);
        }
        if (code == 5)
        {
            printf("tuichuxitong\n");
            break;
        }
    }
}