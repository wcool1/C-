#include <ctype.h> 
#include <stdio.h>
int main()
{   //t1
// char i;
// scanf("%c",&i);
// //利用ASCII码转换大小写
// if (i>= 'A' && i<= 'Z')
// {  
//         i += 32; // 大写字母转小写字母  
// } 
// else if (i >= 'a' && i <= 'z') 
// {  
//     i -= 32; // 小写字母转大写字母  
// }  
//     printf("转换后的字母为：%c\n", i);  
//     return 0;  
    //t2
// #define MAX(a,b) (a>b)?a:b 
// int s1,s2,s3,score;
// scanf("%d %d %d",&s1,&s2,&s3);
// if (s3>MAX(s1,s2))
// {
//     score=s3;
// }
// else score=MAX(s1,s2);
// printf("%d",score);
    //t3
// int miles,fee;
// scanf("%d",&miles);
// if(miles<=3)
//     fee=10;   
// else
// {
// fee=10+(miles-3)*2;
// }
// printf("支付的费用为%d元",fee);
    //t4    
int y,m,d;
scanf("%d %d %d",&y,&m,&d);
    if (m < 1 || m>12) {
        printf("no");
        
    }
    else{
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
            if (d >= 1 && d <= 31) {
                if(y%400==0||(y%4==0&&y%100!=0)){//闰年
                    if(m==2){
                        if(0<d<=29){
                            printf("yes");
                        }
                        else{
                             printf("no");
                        }
                    }
                

                }
                else{//平年
                    if(m==2){
                        if(0<d<=28){
                           printf("yes");
                        }
                        else{
                                    printf("no");
                        }
                    }
                }
            }
            else{
                printf("no");
            }
        }else{
            if (d >= 1 && d <= 30) {
                if(y%400==0||(y%4==0&&y%100!=0)){//闰年
                    if(m==2){
                        if(0<d<=29){
                           printf("yes");
                        }
                        else{
                             printf("no");
                        }
                    }
                

                }
                else{//平年
                    if(m==2){
                        if(0<d<=28){
                           printf("yes");
                        }
                        else{
                            printf("no");
                        }
                    }
                }
            }
            else{
                printf("no");
            }
        }
    }

}
