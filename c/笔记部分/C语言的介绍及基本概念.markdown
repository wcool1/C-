
### 编码过程中的经验：
1.  写代码一定要多用printf输出，走一步看一步输出检查一下有没有问题，多调试；
## 学习路线![路线](road.jpg)![路线](road2.jpg)![路线](road3.png)
## c语言中的一些基本概念
1. 指令：指令是对计算机进行程序控制的最小单位；所有指令的集合称为计算机的指令系统；电脑是x86，手机是ARM ?
2. 编译器：转换机器语言和汇编语言
3. 语言进化史![语言进化史](lghistory.png)
4. c语言会被编译器转变为汇编语言，然后汇编语言编译为机器语言被执 ?
5. 运行之前要先保存文件（任何语言都如此）
## C语言分步编译 
1、预处理 宏定义展开 头文件展开 条件编译 去掉注释
2、编译 检查语 ? 将C语言转成汇编语言
3、汇编 将汇编语言转成机器语言（二进制码）
4、链 ? 将C语言依赖库链接到程序 ?
## 编译/解释型 动态/静态语言：见(https://zhuanlan.zhihu.com/p/37721614)
### 编译/解释型语言
1. 编译型语言：
      1. 定义：需通过编译器（compiler）将源代码编译成机器码，之后才能执行的语言。一般需经过编译（compile）、链接（linker）这两个步骤。编译是把源代码编译成机器码，链接是把各个模块的机器码和依赖库串连起来生成可执行文件。
      2. 编译型语言代表：代表语言：C、C++、Pascal、Object-C以及最近很火的苹果新语言swift:
      3. 优点：编译器一般会有预编译的过程对代码进行优化。因为编译只做一次，运行时不需要编译，所以编译型语言的程序执行效率高。可以脱离语言环境独立运行。
      4. 缺点：编译之后如果需要修改就需要整个模块重新编译。编译的时候根据对应的运行环境生成机器码，不同的操作系统之间移植就会有问题，需要根据运行的操作系统环境编译不同的可执行文件 。
2. 解释型语言：解释性语言的程序大多不需要编译，相比编译型语言省了道工序，解释性语言在运行程序的时候才逐行翻译。
   1. 代表：JavaScript、java、Python、Erlang、PHP、Perl、Ruby
   2. 优点：有良好的平台兼容性，在任何环境中都可以运行，前提是安装了解释器（虚拟机）。灵活，修改代码的时候直接修改就可以，可以快速部署，不用停机维护 。
   3. 缺点：每次运行的时候都要逐步解释，性能上不如编译型语言。
   4. Java首先由编译器编译成.class类型的文件看似是编译型语言，然而再通过虚拟机(JVM)从.class文件中读一行解释执一行，所以他是解释型的语言，（故判断一个语言是编译还是解释型不是看它是否经过编译，而是看代码是一全部执行
   - java编译过程![](image/C语言的介绍及基本概念/java.png)
3. 混合型语言
 既然编译型和解释型各有缺点就会有人想到把两种类型整合起来，取其精华去其糟粕。就出现了半编译型语言。
    - 比如C#,C#在编译的时候不是直接编译成机器码而是中间码，.NET平台提供了中间语言运行库运行中间码，中间语言运行库类似于Java虚拟机。.net在编译成IL代码后，保存在dll中，首次运行时由JIT在编译成机器码缓存在内存中，下次直接执行（博友回复指出）。类似于Java先生成字节码再在Java虚拟机中解释执行。
    - 严格来说混合型语言属于解释型语言。C#更接近编译型语言。
### 动态、静态语言
1. 动态语言：
是一类在运行时可以改变其结构的语言：例如新的函数、对象、甚至代码可以被引进，已有的函数可以被删除或是其他结构上的变化。通俗点说就是在运行时代码可以根据某些条件改变自身结构。
主要动态语言：Object-C、C#、JavaScript、PHP、Python、Erlang。
2. 静态语言
与动态语言相对应的，运行时结构不可变的语言就是静态语言。如Java、C、C++。
### 强弱之分等等
## C语言的特点
1. 优点：
   1. 底层语言：C 语言能够直接操作硬件、管理内存、跟操作系统对话，这使得它是一种非常接近底层的语言，也就是低级语言，非常适合写需要跟硬件交互、有极高性能要求的程序。
   2. 效率高：c语言 是<mark>编译型语言 </mark>编译型与解释型的区别:![编译型与解释型的区别](编译型与解释型的区别.png):**编译型语言**是一次将语言全部编译，得到机器码然后运行；而解释性语言需要逐句翻译故效率更低。
   3. 灵活度高：指针是c语言的灵魂，他可以直接操作计算机的硬件。
    其次，c语言对程序员的限制很少。它假设程序员知道自己在干嘛，不会限制你做各种危险的操作，你干什么都可以，后果也由自己负责。
    C 语言的哲学是“信任程序员，不要妨碍他们做事”。比如，它让程序员自己管理内存，不提供内存自动清理功能。另外，也不提供类型检查、数组的负索引检查、指针位置的检查等保护措施。表面上看，这似乎很危险，但是对于高级程序员来说，却有了更大的编程自由。不过，这也使得 C 语言的 debug 不太容易。
   4. 可移植性高：C 语言的原始设计目的，是将 Unix 系统移植到其他计算机架构。这使得它从一开始就非常注重可移植性，C 程序可以相对简单地移植到各种硬件架构和操作系统。
   除了计算机，C 语言现在还是嵌入式系统的首选编程语言，汽车、照相机、家用电器等设备的底层系统都是用 C 语言编程，这也是因为它良好的可移植性。
   5. 简单性：C 语言的语法相对简单，语法规则不算太多，也几乎没有语法糖。一般来说，如果两个语法可以完成几乎相同的事情，C 语言就只会提供一种，这样大大减少了语言的复杂性。
    而且，C 语言的语法都是基础语法，不提供高级的数据结构，比如 C 语言没有“类”（class），复杂的数据结构都需要自己构造。
   
## 语句，语句块
1. 语句：C 语言的代码由一行行语句（statement）组成。语句就是程序执行的一个操作命令。C 语言规定，语句必须使用分号结尾，除非有明确规定可以不写分号。;的作用即为判断语句在哪一行结束。两个分号之间的即为一行代码。编译的时候把一行一行的编译语句，以免出现错误 
   ```c
   int x;
   x
   =
   1
   ;
   ````
2. 语句块：C 语言允许多个语句使用一对大括号{}，组成一个块，也称为复合语句（compounded statement）。在语法上，语句块可以视为多个语句组成的一个复合语句。大括号的结尾不需要添加分号。在函数中也能添加语句块，但是在语句块内定义的变量是不能拿到语句块外使用的 ?
```c
{
  int x;
  x = 1;
}
printf("%d",x);


```
##  空格
1. C 语言里面的空格，主要用来帮助编译器区分语法单位。如果语法单位不用空格就能区分，空格就不是必须的，只是为了增加代码的可读性 
```c

int x = 1;
// 等同 ?
int x=1;
//上面示例中，赋值号 ?=）前后有没有空格都可以，因为编译器这里不借助空格，就能区分语法单位 ?
```
2. 语法单位之间的多个空格，等同于单个空格 
3. 空格还可以用来表示缩进：强调代码缩进，只是为了增强代码可读性，便于区分代码块 ?
4. 只包含空格的行被称为空白行，编译器会完全忽略该行 ?
## 注释：注释是对代码的说明，编译时注释会被替换成一个空格，也就是说，注释对实际代码没有影响 ?
1. //单行注释
2. /*多行注释*/：这种注释可以插在行内 ?
`int open(char* s /* file name */, int mode);`
3. 不管是哪一种注释，都不能放在双引号里面。双引号里面的注释符号，会成为字符串的一部分，解释为普通符号，失去注释作用 ?
4. 编译时，注释会被替换成一个空格，所以min/* space */Value会变成min Value，而不是minValue ?
## 函数

1. 结构:![结构](structure.png)
```c
int main()
{
	//{} 函数 ? 代码 ? 程序 ?
	//printf 是stdio.h中系统提供的函数 表示在标准输出设备上打印字符 ? 
	//"" 称为字符  ;一条语句的结束
	// \n是一个转义字 表示换行,//表示/或者直接\表示
	printf("hello world!\n");
	//return 如果出现在其他函数中表示函数结束  如果出现在main 函数中表示程序到此为止；
	//0 表示函数的返回值，要和函数返回值类型对应
	return 0;
}

