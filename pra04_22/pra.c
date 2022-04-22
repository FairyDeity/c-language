//使用枚举输出一周中的每一天
/*#include <stdio.h>
// 定义枚举类型
enum days {monday,tuesday,wednesday,thursday,friday,saturday,sunday};
typedef enum days days; // 我们可以使用 days 来代替 enum days
days yesterday(days today){
    return (today+6)%7;
}
days tomorrow(days today){
    return (today+1)%7;
}
// 常量字符串数组
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
//计算收藏的硬币值多少钱

#include <stdio.h>
void main ()
{
    // 设置变量
    int pennies;  // 1美分硬币的数量
    int nickels;  // 5美分硬币的数量
    int dimes;  // 10美分硬币的数量
    int quarters;  // 25美分硬币的数量
    int temp, left;  // 临时变量，将会用于各种计算
    // 输入 1美分( penny)、5美分(Nickel)、10美分(Dime)、25美分(Quarter)的硬币的数量
    printf("Enter the number of quarters, dimes, nickels, and pennies: ");
    scanf("%d %d %d %d", &quarters, &dimes, &nickels, &pennies);
    // 以美分(Cent)为单位计算硬币的价值
    left = 25 * quarters + 10 * dimes + 5 * nickels + pennies;
    // 转换成dollar(美元)
    printf("Your collection is worth\n ");
    temp = left / 100;
    printf("\t%d dollar", temp);
    if (temp==1)
        printf(", ");
    else
        printf("s, ");
    left = left % 100;
    // 转换成quarter(25美分)
    temp = left / 25;
    printf("%d quarter", temp);
    if (temp==1)
        printf(", ");
    else
        printf("s, ");
    left = left % 25;
    // 转换成dime(10美分)
    temp = left / 10;
    printf("%d dime", temp);
    // 这里本来应该使用条件语句，不过我使用了条件表达式和字符串连接
    printf ((temp==1) ? ", " : "s, ");
    left = left % 10;
    // 转换成nickel(5美分)
    temp = left / 5;
    printf("%d nickel", temp);
    if (temp==1)
        printf(", and ");
    else
        printf("s, and ");
    left = left % 5;
    // 转换成penny(1美分)
    printf("%d penn", left);
    if (left==1)
        printf("y\n");
    else
        printf("ies\n");
}


