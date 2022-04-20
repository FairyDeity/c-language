// ����һ������ƽ������
/*#include <stdio.h>
#include <stdlib.h>
int main(){
    float new_guess;
    float last_guess;
    float number;
    // �ߴ��û����룬��ȡ���ݲ��������м�顣
    printf("Enter a number: " );
    scanf("%f", &number );
    if( number < 0 ){
        printf("Cannot compute the square root of a " "negative number! \n");
        return EXIT_FAILURE;
    }
    // ����ƽ�����Ľ���ֵ��ֱ������ֵ���ٱ仯��
    new_guess = 1;
    do{
        last_guess = new_guess;
        new_guess = ( last_guess + number / last_guess ) / 2;
        printf ("%.15e\n", new_guess );
    } while( new_guess != last_guess );
    // ��ӡ���
    printf ("Square root of %g is %g\n", number, new_guess );
    return EXIT_SUCCESS;
}
*/

//������׶���ʽ

#include <stdio.h>
/**
 * ���� Hermite polynomial ��ֵ
 *
 * ���룺
 *    n, x�����ڱ�ʶֵ
 *
 * �����
 *    polynomial��ֵ������ֵ��
**/
int hermite( int n, int x )
{
	
    // ������Ҫ�ݹ�����������
    if( n <= 0 )
        return 1;
    if( n == 1 )
        return 2 * x;
    // ���򣬵ݹ�ؼ�����ֵ��

    return  2 * x * hermite( n - 1, x ) - 2 * ( n - 1 ) * hermite ( n - 2, x );;
}
int main()
{
    printf("%d\n", hermite(3,2));
    
    return 0;
}
