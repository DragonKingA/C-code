// int main(){
//     int num;
//     scanf("%d",&num);
//     char char0 = num;
//     printf("%c",char0);
//     return 0;
// }

// int main(){
//     printf("        ********\n");
//     printf("       ************\n");
//     printf("       ####....#.\n");
//     printf("     #..###.....##....\n");
//     printf("     ###.......######\n");
//     printf("        ...........\n");
//     printf("       ##*#######\n");
//     printf("    ####*******######\n");
//     printf("   ...#***.****.*###....\n");
//     printf("   ....**********##.....\n");
//     printf("   ....****    *****....\n");
//     printf("     ####        ####\n");
//     printf("   ######        ######\n");
//     return 0;
// }


// int main(){
//     int a1,a2,n;
//     scanf("%d %d %d",&a1,&a2,&n);//d=a2-a1,an=a1+(n-1)(a2-a1)
//     printf("%d",a1+(n-1)*(a2-a1));
//     return 0;
// }

// int main(){
//     int num;
//     scanf("%d",&num);
//     if(num>=100 && num<=999){
//         printf("%d%d%d",num%10,(num/10)%10,num/100);
//     }
//     return 0;
// }

// *****************注意题目数值范围   1 <= A,B <= 50000 ,
// 则A*B <= 2500000000已经超过int类型数据范围 -2147483648～+2147483647 即 [-2^31 , 2^31 - 1]
// #include <stdio.h>
// int main(){
//     long long a,b;
//     scanf("%lld %lld",&a,&b);
//     printf("%lld\n",a*b);
//     return 0;
// }

// int main(){
//     int n1,n2,n3;
//     scanf("%d %d %d",&n1,&n2,&n3);
//     printf("%d",n2);
//     return 0;
// }

// c语言printf()用%f输出double型，而scanf却用%lf

// int main(){
//     double num;
//     scanf("%lf",&num);
//     printf("%.3f\n",num);
//     return 0;
// }

// int main(){
//     double num;
//     scanf("%lf",&num);
//     printf("%.12f\n",num);
//     return 0;
// }


// #include <stdio.h>
// int main(){
//   int F;
//   scanf("%d",&F);
//   int C=5*(F-32)/9;
//   printf("Celsius = %d\n",C);//
//   return 0;
// }