```
2. 函数定义后需要被调用才能执行其中的代码(**除主函数之外**)
3. 主函数
   1. 定义：
      1. 所有c语言的代码都有起始入口，这个入口就是主函数main(){}
      2. 进入主函数后才能**由主函数调用其他函数**
      3. 每个c语言代码**有且只能有一个主函数**
   2. 特点:
      1. 主函数会被自动调用
      2. 返回值给调用的程序
      3. 主函数返回值必须为int，想让程序正常结束，一般将返回值设为0；
      4. 用途![c语言是工业语言，它普遍实用于一些底层设计](purpose.png)
      5. 运行c语言需要编辑器和编译器，或者ide（集成二者的开发环境）

## 标识符：

- 定义：用来表示变量，函数，其他实体的名称的命名标记；
- 要让编译器识别标识符，像函数一样需要先进行声明或定义：

```   c
int add(int a,int b){
  
    return a + b;****
}//其中add就是函数名，a，b是变量名，它们都是标识符
```

- 规则：
  1. 标识符可以用小写字母，大写字母，数字和下划线命名
  2. 标识符的第一个字符必须是字母或下划线，不能是数字
  3. 区分大小写

## 关键词

- 定义：c语言规定的，有特殊的意义和用途且不能作为标识符使用；比如int
- 所有的关键词![所有的关键字](keywords.png)
## 转义字符
1. \代表转义字符`\\`代表\,\n表示换行
## printf（print+format）格式化打印:

- printf是系统自带的函数
- 作用：将数据输出到控制台
- printf()不会在行尾自动添加换行符，运行结束后，光标就停留在输出结束的地方，不会自动换行。为了让光标移到下一行的开头，可以在输出文本的结尾，添加一个换行符\n
1. 语法： %变量类型；printf("占位 ?1，占位符2，~"，替换变量1，替换变量2，替换n~)d代表整数，f代表浮点数；
2. printf()是在标准库的头文件stdio.h定义的。使用这个函数之前，必须在源码文件头部引入这个头文件 ?
```   c

         #include <stdio.h>       
         int main()
         {
            int result;//int,..也可用来定义变量；变量必须被申明之后才能赋值，操作使用 
            int re;
            result=add(1,2);
            re=add(2,3);
            printf("hello\n");
            printf("%d,%d",result,re);
            return 0;

         }

```
## 占位符
1. 定义:printf是无法直接打印出变量/数字/布尔值等数据的的例如printf(result/3/True);需要用到占位符%,但是可以直接输出字符串 。
2. printf()可以在输出文本中指定占位符。所谓“占位符”，就是这个位置可以用其他值代入
```c
// 输出 There are 3 apples
printf("There are %i apples\n", 3);

```
3. 占位符类型：
```

d/i 　　　　　　　　　　以十进制形式输出带符号整数 
o 　　　　　　　　　　　以八进制形式输出无符号整 ?(不输出前缀O)
x 　　　　　　　　　　　以十六进制形式输出无符号整数(不输出前缀OX)
u 　　　　　　　　　　　以十进制形式输出无符号整 ?
f 　　　　　　　　　　　以小数形式输出单、双精度实数
e 　　　　　　　　　　　以指数形式输出单、双精度实数
g 　　　　　　　　　　　 ?%f%e中较短的输出宽度输出单、双精度实数
c 　　　　　　　　　　　输出单个字符
s 　　　　　　　　　　　输出字符 ?
p                      指针
%%                     输出一个%
%e：使用科学计数法的浮点数，指数部分的e为小写 ?
%E：使用科学计数法的浮点数，指数部分的E为大写 ?
%i：整数，基本等同 ?%d ?
%a：十六进制浮点数，字母输出为小写 ?
%A：十六进制浮点数，字母输出为大写 ?
```
4. 输出文本里面可以使用多个占位符
```c
printf("%s says it is %i o'clock\n", "Ben", 21);

```
- **特别之处**：如果变量的数量与占位符的数量不一致，编译器也不会报错;如果变量数量<占位符，那么多出来的占位符打印出内存中的任意值；如果如果变量数量>占位 ?,只打印出占位符所代表的值，其余不管 

```   c
   printf("%d,%d",t/60);
   printf("%d,%d",t/60,t%60,t/2);
```
5. printf()允许限定占位符的最小宽度 
```c
//整数
printf("%5d\n", 123); // 输出 ? "  123"
上面示例中，%5d表示这个占位符的宽度至少 5位。如果不 ?5位，对应的值的前面会添加空格 
对于小数，这个限定符会限制所有数字的最小显示宽度 
//小数
printf("%12f\n", 123.45);
// 输出 "  123.450000"
上面示例中，%12f表示输出的浮点数最少要占据12位。由于小数的默认显示精度是小数点 6位（小数点也算一位），所以123.45输出结果的头部会添加2个空格 
```
6. 默认情况下，printf()不对正数显示+号，只对负数显示-号。如果想让正数也输出+号，可以在占位符 ?%后面加一个+ 
```c
printf("%+d\n", 12); // 输出 +12
printf("%+d\n", -12); // 输出 -12
```
7. 限定小数位数(小数的默认显示精度是小数点后6 ):输出小数时，有时希望限定小数的位数。举例来说，希望小数点后面只保留两位，占位符可以写成%.2f 
```c

printf("Number is %.2f\n", 0.5);
/ 输出 Number is 0.50
```
8. 限制宽度和小数位数可以结合使用：
```c
// 输出 ? "  0.50"
printf("%6.2f\n", 0.5);
```
9. 最小宽度和小数位数这两个限定值，都可以用*代替，通过printf()的参数传入 ?
```c
printf("%*.*f\n", 6, 2, 0.5);

// 等同 
printf("%6.2f\n", 0.5);
```
10. 输出部分字符 
%s占位符用来输出字符串，默认是全部输出。如果只想输出开头的部分，可以用%.[m]s指定输出的长度，其中[m]代表一个数字，表示所要输出的长度 
```c
// 输出 hello
printf("%.5s\n", "hello world");
上面示例中，占位 %.5s表示只输出字符串“hello world”的 前5个字符，即“hello” 

```

## scanf:提供让用户进行输入的窗口(类似于py中的input)

- 语法：scanf("占位 ?",&变量 ?)
- 意义：将输入值赋值给变量

```   c
eg:int try;
    scanf("%d %d",&result,&re);//空格别忘记输
    printf("%d,%d\n",result,re);
```

- **输入的内容一定要和占位符的内容格式相同**，否则你输入的结果计算机获取不到；默认为0 ；你如果输入的数据类型不对，那么此变量所代表的值即为它的内存地址  

```c

scanf("%c%c%c",&a,&b,&c);
输入为：d e f
则把'd'赋予a, 'f'赋予b,'e'赋予c ?
只有当输入为：def时，才能 ?'d'赋于a,'e'赋予b,'f'赋予c ?
如果在格式控制中加入空格作为间隔 ?
 ? scanf ("%c %c %c",&a,&b,&c);则输入时各数据之间可加空格 ?
