//ʵ�ּ򵥵ļ�����

//1.ʵ�ּӼ��˳�����

/*
# include <stdio.h>
 
int main() {
 
    char operator;
    double firstNumber,secondNumber;
 
    printf("��������� (+, -, *,): ");
    scanf("%c", &operator);
 
    printf("������������: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
 
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;
 
        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;
 
        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;
 
        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;
 
        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }
    
    return 0;
}

*/


//����

/*
#include <stdio.h>
 
int get_option();
void print_result(int num1,int num2,int result,int option);
 
int main(void)
{
    int done = 0;
    int option,num1,num2,result;
    
    while(!done)
    {
        option = get_option();
        if(option == 5)
        {
            done = 1;
        }
        else {
            do {
                printf("\n��������������");
                scanf("%d %d",&num1,&num2);
                if(option == 4 && num2 == 0)
                {
                    printf("\n�Բ��𣬳�������Ϊ��");
                } 
                else {
                    switch(option){
                        case 1:
                            result = num1 + num2;
                            break;
                        case 2:
                            result = num1 - num2;
                            break;
                        case 3:
                            result = num1 * num2;
                            break;
                        case 4:
                            result = num1 / num2;
                    }
                    print_result(num1,num2,result,option);
                }
            }while(option == 4 && num2 == 0);
        }
    }
 
    return 0;
}
 
int get_option()
{
    int option;
    do
    {
        printf("\n ****************");
        printf("\n *    1.�ӷ�    *");
        printf("\n *    2.����    *");
        printf("\n *    3.�˷�    *");
        printf("\n *    4.����    *");
        printf("\n *    5.�˳�    *");
        printf("\n ****************");
 
        printf("\n����������Ҫ�Ĺ��ܣ�");
        scanf("%d",&option);
 
        if(option <1 || option > 5)
        {
            printf("�Բ���������������������������롣\n");
        }
    }while(option <1 || option > 5);
 
        return option;
}
 
void print_result(int num1,int num2,int result,int option){
    char operator;
    switch(option){
        case 1:
            operator = '+';
            break;
        case 21:
            operator = '-';
            break;
        case 3:
            operator = '*';
            break;
        case 4:
            operator = '/';
            break;
    }
    printf("\n** %d %c %d = %d **\n",num1,operator,num2,result);
}
*/