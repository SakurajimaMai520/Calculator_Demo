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
    //��ʼʱ������ִ�й���

    printf("���롰1�����ж�����������С�����롰2�������������֮�ͣ����롰3������������֮�����w���롰4����������֮�̨w��ע�������������ð�Ƕ��ż����������Ϻ��밴�س�����ִ����һ��������ʱ��������Ϊ0��\n");
    scanf("%d",&key);

    //�ж���ѡ����

    if(key==1) {

        //����1���жϴ�С�����֣�1

        printf("��ʼ�жϴ�С\n");
        scanf("%d,%d",&a,&b);
        c=max(a,b);
        printf("���ֵ��%d",c);
    } else if(key==2) {

        //����2����ͣ����֣�2

        printf("��ʼ���\n");
        scanf("%d,%d",&a,&b);
        e=add(a,b);
        printf("����������֮��Ϊ%d",e);
    }  else if(key==3) {

        //����3����������֣�3

        printf("��ʼ���\n");
        scanf("%d,%d",&g,&h);
        i=mix(g,h);
        printf("����������֮��Ϊ%d",i);
    } 
    
    /* else  if(key==4) {

        //����4�����̣����֣�4

        printf("��ʼ����\n");
        scanf("%f,%f",&j,&k);
        if(k==0) {
            printf("��������Ϊ0");
        }
        return 1;
        o=divide(j,k);
        printf("����֮��Ϊ%f",o);
    } */
    else {

        //��������������ʾ�޴˹���

        printf("�޴˹���");

    }
    return 2;      //int main()�����ⷵ�ص�һ��ֵ
}

//������������
//����1���жϴ�С

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

//����2�����

int add(int m,int n)
{
    return m+n;
}

//����3�����
int mix(int g,int h)
{
    return g*h;
}

//����4������
/* float divide(float j,float k)
{
    float Val=j/k;
    return Val;
}
*/
    