scanf("%d,%d,%d",&a,&b,&c); 其中用非格式符 ? , ”作间隔符，
故输入时应为 ? 5,6,7
又如 ? scanf("a=%d,b=%d,c=%d",&a,&b,&c);
则输入应为a=5,b=6,c=7 
如输入的数据与输出的类型不一致时，虽然编译能够通过，但结果将不正确
```
- 在scanf中整数类型用d,浮点为 double 必须 用 %lf,float 必须 为 %f 不能混用.
- 对于字符串数组或字符串指针变量，由于数组名可以转换为数组和指针变量名本身就是地址，因此使用scanf()函数时，不需要在它们前面加上"&"操作符 
- 在prinf中double ， float 都可以用 %f 占位 可以混用 ； double 可以额外用 %lf;
```c
double c;
scanf("%lf",&c);
printf("%f",c);
```

## 标准库，头文件： 
1. 定义: C 语言自带的所有这些功能，统称为“标准库”（standard library），因为它们是写入标准的，到底包括哪些功能，应该怎么使用的，都是规定好的，这样才能保证代码的规范和可移植 
2. 不同的功能定义在不同的文件里面，这些文件统称为“头文件”（header file）。如果系统自带某一个功能，就一定还会自带描述这个功能的头文件，比如printf()的头文件就是系统自带的stdio.h。头文件的后缀通常为.h 
3. 如果要使用某个功能，就必须先加载对应的头文件，加载使用的 ?#include命令。这就是为什么使用printf()之前，必须先加载stdio.h的原因 ?
4. #include+文件，就是将指定文件中的代码复制到当前文件中，类似python中的import;不同的关键词可能来自不同的头文件.
5. 导入一个文件：stdio.h 
   1. std是一个标准库 
   2. i input o output   标准输入输出 
   3. .h 头文文件
6. <>表示导入系统文件 "" 表示导入自定义文件
7. 加载头文件的#include语句不需要分号结尾，
## 变量
### 概念
1. 定义 ![定义：](变量定义.png)变量（variable）可以理解成一块内存区域的名字。通过变量名，可以引用这块内存区域，获取里面存储的值。由于值可能发生变化，所以称为变量，否则就是常量了 
2. 意义：存储,保存数据，方便调用；
3. 申明变量 ：<类型名称><变量名称>;c语言是一种有类型的语言；所有变量申明时都要先确定它的类型，且不可改变，变量只有在申明过后才能使用 
4. 赋值：C 语言会在变量声明时，就为它分配内存空间，但是不会清除内存里面原来的值。这导致声明变量以后，变量会是一个随机的值。所以，变量一定要赋值以后才能使用。eg:int a=1;将右边的值付给左边的变量；这是个动作而非数学中的静态关系；
5.  左右值：C 语言有左值（left value）和右值（right value）的概念。左值是可以放在赋值运算符左边的值，一般是变量；右值是可以放在赋值运算符右边的值，一般是一个具体的值。这是为了强调有些值不能放在赋值运算符的左边，比如x = 1是合法的表达式，但是1 = x就会报错 
6. 初始化：当定义变量时也赋值了，就叫做初始化变量；初始化并不强制要求，但变量被调用之前都必须经过一次赋值；如果没有初始化直接调用，那么那个变量所代表的值即为它的内存地址;也可一次初始化多个变量，中间用,隔开
7. 命名规范 
   1. 只能由字母（包括大写和小写）、数字和下划线（_）组成 
   2. 不能以数字开头 
   3. 长度不能超过63个字符 
```c
int try=1,c=2;
  
    printf("%d",try+c);
```

8. 不能重复定义两个相同的变量名 

```
int main()
{
    int hour1=1,minute1=1;
    int hour1=2,minute1=2;
    printf("%d,%d",hour1,minute1);
    return 0;
}
```
### 变量作用域：
1. 定义：作用域（scope）指的是变量生效的范围。C 语言的变量作用域主要有两种：文件作用域（file scope）和块作用域（block scope）
   1. 文件作用域（file scope）指的是**在源码文件顶层声明的变量，从声明的位置到文件结束都有效**
   ```c
   int x = 1;
   int main(void) {
   printf("%i\n", x);
   }
   //上面示例中，变量x是在文件顶层声明的，从声明位置开始的整个当前文件都是它的作用域，可以在这个范围的任何地方读取这个变量，比如函数main()内部就可以读取这个变量
   
   ```
   2. 块作用域（block scope）指的是由大括号（{}）组成的代码块，它形成一个单独的作用域。凡是在块作用域里面声明的变量，只在当前代码块有效，代码块外部不可见
   ```c
   int a = 12;

   if (a == 12) {
   int b = 99;
   printf("%d %d\n", a, b);  // 12 99
   }

   printf("%d\n", a);  // 12
   printf("%d\n", b);  // 出错
   ```
   3. 嵌套代码块：代码块可以嵌套，即代码块内部还有代码块，这时就形成了多层的块作用域。它的规则是**内层代码块可以使用外层声明的变量，但外层不可以使用内层声明的变量。如果内层的变量与外层同名，那么会在当前作用域覆盖外层变量**
   ```c
      {
   int i = 10;

   {
      int i = 20;
      printf("%d\n", i);  // 20
   }

   printf("%d\n", i);  // 10
   }
   ```
   4. 最常见的块作用域就是函数，函数内部声明的变量，对于函数外部是不可见的。for循环也是一个块作用域，循环变量只对循环体内部可见，外部是不可见的。
## 常量
1. 定义：不会变的,初始化后就不可再被修改的量；
2. 以更好的方式：定义一个常量：
3. 定义语法 ：
   1. const 数据类型 变量名=n；`const char Nb='6';`（后面腰带分号）
   2. #define  标识符  常量   //注意define最后没有分号
   3. define的作用还有通过 define 防止头文件重复包含，define 还能用于定义函数
  ```
    #define MAX_VALUE 100       //定义整型变量MAX_VALUE值为100
    #define USER_NAME "huge"    //定义字符串变量USER_NAME值为"huge"
    #define PI 3.1415926        //定义浮点数变量PI值为3.1415926
  ```
1. const是一个修饰符；加在数据类型前面用给这个变量加上一个const(不变)属 后面接的变量名一般全是大写；
2. 定义常量的意义：
   1. 清楚知道常量的意死
   2. 便于修改常量在程序中出现的值；（改一个位置，其他的跟着一起变）
## 表达式，运算符
### 表达式
   1. 定义：表达式是一系列运算符和算子的组合；有点类似数学表达式比如a=b+1
   2. 表达式的组成 ：
      1. 运算符：+-=*/%（取余）
      2. 算子:指参与运算的值；常数，变量；返回值等等；
      3. 举个例子：index=a+13；其中index，a，13即为算子 ，=+为运算符
   3. 举例：计算时间差 ：

      1. 给每个时间分别定义小时，分钟两个变量；再对应相减
      2. 将时间全化为多少分钟；然后相减，最后处 ?60得时，并且取余得分钟.

      ```
        int hour1,minute1;
          int hour2,minute2;
          scanf("%d %d",&hour1,&hour2);
          scanf("%d %d",&minute1,&minute2);
          int t1=hour1*60+minute1;
          int t2=hour2*60+minute2;
          int t=t2-t1;
          printf("%d,%d",t/60,t%60);


      ```
### 运算符：      
 #### 逻辑运算符（这些运算符在使用布尔值时非常有用。）
      1. !：否运算符（改变单个表达式的真伪）。
      2. && 与（例如：a && b）两侧的表达式都为真，则为真，否则为假
      3. || 或（例如：a || b）两侧的表达式都为假，则为假，否则为真
      4. 对于逻辑运算符来说，任何非零值都表示真，零值表示伪。比如，5 || 0会返1 ；5 && 0会返 0 
      5. 逻辑运算符还有一个特点，它总是先对左侧的表达式求值，再对右边的表达式求值，这个顺序是保证的。如果左边的表达式不满足逻辑运算符的条件，就不再对右边的表达式求值。这种情况称为“短路” 
 #### 算数运算符：
   1. 一元运算符：。所谓“一元运算符”，指的是只需要一个运算数就可以执行：+/-:一元运算符`-`用来改变一个值的正负号。一元运算符+对正负值没有影响，是一个完全可以省略的运算符，但是写了也不会报错.
   ```c
   int x = -12;
   上面示例中，-将12这个值变为-12 
   int x = -12;
   int y = +x;//变量y的值还是-12，因为+不会改变正负值。
   ```
   2. 二元运算 + -用来完成加法和减法 
   3. */%
      1. 运算 /用来完成除法。注意，两个整数相除，得到还是一个整数。如果希望得到浮点数的结果，两个运算数必须至少有一个浮点数，这时C 语言就会进行浮点数除法。
   ```c
   float x = 6 / 4;
   printf("%f\n", x); // 输出 1.000000
   上面示例中，尽管变量x的类型是float（浮点数），但是6 / 4得到的结果是1.0，而不是1.5。原因就在于 C 语言里面的整数除法是整除，只会返回整数部分，丢弃小数部分
   float x = 6.0 / 4; // 或者写 6 / 4.0
   printf("%f\n", x); // 输出 1.500000
   ```
      2. 运算%表示求模运算，即返回两个整数相除的余值。这个运算符只能用于整数，不能用于浮点数；
         1. 负数求模的规则是，结果的正负号由第一个运算数的正负号决定 
         ```
         11 % -5 // 1
         -11 % -5 // -1
         -11 % 5 // -1  
         ```
4. 复合赋值运算符:当赋值与算术运算同时进行时，这些运算符非常有用；
   1. +=
   2. -=
   3. *=
   4. /=
   5. %=
5. 自增自减++/--：这两个运算符放在变量的前面或后面，结果是不一样的 **++var ，--var是先执行自增或自减操作，再返回操作后var的值** 而**var++和var--则是先返回操作前var的值，再执行自增或自减操作**
```c
i++; // 等同 i = i + 1
i--; // 等同 i = i - 1
int i = 42;
int j;

