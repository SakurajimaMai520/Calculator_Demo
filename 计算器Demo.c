#include <stdio.h>
//#include <math.h>

int main()
{
  
    int max(int x,int y);
    int add(int m,int n);
    int mix(int g,int h);
    //int divide(int j,int k);
    int a,b,c,d,e,f,g,h,i,l,m,n,p,q,r,s,t,u,v,w,x,y,z;
    float j,k,o;
    int key;
    //开始时弹出可执行功能

    printf("输入“1”以判断两个整数大小，输入“2”以求出两整数之和，输入“3”以求两整数之积，╳输入“4”以求两数之商╳（注：两整数间请用半角逗号间隔，输入完毕后请按回车键以执行下一步，求商时除数不能为0）\n");
    scanf("%d",&key);

    //判断所选功能

    if(key==1) {

        //功能1：判断大小；数字：1

        printf("开始判断大小\n");
        scanf("%d,%d",&a,&b);
        c=max(a,b);
        printf("最大值是%d",c);
    } else if(key==2) {

        //功能2：求和；数字：2

        printf("开始求和\n");
        scanf("%d,%d",&a,&b);
        e=add(a,b);
        printf("所输入两数之和为%d",e);
    }  else if(key==3) {

        //功能3：求积；数字：3

        printf("开始求积\n");
        scanf("%d,%d",&g,&h);
        i=mix(g,h);
        printf("所输入两数之积为%d",i);
    } 
    
    /* else  if(key==4) {

        //功能4：求商；数字：4

        printf("开始求商\n");
        scanf("%f,%f",&j,&k);
        if(k==0) {
            printf("除数不能为0");
        }
        return 1;
        o=divide(j,k);
        printf("两数之商为%f",o);
    } */
    else {

        //输入其他内容提示无此功能

        printf("无此功能");

    }
    return 2;      //int main()下随意返回的一个值
}

//函数功能区域
//功能1：判断大小

int max(int x,int y)
{
    int z;
    if (x>y)
    {
        z=x;
    }
    else {
        z=y;
    }
    return z;
}

//功能2：求和

int add(int m,int n)
{
    return m+n;
}

//功能3：求积
int mix(int g,int h)
{
    return g*h;
}

//功能4：求商
/* float divide(float j,float k)
{
    float Val=j/k;
    return Val;
}
*/
    

