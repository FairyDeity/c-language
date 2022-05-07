//排序—升序
//1.冒泡排序
/*
#include <stdio.h>
int main(void)
{
    int a[1001];
    int n,i,j,t;
    scanf("%d",&n);//n为要排序的数的个数
    //输入要排序的数
    for(i=0;i<n;++i)
        scanf("%d",a+i);
 
    //接下来进行排序
    for(i=0;i<n-1;++i)//n个数,总共需要进行n-1次
    {                 //n-1个数排完,第一个数一定已经归位
        //每次会将最大(升序)或最小(降序)放到最后面
        for(j=0;j<n-i-1;++j)
        {
            if(a[j]>a[j+1])//每次冒泡,进行交换
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        for(j=0;j<n;++j)
            printf("%-5d ",a[j]);
        printf("\n\n");
    }
 
    return 0;
}
*/


//改进
/*
for(i=0;i<n-1;++i)//n个数,总共需要进行n-1次
{                 //n-1个数排完,第一个数一定已经归位
    //每次会将最大(升序)或最小(降序)放到最后面
    int f=1;//这里设置一个开关变量
    for(j=0;j<n-i-1;++j)
    {
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            f=0;
        }
    }
    if(1==f)//f为1说明没进行过冒泡,说明序列有序
        break;//若序列有序,则跳出排序即可
}
*/

//2.选择排序
/*
#include <stdio.h>
int main(void)
{
    int a[1001];
    int n,i,j,t;
    scanf("%d",&n);//n为要排序的数的个数
    //输入需要排序的数
    for(i=0;i<n;++i)
        scanf("%d",a+i);
    //接下来进行排序
    for(i=0;i<n-1;++i)//因为每次需要和a[i]后面的数进行比较,所以到a[n-2](倒数第2个元素)就行
    {
        for(j=i+1;j<n;++j)//j从i后一个开始,a[i]与a[j]进行比较
        {
            if(a[i]>a[j])//a[i]为当前值,若是比后面的a[j]大,进行交换
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }//每排序一次,就会将a[i](包括a[i])之后的最小值放在a[i]的位置
        for(j=0;j<n;++j)
            printf("%-5d",a[j]);
        printf("\n\n");
    }
 
    return 0;
}
*/

//改进
/*
for(i=0;i<n-1;++i)
{
    int k=i;//设置一个变量存储下标
    for(j=i+1;j<n;++j)//遍历a[i]后的数
    {
        if(a[k]>a[j])
            k=j;
    }//执行过后,k会存储当前最小值的下标
    //进行一次交换        
    t=a[k];
    a[k]=a[i];
    a[i]=t;
}

*/


//3.插入排序
/*
#include <stdio.h>
int main(void)
{
    int a[1001];
    int i,j,t,n;
    scanf("%d",&n);//输入要排序的数的个数
 
    for(i=0;i<n;++i)//输入要排序的数
        scanf("%d",a+i);
 
    for(i=1;i<n;++i)
    {
        t=a[i];//将a[i]“拿在手中”
        for(j=i-1;j>-1 && a[j]>t;j--)//和前面的牌比
        {
            //如果前面的"牌"比手中的"牌"大,则将"牌"向后移
            a[j+1]=a[j];
        }//跳出循环则表明了"手中的牌的位置找到了"
        a[j+1]=t;//将"牌"插入
 
        for(j=0;j<n;++j)
            printf("%-5d",a[j]);
        printf("\n\n");
    }
 
    return 0;
}
*/