j = (i++ + 10);
// i: 43
// j: 52

j = (++i + 10)
// i: 44
// j: 54
```
   
#### 三目运算符
1. 定义:三目运算符是 C 中唯一一个使用三个操作数的运算符，并且它是表达条件的简便方法。表达式a?语句b:语句c（若 a 的值为 true，就执行语句 b，否则执行语句c。）
   ```c
      //下面是一个例子，返回两个值之中的较大值 ?

      (i > j) ? i : j;
   ```
#### 关系运算符
1. 定义：C 语言用于比较的表达式，称为“关系表达式”（relational expression），里面使用的运算符就称为“关系运算符”（relational operator），主要有下 ?6个 ?
```
> 大于运算 ?
< 小于运算 ?
>= 大于等于运算 ?
<= 小于等于运算 ?
== 相等运算 ?
!= 不相等运算符
```
1. 返回值：关系表达式通常返回0/1，表示真伪。C 语言中，0表示伪，所有非零值表示真。比如，20 > 12返回1 ,12 > 20返回0 .
2. 避免'=' ?'=='混淆：为了防止出现这种错误，有的程序员喜欢将变量写在等号的右边。`if (3 == x) ...`,这样的话，如果把'==误写 ?'='，编译器就会报错 
3. 另一个需要避免的错误是，多个关系运算符不宜连用 :i < j < k:
上面示例中，连续使用两个小于运算符。这是合法表达式，不会报错，但是通常达不到想要的结果，即不是保证变量j的值在i和k之间,**因为关系运算符是从左到右计算**所以实际执行的是下面的表达式:(i < j) < k;
上面式子中，i < j返回0 /1，所以最终是0 /1与变量k进行比较。如果想要判断变量j的值是否在i和k之间，应该使用下面的写法。i < j && j < k
#### 位运算符
1. C 语言提供一些位运算符，用来操作二进制位（bit）
2. 种类
   1. 取反运算符～：取反运算符～是一个一元运算符，用来将每一个二进制位变成相反值， ?0变成1 ?1变成0 ?
   ```c
   // 返回 01101100
   ~ 10010011
   ```
   2. 与运算符& ?
   与运算符&将两个值的每一个二进制位进行比较，返回一个新的值。当两个二进制位都为1，就返回1，否则返 ?0 ?
   3. 或运算符|
   或运算符|将两个值的每一个二进制位进行比较，返回一个新的值。两个二进制位只要有一个为1（包含两个都 ?1的情况），就返回1，否则返 ?0 ?
   4. 异或运算符^
   异或运算符^将两个值的每一个二进制位进行比较，返回一个新的值。两个二进制 ?**有且仅有一个为1**，就返回1，否则返 ?0 ?
   5. 左移运算 ?<<:左移运算符相当于将运算数乘以2的指定次方，比如左移2位相当于乘以4 ?2 ?2次方） ?
   左移运算 ?<<将左侧运算数的每一位，向左移动指定的位数，尾部空出来的位置使用0填充 ?
   6. 右移运算 ?>>:右移运算符相当于将运算数除以2的指定次方，比如右移2位就相当于除 ?4 ?2 ?2次方） ?
   右移运算 ?>>将左侧运算数的每一位，向右移动指定的位数，尾部无法容纳的值将丢弃，头部空出来的位置使 ?0填充 ?
#### 逗号运算符：
1. 逗号运算符用于将多个表达式写在一起，从左到右依次运行每个表达式 
`x = 10, y = 20;`
2. 逗号运算符返回最后一个表达式的值，作为整个语句的值 
```c
int x;
x = (1, 2, 3);
//x=3
```
## 运算优先级：

1.顺序 ![顺序](运算优先级.png)单目（一元运算符）：就是用来表正负的，它和赋值一样都是从右向左
(优先级仅次于括号)
```
    int a= -3;
    int b= 2;
    printf("%d",a*b);
```

2.赋值的特点: ![赋值的特点](赋值运算.png)它的优先级是最低的是为了让计算更合理；从右向左
3. 括号括起来的运算最优先
4. 嵌入式和结合式：![](结合关系.png)嵌入式和结合式的运算表达式不易理解，容易出错，不推荐使用；你的表达式就一步一步按照自己想要的结果来写是最好的

## 各种函数
### system
1. 语法 
```c
#include <stdlib.h>
int system(const char *command);
```
2. 功能：在已经运行的程序中执行另外一个外部程序
3. 参数：外部可执行程序名字
4. 返回值：
成功 ：0
失败：任意数 
5. 举例
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//system("calc"); //windows平台
	system("dir"); //Linux平台, 需要头文件#include <stdlib.h>

	return 0;
}   
```
## 流程控制
1. 背景 ：语言的程序是顺序执行，即先执行前面的语句，再执行后面的语句。开发者如果想要控制程序执行的流程，就必须使用流程控制的语法结构，主要是条件执行和循环执行；
### if语句
```c
if (line_num == MAX_LINES) {
  line_num = 0;
  page_num++;
}
if (expression)
  statement
else if (expression)
  statement
...
else if (expression)
  statement
else
  statement
 // 这样很容易出错，为了提供代码的可读性，建议使用大括号，明确else匹配哪一个if 
```
### **switch 语句**是一种特殊形式的 if...else 结构，用于判断条件有多个结果的情况。它把多重的else if改成更易用、可读性更好的形式 
```c
switch (num) {
  case 0:
    printf("False");
    break;
  case 1:
    printf("True");
    break;
    //case后面的语句体，不用放在大括号里面，这也是为什么需要break的原因 
  default:
    printf("Illegal");
}
```
上面代码中，根据表达式expression不同的值，执行相应的case分支。如果找不到对应的值，就执行default分支 
注意：每个case语句体的结尾，都应该有一个break语句，作用是跳出整个switch结构，不再往下执行 ，**如果缺少break，就会导致只要匹配到一个case无论下面的case值是否匹配都会继续执行（包括default语句），直至整个语句结束(这也是与if语句的区别，else if的每个语句都会判断，只有true才会执行)**
### while语句
while语句用于循环结构，满足条件时，不断执行循环体 
2. 语法 ：
while (expression)
  statement
上面代码中，如果表达式expression为非零值（表示真），就会执行statement语句，然后再次判断expression是否为零；如果expression为零（表示伪）就跳出循环，不再执行循环体，否则一直循环下去。
### do while
1. 定义：do...while结构是while的变体，它会先执行一次循环体，然后再判断是否满足条件。如果满足的话，就继续执行循环体，否则跳出循环 。
```c
do statement
while (expression);
```
2. 上面代码中，不管条件expression是否成立，循环体statement至少会执行一次。每次statement执行完毕，就会判断一次expression，决定是否结束循环。
```c
i = 10;

do {
  printf("i is %d\n", i);
  i++;
} while (i < 10);

printf("All done!\n");
```
### for语句
1. 语法：
for (初始化表达式; 判断表达式：只要为true，就会不断执行循环体 ; 循环变量处理表达式，每轮循环结束后执行，使得循环变量发生变化 )
statement;
```c
for (int i = 10; i > 0; i--)
printf("i is %d\n", i);
循环变量i在for的第一个表达式里面声明，该变量只用于本次循环。离开循环体之后，就会失效。
//输出
i is 10
i is 9
i is 8
i is 7
i is 6
i is 5
i is 4
i is 3
i is 2
i is 1
```
2. 条件部分的三个表达式，每一个都可以有多个语句，语句与语句之间使用逗号分隔 。表达式之间用分号隔开
```c
int i, j;
for (i = 0, j = 999; i < 10; i++, j--) {
  printf("%d, %d\n", i, j);
}
```
3. for的三个表达式都不是必需的，甚至可以全部省略，这会形成无限循环 ；
```c
for (;;) {
  printf("本行会无限循环地打印。\n" );
}
```
### break语句
1. 在循环体内部跳出它所在的循环，不再进行后面的循环了 ?
2. break命令只能跳出循环体和switch结构，不能跳出if结构 ?
### continue
1. continue语句用于在循环体内部终止本轮循环，进入下一轮循环。只要遇到continue语句，循环体内部后面的语句就不执行了，回到循环体的头部，开始执行下一轮循环 ?
### goto 语句
用于跳到指定的标签名。这会破坏结构化编程，建议不要轻易使用
```c
char ch;

top: ch = getchar();

if (ch == 'q')
  goto top;
//   上面示例中，top是一个标签名，可以放在正常语句的前面，相当于为这行语句做了一个标记。程序执行到goto语句，就会跳转到它指定的标签名 
  infinite_loop:
  print("Hello, world!\n");
  goto infinite_loop;
  //上面的代码会产生无限循环 
```
1. goto 的一个主要用法是跳出多层循环 
```c
for(...) {
  for (...) {
    while (...) {
      do {
        if (some_error_condition)
          goto bail;    
      } while(...);
    }
  }
}
    
bail:
// ... ...
```
2. goto 的另一个用途是提早结束多重判断 ():注意，goto 只能在同一个函数之中跳转，并不能跳转到其他函数 
```c
if (do_something() == ERR)
  goto error;
if (do_something2() == ERR)
  goto error;
if (do_something3() == ERR)
  goto error;
if (do_something4() == ERR)
  goto error;
  //上面示例有四个判断，只要有一个发现错误，就使  goto 跳过后面的判断，缩短运行时间
```