// #include <stdio.h>
// int main(){
//   int x;
//   scanf("%d",&x);
//   if(x==0){
//   	printf("f(0.0) = 0.0");
//   }else{
//     printf("f(%.1f) = %.1f",1.0*x,1.0/x);
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(){
//   int num;
//   scanf("%d",&num);
//   if(num >= 100 && num <= 999){
//     printf("%d = %d + %d*10 + %d*100\n",num,num%10,(num/10)%10,num/100);
//   }else{
//     printf("Invalid Value.\n");
//   }
//   return 0;
// }

// #include <stdio.h>
// int main(){
//     int getill,death;
//     scanf("%d %d",&getill,&death);
//     printf("%.3f%%\n",100.0*death/(getill));
//     return 0;
// }

// #include <stdio.h>
// int *p;
// void f(int *x){
//     if(*x >= 0 && *x <= 100){
//             if(*x >= 90 && *x <= 100){
//                 printf("A\n");
//                 //continue;
//             }else if(*x >= 80 && *x <= 89){
//                 printf("B\n");
//                 //continue;
//             }else if(*x >= 70 && *x <= 79){
//                 printf("C\n");
//                 //continue;
//             }else if(*x >= 60 && *x <= 69){
//                 printf("D\n");
//                 //continue;
//             }else{
//                 printf("E\n");
//                 //continue;
//             }
//         }else{
//             printf("Score is error!\n");
//             //continue;
//         }
// }
// int main(){
//     //????
//     int x;
//     //char key;
//     while(1){
        
//         //rewind(stdin);
//         scanf("%d",&x);
//         //fflush(stdin);
//         p = &x;
//         //printf("%d",*p);
//         // if(x < 0 || x > 100){
//         //     printf("Score is error!\n");
//         //     continue;
//         // }
//         // switch(x/10){
//         //     case 10:
//         //     case 9:
//                 // printf("A\n");
//                 // break;
//         //     case 8:
//         //         printf("B\n");
//         //         break;
//         //     case 7:
//         //         printf("C\n");
//         //         break;
//         //     case 6:
//         //         printf("D\n");
//         //         break;
//         //     case 5:
//         //     case 4:
//         //     case 3:
//         //     case 2:
//         //     case 1:
//         //     case 0:
//         //         printf("E\n");
//         //         break;
//         // }
        
//         // if(x >= 0 && x <= 100){
//         //     if(x >= 90 && x <= 100){
//         //         printf("A\n");
//         //         continue;
//         //     }else if(x >= 80 && x <= 89){
//         //         printf("B\n");
//         //         continue;
//         //     }else if(x >= 70 && x <= 79){
//         //         printf("C\n");
//         //         continue;
//         //     }else if(x >= 60 && x <= 69){
//         //         printf("D\n");
//         //         continue;
//         //     }else{
//         //         printf("E\n");
//         //         continue;
//         //     }
//         // }else{
//         //     printf("Score is error!\n");
//         //     continue;
//         // }


//     f(p);

//         //while (getchar() != '\n');
//         // if(key =='\n'){
//         //     break;
//         // }
//         //rewind(stdin);
        
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n,num=1;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         num *= 2; 
//     }
//     printf("%d",num);
//     return 0;
// }



// 水仙花数
// #include <stdio.h>
// int main(){
//     int a,b,c,min,max,count=0;
//     while(scanf("%d %d",&min,&max) != EOF){
//         for(int i=min;i<=max;i++){
//             a = i/100;
//             b = i/10%10;
//             c = i%10;
//             if(i == a*a*a + b*b*b + c*c*c){
//                 if(count++ > 0){
//                     printf(" %d",i);
//                 }else{
//                     printf("%d",i);
//                 }
//             }
//         }
//         if(count == 0){printf("no\n");}else{printf("\n");}
//         count = 0;
//     }
//     return 0;
// }



// 求奇数的乘积
// #include <stdio.h>
// int n,sum=1;
// int main(){
//     while(scanf("%d",&n) != EOF){
//         for(int i=0;i<n;i++){
//             int num;
//             scanf(" %d",&num);
//             if(num % 2 != 0){
//                 sum *= num;
//             }
//         }
//         printf("%d\n",sum);
//         sum = 1;
//     }
//     return 0;
// }



// ASCII码排序
// #include <stdio.h>
// int main(){
//     char arr[3];
//     char temp;
//     int ch;
//     while(scanf("%c%c%c",&arr[0],&arr[1],&arr[2]) != EOF){   
//         for(int i=0;i<2;i++){   
//             if(arr[i] > arr[i+1]){
//                 temp = arr[i+1];
//                 arr[i+1]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//         if(arr[0]>arr[1]){
//             temp = arr[1];
//             arr[1]=arr[0];
//             arr[0]=temp;
//         }
//         printf("%c %c %c\n",arr[0],arr[1],arr[2]);
//         while((ch = getchar()) != '\n' && ch != EOF);
//         //出现程序不按输入的东西来执行时要这样清理缓存区，将以前缓存的东西清除才能接收下次循环scanf接收的变量或值
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char *a,*b,*c;
//     char j,k,l;
//     char temp;
//     int ch;
//     while(scanf("%c%c%c",&j,&k,&l) != EOF){   
//         a=&j;
//         b=&k;
//         c=&l;
//         printf("%c %c %c\n",*a,*b,*c);
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// 1.以下是简单的多组输入所用的模板：*********************************************************************************************************************************************************
// #include <stdio.h>
// int main(){
//     while(scanf("",) != EOF){   

//     }
//     return 0;
// }
// *****************************************************************************************************************************************************************************************
// 2.以下是清空缓存区模板(当模板1出问题时才用)：***********************************************************************************************************************************************
// #include <stdio.h>
// int main(){
  
//     int ch;
//     while(scanf("",) != EOF){   
        
//         while((ch = getchar()) != '\n' && ch != EOF);//该句可能会导致Summit Failed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     }
//     return 0;
// }
// *****************************************************************************************************************************************************************************************



// 求两点间距离
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double x1,x2,y1,y2;//题目说是4个实数，也就是可能为小数，因此要注意审题！！！！！！！！！！！！！！
//     int ch;
//     while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) != EOF){   
//         printf("%.2f\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// 求球的体积
// #define PI 3.1415927
// #include <stdio.h>
// int main(){
//     int ch;
//     double r;
//     while(scanf("%lf",&r) != EOF){   
//         printf("%.3f\n",(4.0/3)*PI*r*r*r);//不能是(4/3)，如果这样就只剩下1，而不是小数
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// 求实数（含小数，不能用abs函数）的绝对值
// #include <stdio.h>
// int main(){
//     double num;
//     int ch;
//     while(scanf("%lf",&num) != EOF){   
//         if(num < 0){
//             num = -num;
//         }
//         printf("%.2f\n",num);
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// YYYY/MM/DD日期 转 总天数
// #include <stdio.h>
// int main(){
//     int year,month,day,sum=0,Feburary=0;
//     int ch;
//     while(scanf("%d/%d/%d",&year,&month,&day) != EOF){   
//         if((year%4==0 && year%100!=0) || year%400==0){
//             Feburary = 29;
//         }else{
//             Feburary = 28;
//         }
//         switch(month-1){
//             case 12:sum+=31;
//             case 11:sum+=30;
//             case 10:sum+=31;
//             case 9:sum+=30;
//             case 8:sum+=31;
//             case 7:sum+=31;
//             case 6:sum+=30;
//             case 5:sum+=31;
//             case 4:sum+=30;
//             case 3:sum+=31;
//             case 2:sum+=Feburary;
//             case 1:sum+=31;
//         }
//         printf("%d\n",sum+day);
//         sum = 0;
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



//范围内奇数求立方求和，偶数求平方求和
// #include <stdio.h>
// int main(){
//     int m,n,x=0,y=0,t;
//     int ch;
//     while(scanf("%d %d",&m,&n) != EOF){
//         //题目：输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
//         //故没有规定m>n或n>m，只说了是由两个整数组成而不一定是有序的，所以需要自行判断，防止循环出错
//         //注意审题！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
//         if(m>n){
//             t = n;
//             n = m;
//             m = t;
//         }
//         for(int i=m;i<=n;i++){
//             if(i % 2 == 0){
//                 x += i*i;
//             }else{
//                 y += i*i*i;
//             }
//         }
//         printf("%d %d\n",x,y);
//         x=0;
//         y=0;
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// 求数据中负数、零和正数的个数
// #include <stdio.h>
// int main(){
//     double num=0;
//     int ch,n=0;
//     while(scanf("%d",&n) != EOF,n){
//         // if(n==0){
//         //     continue;
//         // }
//         int a=0,b=0,c=0;
//         for(int i=0;i<n;i++){
//             scanf("%lf",&num);
//             if(num < 0){
//                 a++;
//             }else if(num == 0){
//                 b++;
//             }else{
//                 c++;
//             }
//             num=0;
//         }
//         printf("%d %d %d\n",a,b,c);
//         //while((ch = getchar()) != '\n' && ch != EOF);//该句可能会导致Summit Failed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     }
//     return 0;
// }
// 以上为submit failed
// 以下为Accepted：
// #include <stdio.h>
// int main(){
//     double num=0;
//     int a,b,c,n=0;
//     while(scanf("%d",&n) != EOF,n){
//         a=0,b=0,c=0;
//         for(int i=0;i<n;i++){
//             scanf("%lf",&num);
//             if(num < 0){
//                 a++;
//             }else if(num == 0){
//                 b++;
//             }else{
//                 c++;
//             }
//             num=0;
//         }
//         printf("%d %d %d\n",a,b,c);
//     }
//     return 0;
// }



/*
多组数据输入的循环小知识：

while(scanf("%d",&n),n）	当n为0时中止循环
while(scanf("%d",&n))	    无输入时，终止循环
while(scanf("%d",&n)！=EOF)	读到文件结尾时中止循环
while(~scanf("%d",&n)）	    读到文件结尾时中止循环
while(scanf("%d",&n)==1)	赋值失败，跳出循环

*/



// 平方根数列的求和
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,m;
//     double t=0,sum=0;
//     //int ch;
//     while(scanf("%d %d",&n,&m) != EOF && n>=0 && m>0){   
//         sum = n;
//         t = n;
//         for(int i=2;i<=m;i++){
//             t = sqrt(t);
//             sum += t;
//         }
//         printf("%.2f\n",sum);
//         //while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// 求和1-1/2+1/3-…………
// #include <stdio.h>
// int main(){
//     double sum = 0;
//     int m,n;
//     scanf("%d",&m);
//     while(m>0 && scanf("%d",&n) != EOF && n>0,m--){  
//         for(int i = 1;i<=n;i++){
//             if(i % 2 == 0){
//                 sum -= 1.0 / i;
//             }else{
//                 sum += 1.0 / i;
//             }
//         }
//         printf("%.2f\n",sum);
//         sum = 0;
//     }
//     return 0;
// }



// 判断一个范围内取值的函数值是否全为素数
// #include <stdio.h>
// #include <math.h>
// int isPrime(int num){//1为素数，0为非素数
//     int ret = 1;
//     if(num % 2 != 0){
//         for(int j=3;j<sqrt(num);j++){
//             if(num % j == 0){
//                 ret = 0;
//             }
//         }
//     }else{
//         ret = 0;
//     }
//     return ret;
// }
// int main(){
//     int x,y,t,f;
//     while(scanf("%d %d",&x,&y) != EOF && (x != 0 || y != 0)){   
//         int ifall=1;
//         if(x>y){
//             t = y;
//             y = x;
//             x = t;
//         }
//         for(int i=x;i<=y;i++){
//             f = i*i + i + 41;  
//             if(isPrime(f) == 0){
//                 printf("Sorry\n");
//                 ifall = 0;
//                 break;
//             }
//         }
//         if(ifall){
//             printf("OK\n");
//         }
//     }
//     return 0;
// }



// 猴吃蟠桃
// #include <stdio.h>
// int main(){
//     int n;  
//     while(scanf("%d",&n) != EOF){
//         int whole=1;
//         for(int i=0;i<n-1;i++){
//             whole = 2*(whole+1);
//         }
//         printf("%d\n",whole);
//     }
//     return 0;
// }



// 除去一组数最大和最小值，并取其余数平均值
// #include <stdio.h>
// int main(){
//     int n;//sum-= min+max
//     int arr[100];
//     while(scanf("%d",&n) != EOF){
//         int num,temp,sum=0;
//         for(int i=0;i<n;i++){//99 60 101
//             scanf("%d",&num);
//             arr[i]=num;
//             sum+=num;
//         }
//         for(int j=0;j<n-1;j++){
//             for(int i=0;i<n-1-j;i++){
//                 if(arr[i] > arr[i+1]){
//                     temp=arr[i+1];
//                     arr[i+1]=arr[i];
//                     arr[i]=temp;
//                 }
//             }
//         }
//         sum -= arr[0] + arr[n-1];
//         printf("%.2f\n",1.0*sum/(n-2));
//         //初始化arr
//         for(int z=0;z<n;z++){
//             arr[z]=0;
//         }
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){//判断m<=n？？？？？？？？？？？？？？？？？？？？？？？？？？？？？
//     int n,m,average;
//     int arr[100];
//     while(scanf("%d %d",&n,&m) != EOF){ 
//         int sum=0;
//         //输入n个偶数
//         for(int i=0;i<n;i++){
//             arr[i] = (i+1)*2;
//         }
//         for(int i=1,j=0;i<=n/m;i++){//3次
//             if(i == n/m){
//                 for(;j<n;j++){//j=4
//                 sum+=arr[j];
                
//                 }
//                 average = sum/(n-m*i);
//             }else{
//                 for(;j<m*i;j++){
//                 sum+=arr[j];
//                 }
//                 average = sum/m;
//             }           
//             if(i==1){
//                 printf("%d",average);
//                 sum=0;
//             }else{
//                 printf(" %d",average);
//                 sum=0;
//             }
//         }
//         // for(int i=0;i<n/m;i++){
//         //     for(int j=0;j<m;j++){
//         //         sum+=arr[j];
//         //     }
//         //     if(i==0){
//         //         printf("%d",sum/m);
//         //     }else{
//         //         printf(" %d",sum/m);
//         //     }
//         //     if(n%2 != 0 && i == n/m - 1){
//         //         for(int z=(i+1)*m + 1;z<n;z++){
//         //             sum+=arr[z];
//         //         }
//         //         printf(" %d",sum/(n-(i+1)*m));
//         //     }     
//         // }
//         //初始化数组,需要吗
//         for(int i=0;i<n;i++){
//             arr[i]=0;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// WA



// 偶数数列求局部平均
// #include <stdio.h>
// int main(){
//     int arr[100];
//     int len,m,average=0,sum=0,times=0;
//     while(scanf("%d %d",&len,&m) != EOF){ 
//         average = 0;
//         for(int i=0;i<len;i++){
//             arr[i]=2*(i+1);
//         }
//         if(len % m != 0){
//             times = len/m + 1;
//         }else{
//             times = len/m;
//         }
//         for(int i=0;i<times;i++){
//             if(len%m != 0 && i==times - 1){
//                 for(int j=0;j<len%m;j++){
//                     sum += arr[j+m*i];
//                 }
//                 average = sum/(len%m);
//             }else{
//                 for(int z=0;z<m;z++){
//                     sum+=arr[z+m*i];
//                 }
//                 average = sum/m;           
//             }
//             sum = 0;
//             if(i==times - 1 ){
//                     printf("%d\n",average);
//             }else{
//                     printf("%d ",average);
//             }
//         }
//     }
//     return 0;
// }



// 一组数据最小者与最前面的数交换
// #include <stdio.h>
// int main(){
//     int n,num,min,temp;
//     int arr[99];
//     int arr_t[99];
//     while(scanf("%d",&n) != EOF,n){   
//         num = 0;
//         for(int i=0;i<n;i++){
//             scanf("%d",&num);
//             arr[i]=num;
//         }
//         min = arr[n-1];
//         for(int m=0;m<n;m++){
//             arr_t[m]=arr[m];
//         }
//         for(int j=0;j<n-1;j++){
//             if(arr_t[j]<arr_t[j+1]){
//                 min = arr_t[j];
//                 temp = arr_t[j+1];
//                 arr_t[j+1]=arr_t[j];
//                 arr_t[j]=temp;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(arr[i]==min){
//                 temp=arr[0];
//                 arr[0]=arr[i];
//                 arr[i]=temp;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(i == n-1){
//                 printf("%d",arr[i]);
//             }else{
//                 printf("%d ",arr[i]);
//             }
            
//         }

//         printf("\n");
//     }
//     return 0;
// }
//另类方法可能可以记住最小数的Index以此做文章



//将一个数插入定长的有序数列
// #include <stdio.h>
// int main(){
//     int n,m,index,g;
//     int num;
//     int arr1[100];
//     int arr2[101];
//     while(scanf("%d %d",&n,&m) != EOF && (n>0 || m!=0)){   
//         index=n;
//         g=0;
//         for(int i=0;i<n;i++){
//             scanf("%d",&num);
//             arr1[i]=num;
//         }
//         for(int i=0;i<n;i++){
//             if(m < arr1[i]){
//                 arr2[i]=m;
//                 index=i;
//                 break;
//             }else if(i==n-1){
//                 arr2[n]=m;
//                 break;
//             }
//         }
//         for(int i=0;i<n+1;i++){
//             if(i == index){
//                 g = 1;
//                 i++;
//             }
//             if(g==1){
//                 arr2[i]=arr1[i-1];
//             }else{
//                 arr2[i]=arr1[i];
//             }        
//         }
//         for(int i=0;i<n+1;i++){
//             if(i==0){
//                 printf("%d",arr2[i]);
//             }else{
//                 printf(" %d",arr2[i]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



//字符串内数字个数的统计
// char c = '1';
// char b = 1;
// printf("c=%d\n",c);//49
// printf("b=%d\n",b);//1
// printf("c=%c\n",c);//1
// printf("b=%c\n",b);//无输出
//取一个含字符0~9的判定数组，用于判定另外一个数组是否含常数char
//char judge[]={'0','1','2','3','4','5','6','7','8','9'};
//直接比较ASCII码大小，'0'~'9'
// scanf("%d",&n);
// getchar();
//printf("strlen=%lu",strlen(str));
// for(int i=0;i<n;i++){
//     scanf("%c",&c);
//     getchar();
// }
    /*getchar——读取字符的函数
    int getchar(void)
    返回类型为int,参数为void.
    有人可能会有疑惑，getchar既然是读取字符的，为什么返回类型是int呢？
    1、getchar其实返回的是字符的ASCII码值（整数）。
    2、getchar在读取结束或者失败的时候，会返回EOF。
    EOF意思是end of file,本质上是-1.
    */
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,count=0;
//     char c;
//     while(scanf("%d",&n)!=EOF && getchar()){
//         while((c = getchar()) != '\n' && c != EOF){
//             printf("c=%c\n",c);
//             if(c >= '0' && c <= '9'){
//                 count++;
//             }
            
//         }
//         printf("%d\n",count);
//         count=0;
//         if(--n == 0 && fflush(stdin) != EOF)break;
//     }  
//     return 0;
// }
//求字符串中数字的个数 Accepted:
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,count;
//     char c;
//     scanf("%d\n",&n);
//     while(count=0,n--){
//         while((c = getchar()) != '\n' && c != EOF){
//             if(c >= '0' && c <= '9')count++;
//         }
//         printf("%d\n",count);   
//     }  
//     return 0;
// }



//绝对值由大到小排序
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,num,temp;
//     int arr[100];
//     while(scanf("%d",&n) != EOF,n){
//         for(int i=0;i<n;i++){
//             arr[i]=0;
//         }
//         for(int i=0;i<n;i++){
//             scanf("%d",&num);
//             arr[i]=num;
//         }
//         for(int i=0;i<n-1;i++){
//             for(int j=0;j<n-1-i;j++){
//                 if(abs(arr[j])<abs(arr[j+1])){
//                     temp = arr[j+1];
//                     arr[j+1]=arr[j];
//                     arr[j]=temp;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(i == n-1){
//                 printf("%d",arr[i]);
//             }else{
//                 printf("%d ",arr[i]);
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }



