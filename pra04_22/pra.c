//ʹ��ö�����һ���е�ÿһ��
/*#include <stdio.h>
// ����ö������
enum days {monday,tuesday,wednesday,thursday,friday,saturday,sunday};
typedef enum days days; // ���ǿ���ʹ�� days ������ enum days
days yesterday(days today){
    return (today+6)%7;
}
days tomorrow(days today){
    return (today+1)%7;
}
// �����ַ�������
const char * const thedays[] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
int main(void){
    days today;
    printf("today    \tyesterday  \ttomorrow\n"
          "============================================\n");
    for (today=monday;today<=sunday;today++)
        printf("%s = %d \t %s = %d \t %s = %d\n",
    thedays[today], today,
    thedays[yesterday(today)], yesterday(today),
    thedays[tomorrow(today)], tomorrow(today));
}
*/
//�����ղص�Ӳ��ֵ����Ǯ

#include <stdio.h>
void main ()
{
    // ���ñ���
    int pennies;  // 1����Ӳ�ҵ�����
    int nickels;  // 5����Ӳ�ҵ�����
    int dimes;  // 10����Ӳ�ҵ�����
    int quarters;  // 25����Ӳ�ҵ�����
    int temp, left;  // ��ʱ�������������ڸ��ּ���
    // ���� 1����( penny)��5����(Nickel)��10����(Dime)��25����(Quarter)��Ӳ�ҵ�����
    printf("Enter the number of quarters, dimes, nickels, and pennies: ");
    scanf("%d %d %d %d", &quarters, &dimes, &nickels, &pennies);
    // ������(Cent)Ϊ��λ����Ӳ�ҵļ�ֵ
    left = 25 * quarters + 10 * dimes + 5 * nickels + pennies;
    // ת����dollar(��Ԫ)
    printf("Your collection is worth\n ");
    temp = left / 100;
    printf("\t%d dollar", temp);
    if (temp==1)
        printf(", ");
    else
        printf("s, ");
    left = left % 100;
    // ת����quarter(25����)
    temp = left / 25;
    printf("%d quarter", temp);
    if (temp==1)
        printf(", ");
    else
        printf("s, ");
    left = left % 25;
    // ת����dime(10����)
    temp = left / 10;
    printf("%d dime", temp);
    // ���ﱾ��Ӧ��ʹ��������䣬������ʹ�����������ʽ���ַ�������
    printf ((temp==1) ? ", " : "s, ");
    left = left % 10;
    // ת����nickel(5����)
    temp = left / 5;
    printf("%d nickel", temp);
    if (temp==1)
        printf(", and ");
    else
        printf("s, and ");
    left = left % 5;
    // ת����penny(1����)
    printf("%d penn", left);
    if (left==1)
        printf("y\n");
    else
        printf("ies\n");
}