## 数据类型
1. 定义：C 语言的每一种数据，都是有类型（type）的，编译器必须知道数据的类型，才能操作数据。所谓“类型”，就是相似的数据所拥有的共同特征，那么一旦知道某个值的数据类型，就能知道该值的特征和操作方式。
2. 分类：基本数据类型有四种：字符（char）、整数（int）、浮点数（float）和布尔型。复杂的类型都是基于它们构建的 
### 布尔类型
1. C 语言原来并没有为布尔值单独设置一个类型，而是使用整数0表示伪，所有非零值表示真。
2. C99 标准添加了类型_Bool，表示布尔值。但是，这个类型其实只是整数类型的别名，还是使用0表示伪，1表示真，下面是一个示例。
```c
_Bool isNormal;

isNormal = 1;
if (isNormal)
  printf("Everything is OK.\n");
```
3. 头文件stdbool.h定义了另一个类型别名bool，并且定义了true代表1、false代表0。只要加载这个头文件，就可以使用这几个关键字。 
```c
#include <stdbool.h>

bool flag = false;
```
### 字面量
1. 字面量（literal）指的是代码里面直接出现的值。
`int x = 123;`
上面代码中，x是变量，123就是字面量。
2. 编译时，字面量也会写入内存，因此编译器必须为字面量指定数据类型，就像必须为变量指定数据类型一样。
3. 一般情况下，十进制整数字面量（比如123）会被编译器指定为int类型。如果一个数值比较大，超出了int能够表示的范围，编译器会将其指定为long int。如果数值超过了long int，会被指定为unsigned long。如果还不够大，就指定为long long或unsigned long long。 
4. 小数（比如3.14）会被指定为double类型。对于浮点数，编译器默认指定为 double 类型，如果希望指定为其他类型，需要在小数后面添加后缀f（float）或l（long double）。
5. 有时候，程序员希望为字面量指定一个不同的类型。比如，编译器将一个整数字面量指定为int类型，但是程序员希望将其指定为long类型，这时可以为该字面量加上后缀l或L，编译器就知道要把这个字面量的类型指定为long。`int x = 123L;`     
  - 上面代码中，字面量123有后缀L，编译器就会将其指定为long类型。这里123L写成123l，效果也是一样的，但是建议优先使用L，因为小写的l容易跟数字1混淆。
  - 八进制和十六进制的值，也可以使用后缀l和L指定为 Long 类型，比如020L和0x20L。
  ```c
  int y = 0377L;
  int z = 0x7fffL;
  ```
  - 如果希望指定为无符号整数unsigned int，可以使用后缀u或U。L和U可以结合使用，表示unsigned long类型。L和U的大小写和组合顺序无所谓。
  ```c
  int x = 123U;
  int x = 123LU;
  
  ```
6. 字面量本身的类型：1字面量无后缀，由编译器决定2有后缀由后缀决定但是最终赋值运算符=会自动将右边的值，转成左边变量的类型再赋值给该变量。
```c
int x=112L;
//上面的112是一个字面量其类型由后缀L决定为long类型，但是赋值运算符将其转变为int类型后在赋给x。

```
- 小结字面量后缀：
```

f和F：float类型。
l和L：对于整数是long int类型，对于小数是long double类型。
ll和LL：Long Long 类型，比如3LL。
u和U：表示unsigned int，比如15U、0377U。
u还可以与其他整数后缀结合，放在前面或后面都可以，比如10UL、10ULL和10LLU都是合法的。
```
### 整数类型
   1.五种整数 ![五种整数](整数类型.png)还有unsigned代表非负数；他能代表的正数范围是int的两倍：
   1. 意义：不同的类型占用的内存大小，表示的数据范围不一样；
   ```
   int add(short a,short b){
       return a + b;
   }
   ```
   2. 进制
      1. 在c语言中，用特定的前缀表示使用哪种进制0X表示十六进制 ；0前缀代表八进制；eg:10进制16 ，16进制表示为0x10或0X10;用八进制表述020;
      2. 10进制显示数字使用%d,8进制显示数字使用%o,16进制显示数字使用%x;如果要显示数字的前缀则要%#o,%#x(定义用0；显示用o);
      3. 有些编译器使用0b前缀，表示二进制数，但不是标准。
      `int x = 0b101010;`
      4. 注意，不同的进制只是整数的书写方法，不会对整数的实际存储方式产生影响。所有整数都是二进制形式存储，跟书写方式无关。不同进制可以混合使用，比如10 + 015 + 0x20是一个合法的表达式。
      ```
      int x = 100;
      printf("dec = %d\n", x); // 100
      printf("octal = %o\n", x); // 144
      printf("hex = %x\n", x); // 64
      printf("octal = %#o\n", x); // 0144
      printf("hex = %#x\n", x); // 0x64
      printf("hex = %#X\n", x); // 0X64
      ```
   3. 不同计算机的int类型的大小是不一样的。比较常见的是使 4个字节（32位）存储一个int类型的值，但是2个字节（16位） 8个字节（64位）也有可能使用。它们可以表示的整数范围如下 
```
16位：-32,768 ~ 32,767
32位：-2,147,483,648 ~2,147,483,647
64位：-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807

```
#### C 语言使用signed关键字，表示一个类型带有正负号，包含负值；使用unsigned关键字，表示该类型不带有正负号，只能表示零和正整数.
1. 对于int类型，默认是带有正负号的
```c
signed int a;
// 等同 
signed a;
// 等同 
int a;
```
2. int类型也可以不带正负号，只表示非负整数。这时就必须使用关键字unsigned声明变量。`unsigned int a;`;整数变量声明为unsigned的好处是，**同样长度的内存**能够表示的最大整数值，增大了一倍。比如，16位的signed int最大值为32,767，而unsigned int的最大值增大到65,535。unsigned int里面的int可以省略，所以上面的变量声明也可以写成下面这样。`unsigned a;`
3. 注意，C语言规定char类型默认是否带有正负号，由当前系统决定。这就是说，char不等同于signed char，它有可能是signed char，也有可能是unsigned char。这一点与int不同，int就是等同于signed int。我的系统规定char类型默认不能带有负号，如果是负的，那么输出为它的相反数；
```c
char x='-1';
printf("%c",x) //输出1 ;
printf("%d\n",x) ;//输出1所对应的asc码值即49

char x='-2';

printf("%c",x) //输出2   ;
printf("%d\n",x) ;//输出2所对应的asc码值即50


```
#### ASCII码表 ![](ascii.png)
#### 整数的子类型：为了节省内存大小或满足更大范围的整数
1. 作用：利于更精细地限定整数变量的范围，也有利于更好地表达代码的意图。
2. 分类及占用空间：
int :一般是4个字节（与操作系统有关）
short int（简写为short）：占用空间不多于int，一般占用2个字节（整数范围为-32768～32767）。
long int（简写为long）：占用空间不少于int，至少为4个字节。
long long int（简写为long long）：占用空间多于long，至少为8个字节。
1. 各自的范围：
数据类型的字节长度是不一样的。：
   1. int :表示16~32位（二进制位）整数。
   2. 应使用long类型：确实需要大于32位整数时（范围即大于-2^32-2^32-1，下同）可以确保不少于4个字节；
   3. 该使用long long类型：确实需要大于64位的整数时，可以确保不少于8个字节。
   4. 另一方面，为了节省空间，只需要小于16位整数时，应使用short类型；
   需要小于8位整数时，应该使用char类型。(ascii码足以)；