//母牛的故事
/*
下标 0 1 2 3 4 5 6 7 8 9 ···
牛否 1 1 0 0 0 0 0 0 0 0
年龄 4 1 0 0 0 0 0 0 0 0

总牛数可以用 年龄叠加 推出
第一只牛的年龄需要减去？

直接用年龄数组？
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 4 1 0 0 0 0 0 0 0 0 ···

年龄为0就是没牛，大于0就是有牛，对于 非0元素 - 4 即该牛总共生产牛数
年龄超过4后，每加1就某个下标的年龄从0变成1
第一头牛产牛数特别计算即可，从第二头牛年龄算起
//生下来，3年后，第4年就生另一头
第一年 1 牛  3-3 + 1 = 1
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 3 0 0 0 0 0 0 0 0 0 ···

第二年 2 牛  4-3 + 1 = 2
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 4 1 0 0 0 0 0 0 0 0 ···

第三年 3 牛  5-3 + 1 = 3
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 5 2 1 0 0 0 0 0 0 0 ···

第四年 4 牛  6-3 + 1 = 4
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 6 3 2 1 0 0 0 0 0 0 ···

第五年 6 牛  7-3 + 4-3 + 1 = 6
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 7 4 3 2 1 1 0 0 0 0 ···

第六年 9 牛  8-3 + 5-3 + 4-3 + 1 = 9
下标 0 1 2 3 4 5 6 7 8 9 ···
年龄 8 5 4 3 2 2 1 1 1 0 ···

第七年 13 牛  
下标 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18···
年龄 9 6 5 4 3 3 2 2 2 1  1  1  1

第八年 19 牛  
下标 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18···
年龄10 7 6 5 4 4 3 3 3 2  2  2  2  1  1  1  1  1  1

第九年 28 牛  
下标 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18···
年龄11 8 7 6 5 5 4 4 4 3  3  3  3  2  2  2  2  2  2···
*/
// #include <stdio.h>
// int main(){
//     int year;
//     long long int sum;
//     long long int temp;
//     long long int AgeOfCow[10000];
//     //cowIndex用于记录下次产的牛于数组的索引
//     while(scanf("%d",&year) != EOF,year){   
        
//         sum=1;
//         temp=sum=1;
//         AgeOfCow[0]= 3;
//         for(long long int i=1;i<10000;i++){
//             AgeOfCow[i]=0;
//         }

//         for(long long int i=1;i<year;i++){//除去第一年
// //year = 2 -- >sum=2 
// //year = 3 -- >sum=3
// //year = 4 -- >sum=4
// //year = 5 -- >sum=
// //···
//             for(long long int j=0;j<sum;j++){
//                 AgeOfCow[j]++;
//                 if(AgeOfCow[j] > 3){
//                     AgeOfCow[temp]++;
//                     temp++;
//                 }
//             }
//             sum = temp;
//         }
        
//         //计算到第year年总牛数sum
//         // for(int i=0;i<cowIndex;i++){
//         //     if(AgeOfCow[i]>3){
//         //         sum += AgeOfCow[i] - 3;
//         //     }
//         // }
//         printf("%lld\n",sum);

//     }
//     return 0;
// }
//为什么输出溢出（0<year<55）不能覆盖全部year
//使用递归····



//







