#include <stdio.h>
struct point{
    int x;
    int y;
};
int main(){
    printf("huanyingjinruzhuangchanghceliangguanlixitong\n");
    while(1){
        int index=0;
        struct point arr[100];
        int code;
        printf("1---tianjiacheliangdeweizhi\n");
        printf("2---shanchucheliangdeweizhi\n");
        printf("3---xianshisuoyoucheliangdeweizhi\n");
        printf("4---xianshiliwozuijindecheliangdeweizhi\n");
        printf("5---tuichuxitong\n");

        printf("shuruxiangyindegongnengbianhao\n");
        scanf("%d",&code);
        if(code==1){
            printf("qingshuruniyaotianjiadexzuibiaoheyzuobiao");
            int x;
            int y;
            scanf("%d",&x);
            scanf("%d",&y);

            arr[index].x=x;
            arr[index].x=y;

            index++;
            printf("tianjiachenggong,dianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        if(code==2){

        }
         if(code==3){
             printf("suoyoucheliangweizhiruxia:\n");
             for(int i=0;i<index;i++){
                 printf("di%dgecheliangweizhiwei(%d,%d)\n",i+1,arr[i].x,arr[i].y);
             }
            
             printf("xianshichenggong,dianjihuichejixu\n");
            char xx;
            scanf("%c",&xx);
            scanf("%c",&xx);
        }
         if(code==4){
            
        }
         if(code==5){
            printf("yikngyongtuichu\n");
            break;
        }

        }
    }
}