1. 默认情况下，short、long、long long都是带符号的（signed），即signed关键字省略了。它们也可以声明为不带符号（unsigned），使得能够表示的最大值扩大一倍。
```c
short a;
unsigned short a;

long b;
unsigned long b;

long long c;
unsigned long long c;
```
5. 有时候需要查看，当前系统不同整数类型的最大值和最小值，C 语言的头文件limits.h提供了相应的常量，比如SCHAR_MIN代表 signed char 类型的最小值-128，SCHAR_MAX代表 signed char 类型的最大值127。
为了代码的可移植性，需要知道某种整数类型的极限值时，应该尽量使用这些常量。
```c
SCHAR_MIN，SCHAR_MAX：signed char 的最小值和最大值。
SHRT_MIN，SHRT_MAX：short 的最小值和最大值。
INT_MIN，INT_MAX：int 的最小值和最大值。
LONG_MIN，LONG_MAX：long 的最小值和最大值。
LLONG_MIN，LLONG_MAX：long long 的最小值和最大值。
UCHAR_MAX：unsigned char 的最大值。
USHRT_MAX：unsigned short 的最大值。
UINT_MAX：unsigned int 的最大值。
ULONG_MAX：unsigned long 的最大值。
ULLONG_MAX：unsigned long long 的最大值。
#include<limits.h>
#include<stdio.h>
int main()
{
   printf("%d",SCHAR_MIN);
   return 0;

}
```

### 浮点数

   1. 两个整数的运算结果只能是整数(会将小数部分舍掉)

   ```c
   int main()
   {
      printf("%d",10/3);//结果为3
        printf("%d",10.0/3)//结果为3
      printf("%f",10.0/3);//结果为3.33333~，注意类型为f时，传入的数字一定要是浮点数，即使是整数也要 ?.0(分子分母只要一个是浮点就够 ?)
      return 0;
   }

   ```

   2. 用double/float分别表示双精度占8个字节，单精度浮点数类型来定义变量占4个字节；
   3. 对于都double类型的数据，占位符在printf用f/lf类型，scanf里用lf类型
### 字符类型
   1. char类型变量用于储存字符(如字母或标点符号)但从技术层面来看，它存储的类似于ASCII码故是整数类型；**在计算机内部，字符类型使用一个字节（8位）存储。C 语言将其当作整数处理，所以字符类型就是宽度为一个字节的整数**。每个字符对应一个整数（ ASCII 码确定），比如B对应整数66;char类型只能存储单个字符,如果要储存多个字符应该使用char数组且必须为""表示。
   ```c
   char x[]="111";
   printf("%s",x);
   ```
   2. C 语言规定，字符常量必须放在单引号里面;
   3. 字符类型在不同计算机的默认范围是不一样的。一些系统默认为-128~127，另一些系统默认为0 ~255。这两种范围正好都能覆盖0~127即ASCII字符范围。
   4. 只要在字符类型的范围之内 0~127，**整数与字符是可以互换**，都可以赋值给字符类型的变量。
   5. 在C语言中，字符串字面量（即用双引号括起来的字符序列）是由字符组成的数组。因此，在定义字符串字面量时，需要使用双引号而不是单引号。
如果你使用单引号来定义字符串字面量，编译器会将其解释为字符常量，而不是字符串字面量。
```c
    char vv='v';
    printf("%c\n",vv);
    printf("%d",vv);

    char c = 66;
      // 等同
    char c = 'B';
    printf("%c",c)    ;
    printf("%d",c);//都能输出
```
  1. 两个字符类型的变量可以进行数学运算
  ```c
  char a = 'B'; // 等同 char a = 66;
  char b = 'C'; // 等同 char b = 67;
  printf("%d\n", a + b); // 输出 133
  ```
  1. 单引号本身也是一个字符，如果要表示这个字符常量，必须使用反斜杠转义。`char t = '\'';`
   2. 转义字符：这种转义的写法，主要用来表示ASCII 码定义的一些无法打印的控制字符，它们也属于字符类型的值。
     ```c
      \a：警报，这会使得终端发出警报声或出现闪烁，或者两者同时发生 ?
      \b：退格键，光标回退一个字符，但不删除字符 ?
      \f：换页符，光标移到下一页。在现代系统上，这已经反映不出来了，行为改成类似于\v ?
      \n：换行符 ?
      \r：回车符，光标移到同一行的开头 ?
      \t：制表符，光标移到下一个水平制表位，通常是下一 ?8的倍数 ?
      \v：垂直分隔符，光标移到下一个垂直制表位，通常是下一行的同一列 ?
      \0：null 字符，代表没有内容。注意，这个值不等于数字0 ?
      转义写法还能使用八进制和十六进制表示一个字符 ?
      ```c
      char x='';//报错
      char x='\0';内容为空且不报错 ?
      ```
      \nn：字符的八进制写法，nn为八进制值 ?
      \xnn：字符的十六进制写法，nn为十六进制值 ?
      ```
        char x = 'B';
        char x = 66;
        char x = '\102'; // 八进 ?
        char x = '\x42'; // 十六进制
        以上四种写法等价
      ```
     ```
### void类型
1. 定义：void 类型指定没有可用的值。它通常用于以下三种情况下：
2. 	函数返回为空
C 中有各种函数都不返回值，或者您可以说它们返回空。不返回值的函数的返回类型为空。例如 void exit (int status);
1. 	函数参数为空
C 中有各种函数不接受任何参数。不带参数的函数可以接受一个 void。例如 int rand(void);
1. 	指针指向 void
类型为 void * 的指针代表对象的地址，而不是类型。例如，内存分配函数 void *malloc( size_t size ); 返回指向 void 的指针，可以转换为任何数据类型。
### 溢出
1. 定义：每一种数据类型都有数值范围，如果存放的数值超出了这个范围（小于最小值或大于最大值），需要更多的二进制位存储，就会发生溢出。大于最大值，叫做向上溢出（overflow）；小于最小值，叫做向下溢出（underflow）。
- 一般来说，**编译器不会对溢出报错，会正常执行代码，但是会忽略多出来的二进制位，只保留剩下的位，这样往往会得到意想不到的结果**。所以，应该避免溢出。
```c
// 
unsigned char x = 255;
x = x + 1;
printf("%d\n", x); // 0
上面示例中，变量x加1，得到的结果不是256，而是0。因为x是unsign char类型，最大值是255（二进制11111111），加1后就发生了溢出，256（二进制100000000）的最高位1被丢弃，剩下的值就是0
//举例向下溢出
unsigned int ui = UINT_MAX;  // 4,294,967,295
ui++;
printf("ui = %u\n", ui); // 0
ui--;
printf("ui = %u\n", ui); // 4,294,967,295
上面示例中，常量UINT_MAX是 unsigned int 类型的最大值。如果加1，对于该类型就会溢出，从而得到0；而0是该类型的最小值，再减1，又会得到UINT_MAX。

溢出很容易被忽视，编译器又不会报错，所以必须非常小心。
for (unsigned int i = n; i >= 0; --i) // 错误
上面代码表面看似乎没有问题，但是循环变量i的类型是 unsigned int，这个类型的最小值是0，不可能得到小于0的结果。当i等于0，再减去1的时候，并不会返回-1，而是返回 unsigned int 的类型最大值，这个值总是大于等于0，导致无限循环。
```
- 为了避免溢出，最好方法就是将运算结果与类型的极限值进行比较。
```c

unsigned int ui;
unsigned int sum;

// 错误
if (sum + ui > UINT_MAX) too_big();
else sum = sum + ui;
// 正确
if (ui > UINT_MAX - sum) too_big();
else sum = sum + ui;
上面示例中，变量sum和ui都是 unsigned int 类型，它们相加的和还是 unsigned int 类型，这就有可能发生溢出。但是，不能通过相加的和是否超出了最大值UINT_MAX，来判断是否发生了溢出，因为sum + ui总是返回溢出后的结果，不可能大于UINT_MAX。正确的比较方法是，判断UINT_MAX - sum与ui之间的大小关系。

// 下面是另一种错误的写法。
unsigned int i = 5;
unsigned int j = 7;
if (i - j < 0) // 错误
  printf("negative\n");
else
  printf("positive\n");
上面示例的运算结果，会输出positive。原因是变量i和j都是 unsigned int 类型，i - j的结果也是这个类型，最小值为0，0-1后会变回最大值，故不可能得到小于0的结果。正确的写法是写成下面这样。

if (j > i) // ....
```
### sizeof运算符
1. 定义：sizeof是 C 语言提供的一个运算符，返回某种数据类型或某个值占用的字节数量。它的参数可以是数据类型的关键字，也可以是变量名或某个具体的值。
```c
// 参数为数据类型
int x = sizeof(int);
printf("%d\n",x);
// 参数为变量
int i;
printf("%d\n",sizeof(i));

// 参数为数值
printf("%d\n",sizeof(3.14));//由于浮点数的字面量一律存储为 double 类型，所以会返回8
// 输出4 4 8
```
2. 返回值类型：C 语言提供了一个解决方法，创造了一个类型别名size_t，它是一个无符号的整数用来统一表示sizeof的返回值类型。该别名定义在stddef.h头文件（引入stdio.h时会自动引入）里面，对应当前系统的sizeof的返回值类型，可能是unsigned int，也可能是unsigned long。
- printf()有专门的占位符%zd或%zu，用来处理size_t类型的值。
```c
printf("%zd\n", sizeof(int));
上面代码中，不管sizeof返回值的类型是什么，%zd占位符（或%zu）都可以正确输出。

如果当前系统不支持%zd或%zu，可使用%u（unsigned int）或%lu（unsigned long int）代替。其实%d也行。
```
### 数据类型的转换
#### 隐形类型转换：隐式类型转换在编译时自动发生，通常是由于操作符的类型要求。
- 例一
```c
int a = 5;  
double b = 2.2;  
double result = a + b; // 这里发生了隐式类型转换
在这里，a被隐式转换为double类型，以便与b相加。
```
- 赋值运算
  1. 浮点数赋予整数变量时，C 语言直接丢弃小数部分，而不是四舍五入。`int x = 3.14;`上面示例中，变量x是整数类型，赋给它的值是一个浮点数。编译器会自动把3.14先转为int类型，丢弃小数部分，再赋值给x，因此x的值是3。
  - 这种自动转换会导致部分数据的丢失（3.14丢失了小数部分），所以最好不要跨类型赋值，尽量保证变量与所要赋予的值是同一个类型。
  2. 整数赋值给浮点数变量时，会自动转为浮点数。
  ```c
  float y = 12 * 2;
  上面示例中，变量y的值不是24，而是24.0，因为等号右边的整数自动转为了浮点数。
  ```
  3. 窄类型赋值给宽类型:字节宽度较小的整数类型，赋值给字节宽度较大的整数变量时，会发生类型提升，即窄类型自动转为宽类型。
  4. 宽类型赋值给窄类型:字节宽度较大的类型，赋值给字节宽度较小的变量时，会发生类型降级，自动转为后者的类型。这时可能会发生截值（truncation），系统会自动截去多余的二进制位，导致难以预料的结果。
  ```c
  int i = 321;
  char ch = i; // ch 的值是 65 （321 - 256）相当于对256取余
  上面例子中，变量ch是char类型，宽度是8个二进制位。变量i是int类型，将i赋值给ch，后者只能容纳i（二进制形式为101000001，共9位）的后八位，前面多出来的二进制位被丢弃，保留后八位就变成了01000001（十进制的65，相当于字符A）。
  浮点数赋值给整数类型的值，也会发生截值，浮点数的小数部分会被截去。
  ```
