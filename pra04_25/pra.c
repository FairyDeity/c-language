//809*??=800*??+9*?? 
//����??�������λ��, 809*??Ϊ��λ����8*??�Ľ��Ϊ��λ����9*??�Ľ��Ϊ3λ����
//��??�������λ������809*??��Ľ����
/*#include <stdio.h>
 
void output(long int b, long int i){
    printf("\n%ld = 800 * %ld + 9 * %ld\n", b,i,i);
}
 
 
int main(){
 
    void output(long int b, long int i);
    long int a,b,i;
    a = 809;
    for(i = 10; i < 100; i++){
        b = i * a;
        if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100){
            output(b, i);
        }
    }
    return 0;
}*/


//��0��7������ɵ���������

/*#include<stdio.h>
int main(int agrc, char*agrv[])
{
    long sum = 4, s = 4;//sum�ĳ�ʼֵΪ4��ʾ��ֻ��һλ������ɵ���������Ϊ4��
    int j;
    for (j = 2; j <= 8; j++)
    {    
        printf("%dλ��Ϊ�����ĸ���%ld\n", j-1, s);
        if (j <= 2)
            s *= 7;
        else
            s *= 8;
        sum += s;    
    }
    printf("%dλ��Ϊ�����ĸ���%ld\n", j-1, s);
    printf("�������ܸ���Ϊ��%ld\n", sum);
    // system("pause");
    return 0;
}
*/




//һ��ż�����ܱ�ʾΪ��������֮�͡�
/*#include<stdio.h>
#include<stdlib.h>
int Isprimer(unsigned int n);
int main()
{
    unsigned int n,i;
    do{
        printf("������һ��ż��:\n");
        scanf("%d",&n);
    }while(n%2!=0);
    for(i=1;i<n;i++)
        if(Isprimer(i)&&Isprimer(n-i))
            break;
    printf("ż��%d���Էֽ��%d��%d���������ĺ�\n",n,i,n-i);
    
    return 0;
}
int Isprimer(unsigned int n)
{
    int i;
    if(n<4)return 1;
    else if(n%2==0)return 0;
    else
        for(i=3;i<sqrt(n)+1;i++)
            if(n%i==0)return 0;
    
    return 1;
}
*/