#include <stdio.h>

int main() {
    //t2
    // int a, b;
    // char op;
    // scanf("%d %d %c", &a, &b, &op);

    // switch (op) {
    //     case '+':
    //         printf("%d + %d = %d", a, b, a + b);
    //         break;
    //     case '-':
    //         printf("%d - %d = %d", a, b, a - b);
    //         break;
    //     case '*':
    //         printf("%d * %d = %d", a, b, a * b);
    //         break;
    //     case '/':
    //         if (b != 0) {
    //             printf("%d / %d = %d", a, b, a / b);
    //         } else {
    //             printf("��������Ϊ0");
    //         }
    //         break;
    //     case '%':
    //         if (b != 0) {
    //             printf("%d %% %d = %d", a, b, a % b);
    //         } else {
    //             printf("��������Ϊ0");
    //         }
    //         break;
    //     default:
    //         printf("��Ч�������");
    // }
    //t3

float h;
int w;
scanf("������ߺ�����%f %d",&h,&w);
float BMI=w/(h*h);
printf("%.1f\n",BMI);
// switch (BMI<30)
// {
// case '0':
//     printf("����");
//     break;
// case '1':switch (BMI<25){
//         case '0':
//             printf("ƫ��");
//             break;
//         case '1':switch (BMI<18.5)
//             {
//             case '0':
//                 printf("����");
//                 break;
//             default:
//                 printf("ƫ��");

//             }

//         }

// }
// return 0;
}