-  不同类型的值进行混合计算时，必须先转成同一个类型，才能进行计算。转换规则如下：
   1. 整数与浮点数混合运算时，整数转为浮点数类型，与另一个运算数类型相同。`3 + 1.2 // 4.2`
   2. 不同的浮点数类型混合运算时，宽度较小的类型转为宽度较大的类型，比如float转为double，double转为long double。
   3. 不同的整数类型混合运算时，宽度较小的类型会提升为宽度较大的类型。比如short转为int，int转为long等，有时还会将带符号的类型signed转为无符号unsigned。
   ```c
   下面例子的执行结果，可能会出人意料。

    int a = -5;
    if (a < sizeof(int))
      do_something();
    上面示例中，变量a是带符号整数，sizeof(int)是size_t类型，这是一个无符号整数。按照规则，signed int 自动转为 unsigned int，所以a会自动转成无符号整数4294967291（转换规则是-5加上无符号整数的最大值，再加1），导致比较失败，do_something()不会执行。

    所以，最好避免无符号整数与有符号整数的混合运算。因为这时 C 语言会自动将signed int转为unsigned int，可能不会得到预期的结果。
   ```
- 整数类型的运算：
  - 两个相同类型的整数运算时，或者单个整数的运算（改变符号或者自增/减），一般来说，运算结果也属于同一类型。但是有一个例外，宽度小于int的类型，运算结果会自动提升为int。
  ```c
  unsigned char a = 66;
  if ((-a) < 0) printf("negative\n");//-a为-66
  else printf("positive\n");
  上面示例中，变量a是 unsigned char 类型，这个类型不可能小于0，但是-a不是 unsigned char 类型，会自动转为 int 类型，导致上面的代码输出 negative。
  ```
- 函数：
   1. 函数的参数和返回值，会自动转成函数定义里指定的类型。
   ```c
   int dostuff(int, unsigned char);

  char m = 42;
  unsigned short n = 43;
  long long int c = dostuff(m, n);
  上面示例中，参数变量m和n不管原来的类型是什么，都会转成函数dostuff()定义的参数类型。
  下面是返回值自动转换类型的例子。
  char func(void) {
    int a = 42;
    return a;
  }
  上面示例中，函数内部的变量a是int类型，但是返回的值是char类型，因为函数定义中返回的是这个类型。
    ```
#### 显性类型转换；显式类型转换也称为强制类型转换或强制转换
1. 定义：原则上，应该避免类型的自动转换，防止出现意料之外的结果。C 语言提供了类型的显式转换，允许手动转换类型。
2. 格式：只要在一个值或变量的前面，使用圆括号指定类型(type)，就可以将这个值或变量转为指定的类型，这叫做“类型指定”（casting）。
```c
int a = 5;  
double b = (double)a; // 将整数a转换为double类型

long int y = (long int) 10 + 12;
上面示例中，(long int)将10显式转为long int类型。这里的显示转换其实是不必要的，因为赋值运算符会自动将右边的值，转为左边变量的类型。
```
### 可移植类型（以数据占用的大小去定义它，确保移植性）
1. C 语言的整数类型（short、int、long）**在不同计算机上，占用的字节宽度可能是不一样的，无法提前知道它们到底占用多少个字节。**
- 程序员有时要控制准确的字节宽度，这样的话，代码可以有更好的可移植性，头文件stdint.h创造了一些新的类型别名。**即可用其所占用的字节来定义这个数据的类型，而非传统意义上的int/long~**
2. 精确宽度类型(exact-width integer type)，保证某个整数类型的宽度是确定的。:
```
int8_t：8位有符号整数。占用一个字节
int16_t：16位有符号整数。占用2个字节
int32_t：32位有符号整数。以此类推~1个字节为8位
int64_t：64位有符号整数。~
uint8_t：8位无符号整数。
uint16_t：16位无符号整数。
uint32_t：32位无符号整数。
uint64_t：64位无符号整数。
上面这些都是类型别名，编译器会指定它们指向的底层类型。比如，某个系统中，如果int类型为32位，int32_t就会指向int；如果long类型为32位，int32_t则会指向long。(即以占用的字节数为标准，而非固定类型名称去定义数据的类型)
```
```c

#include <stdio.h>
#include <stdint.h>

int main(void) {
  int32_t x32 = 45933945;
  printf("x32 = %d\n", x32);
  return 0;
}
面示例中，变量x32声明为int32_t类型，可以保证是32位的宽度。
```
3. 最小宽度类型（minimum width type），保证某个整数类型的最小长度。
```
int_least8_t
int_least16_t
int_least32_t
int_least64_t
uint_least8_t
uint_least16_t
uint_least32_t
uint_least64_t
上面这些类型，可以保证占据的字节不少于指定宽度。比如，int_least8_t表示可以容纳8位有符号整数的最小宽度的类型。 

```
4. 最快的最小宽度类型（fast minimum width type），可以使整数计算达到最快的类型。
```c
int_fast8_t
int_fast16_t
int_fast32_t
int_fast64_t
uint_fast8_t
uint_fast16_t
uint_fast32_t
uint_fast64_t
上面这些类型是保证字节宽度的同时，追求最快的运算速度，比如int_fast8_t表示对于宽度大于8位的有符号整数，运算速度最快的类型。这是因为某些机器对于特定宽度的数据，运算速度最快，举例来说，32位计算机对于32位数据的运算速度，会快于16位数据。

```
4. 可以保存指针的整数类型。
```c
intptr_t：可以存储指针（内存地址）的有符号整数类型。
uintptr_t：可以存储指针的无符号整数类型。
```
5. 最大宽度整数类型，用于存放最大的整数。（不限大小）
```c
intmax_t：可以存储任何有效的有符号整数的类型。
uintmax_t：可以存放任何有效的无符号整数的类型。
上面的这两个类型的宽度比long long和unsigned long更大。
```
## 指针
1. 定义：它是一个值，这个值代表某个数据的内存地址，因此指针相当于指向某个数据的路标。
2. 字符`*表示指针，通常跟在类型关键字的后面，表示指针指向的是什么类型的值。比如，char*`表示一个指向字符的指针，float*表示一个指向float类型的值的指针。
```c
int* intPtr;
- 上面示例声明了一个变量intPtr，它是一个指针，指向的内存地址存放的是一个整数。
星号*可以放在变量名与类型关键字之间的任何地方，下面的写法都是有效的。
int   *intPtr;
int * intPtr;
int*  intPtr;
- 如果同一行声明两个指针变量，那么需要写成下面这样：
// 正确
int * foo, * bar;

// 错误
int* foo, bar;//foo是指针变量，bar是一个整数变量
```
- 一个指针指向的可能还是指针，这时就要用两个星号**表示。
```c
int** foo;
任何数据包括指针在代码运行时都会为其分配内存空间，否则它就是不存在的；故指针也有其所属的内存空间。
上面示例表示变量foo是一个指针，指向的还是一个指针，它所指向的指针指向的则是一个整数。
```
3.  `* 运算符 `
    1.  *这个符号除了表示指针以外，还可以作为运算符，用来取出指针变量所指向的内存地址里面的值。
   ```c
   void increment(int* p) {
    *p = *p + 1;
  }
  上面示例中，函数increment()的参数是一个整数指针p。函数体里面，*p就表示指针p所指向的那个值。对*p赋值，就表示改变指针所指向的那个地址里面的值。

  上面函数的作用是将指针p所指向的整数数据加1。该函数没有返回值，因为传入的是地址，函数体内部对该地址包含的值的操作，会影响到函数外部数据的值，所以不需要返回值，节省了空间。事实上，函数内部通过指针，改变函数外部数据的值，是 C 语言的常用方法。
  那为什么不直接将数据作为参数传入，然后对其更改呢？
  变量地址而不是变量值传入函数，还有一个好处。对于需要大量存储空间的大型变量，复制变量值传入函数，非常浪费时间和空间，不如传入指针来得高效。
   ```
