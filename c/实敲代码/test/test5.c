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
    //             printf("除数不能为0");
    //         }
    //         break;
    //     case '%':
    //         if (b != 0) {
    //             printf("%d %% %d = %d", a, b, a % b);
    //         } else {
    //             printf("除数不能为0");
    //         }
    //         break;
    //     default:
    //         printf("无效的运算符");
    // }
    //t3

float h;
int w;
scanf("输入身高和体重%f %d",&h,&w);
float BMI=w/(h*h);
printf("%.1f\n",BMI);
// switch (BMI<30)
// {
// case '0':
//     printf("肥胖");
//     break;
// case '1':switch (BMI<25){
//         case '0':
//             printf("偏重");
//             break;
//         case '1':switch (BMI<18.5)
//             {
//             case '0':
//                 printf("正常");
//                 break;
//             default:
//                 printf("偏轻");

//             }

//         }

// }
// return 0;
}