4. & 运算符
   1. 定义：&运算符用来取出一个变量所在的内存地址。
   ```c
   int x = 1;
   printf("x's address is %p\n", &x);
   上面示例中，x是一个整数变量，&x就是x的值所在的内存地址。printf()的%p是内存地址的占位符，可以打印出内存地址。

   上一小节中，参数变量加1的函数，可以像下面这样使用。
   void increment(int* p) {
     *p = *p + 1;
   }

   int x = 1;
   increment(&x);//不需要定义指针变量，直接用&x表示x的内存地址
   printf("%d\n", x); // 2
   ```
   2. &运算符与*运算符互为逆运算，下面的表达式总是成立。：i == *(&i)
   ```c
   int i = 5;
   if (i == *(&i)) // 正确
   ```
5. 指针变量的初始化
   1. 声明指针变量之后，编译器会为指针变量本身分配一个内存空间，但是这个内存空间里面的值是随机的，并且指针变量指向的值也是随机的。这时一定不能去读写指针变量指向的地址，因为那个地址是随机地址，很可能会导致严重后果。
  ```c
  int * b;
  printf("%p",b);//00380000 00321000 003DC000每次的结果都不一样，说明还未指定指针变量所指的数据时，指针变量指向的值也是随机的
  int* p;
  *p = 1; // 错误
  上面的代码是错的，因为p指向的那个地址是随机的，向这个随机地址里面写入1，会导致意想不到的结果。比如电脑系统被改~
  //根据以下代码的结果可以发现为b所指向的数据所属的内存空间不是编译器为b分配的内存空间；即指针b未初始化时b不是指向自己
  int * b;
  int **d;
  d=&b;
  printf("b所指向的数据的内存地址=%p,b的内存地址=%p\n",b,d);
  ```
  2. 正确做法是指针变量声明后，必须先让它指向一个分配好的地址，然后再进行读写，这叫做指针变量的初始化。
   ```c
    int* p;
    int i;
    p = &i;
    *p = 13;
    上面示例中，p是指针变量，声明这个变量后，p会指向一个随机的内存地址。这时要将它指向一个已经分配好的内存地址，上例就是再声明一个整数变量i，编译器会为i分配内存地址，然后让p指向i的内存地址（p = &i;）。完成初始化之后，就可以对p指向的内存地址进行赋值了（*p = 13;）。
   ```
   3. 为了防止读写未初始化的指针变量，可以养成习惯，将未初始化的指针变量设为NULL。
   ```c
   int* p = NULL;
  NULL在 C 语言中是一个常量，表示地址为0的内存空间，这个地址是无法使用的，读写该地址会报错。vscode编译不会报错,但是什么都输出不了
  int* p = NULL;
  printf("%p,%d",p,*p);
  printf("?");
  return 0;
   ```
   -  关于直接申明指针变量`int *b`和 动态分配空间`int *b = (int *)malloc(sizeof(int)); `的区别：
     
      ```c
       for (int i = 0; i <= 100; i++) {
           int *b = (int *)malloc(sizeof(int)); // 分配内存空间
           if (b == NULL) {
               printf("Memory allocation failed.\n");
               return 1;
           }
           printf("%p,%d\n", b, *b); // 输出指针和整数值
       }
       //运行结果为Memory allocation failed.
       为什么？
       因为变量b被声明为指针类型，但没有分配内存空间。
       在循环外直接申明指针变量`int *b`编译器是会为其随机分配内存空间的，但在循环内是实现不了，因为指针b将只有一个内存地址，用于存储一个整数。在循环中，由于我们并没有将指针b的值保存下来，每次迭代开始时，指针b都被重新赋值为一个新的整数的地址。每次迭代都会覆盖这个内存地址，导致之前存储的整数丢失。因此，之前存储的整数的地址就被覆盖掉了。因此，在这种情况下，指针b无法为每个整数分配独立的内存空间。所以b==null；

       而如下代码很好地解决了这个问题
       
       for (int i = 0; i <= 100; i++) {
           int *b = (int *)malloc(sizeof(int)); // 分配内存空间
           if (b == NULL) {
               printf("Memory allocation failed.\n");
               return 1;
           }
        
           printf("%p,%d\n", b, *b); // 输出指针和整数值
       }
      
       
      这段代码每此循环迭代都使用malloc(sizeof(int))动态分配内存空间，它会在堆上动态地分配一块连续的内存区域，并将该区域的首地址赋值给指针b。这样，指针b就指向了这段分配的内存区域。这样，在每次迭代中，指针b都会有一个新的内存地址，可以存储一个新的整数。
      如果我们想要在循环中保留每个整数的地址，可以使用数组来存储这些整数。这样，每个整数都会在栈上分配固定的内存空间，并且它们的地址是连续的。我们可以使用指针来访问和操作这些整数。
      ```


## 预编译
1. 定义：凡是以 # 开头的均为预处理指令，预处理又叫预编译。预编译不是编译，而是编译前的处理。这个操作是在正式编译之前由系统自动完成的 ?
```c
#include<stdio.h>
#define x 'x'
```
## 字符串
### 常用函数：
1. getchar()
### 常见应用
1. 遍历字符串
```c
int main(){
  char src[MAX_SIZE] = {0};
    gets(src);
   int len = strlen(src);
  for(int i=0;i<len;i++)
  {
    printf("%c\n",src[i]);
  }
}

```
## 常见报错+警告
1. [Error] ld returned 1 exit status
原因：
```
1.程序没有主函数
2.printf/scanf书写错误
3.1在主函数中出现自定义函数名书写错误（即出现在主函数前未出现的自定义函数）
3.2当自定义函数只进行了声明而未赋值，主函数便进行调用
4.上一个运行结果未关闭
```
### 警告:c语言中有些代码执行时会警告，但是不会报错，仍然可以执行
1. switch condition has boolean value [-Wswitch-bool]
```c
switch (1>0)
{
case '0':
    printf("t");
    break;

default:
    printf("f");
    break;
}
```
