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

// *****************ע����Ŀ��ֵ��Χ   1 <= A,B <= 50000 ,
// ��A*B <= 2500000000�Ѿ�����int�������ݷ�Χ -2147483648��+2147483647 �� [-2^31 , 2^31 - 1]
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

// c����printf()��%f���double�ͣ���scanfȴ��%lf

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



// ˮ�ɻ���
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



// �������ĳ˻�
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



// ASCII������
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
//         //���ֳ��򲻰�����Ķ�����ִ��ʱҪ������������������ǰ����Ķ���������ܽ����´�ѭ��scanf���յı�����ֵ
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



// 1.�����Ǽ򵥵Ķ����������õ�ģ�壺*********************************************************************************************************************************************************
// #include <stdio.h>
// int main(){
//     while(scanf("",) != EOF){   

//     }
//     return 0;
// }
// *****************************************************************************************************************************************************************************************
// 2.��������ջ�����ģ��(��ģ��1������ʱ����)��***********************************************************************************************************************************************
// #include <stdio.h>
// int main(){
  
//     int ch;
//     while(scanf("",) != EOF){   
        
//         while((ch = getchar()) != '\n' && ch != EOF);//�þ���ܻᵼ��Summit Failed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     }
//     return 0;
// }
// *****************************************************************************************************************************************************************************************



// ����������
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double x1,x2,y1,y2;//��Ŀ˵��4��ʵ����Ҳ���ǿ���ΪС�������Ҫע�����⣡��������������������������
//     int ch;
//     while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2) != EOF){   
//         printf("%.2f\n",sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// ��������
// #define PI 3.1415927
// #include <stdio.h>
// int main(){
//     int ch;
//     double r;
//     while(scanf("%lf",&r) != EOF){   
//         printf("%.3f\n",(4.0/3)*PI*r*r*r);//������(4/3)�����������ֻʣ��1��������С��
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



// ��ʵ������С����������abs�������ľ���ֵ
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



// YYYY/MM/DD���� ת ������
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



//��Χ��������������ͣ�ż����ƽ�����
// #include <stdio.h>
// int main(){
//     int m,n,x=0,y=0,t;
//     int ch;
//     while(scanf("%d %d",&m,&n) != EOF){
//         //��Ŀ���������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�
//         //��û�й涨m>n��n>m��ֻ˵����������������ɶ���һ��������ģ�������Ҫ�����жϣ���ֹѭ������
//         //ע�����⣡������������������������������������������������������������������������
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



// �������и�������������ĸ���
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
//         //while((ch = getchar()) != '\n' && ch != EOF);//�þ���ܻᵼ��Summit Failed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     }
//     return 0;
// }
// ����Ϊsubmit failed
// ����ΪAccepted��
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
�������������ѭ��С֪ʶ��

while(scanf("%d",&n),n��	��nΪ0ʱ��ֹѭ��
while(scanf("%d",&n))	    ������ʱ����ֹѭ��
while(scanf("%d",&n)��=EOF)	�����ļ���βʱ��ֹѭ��
while(~scanf("%d",&n)��	    �����ļ���βʱ��ֹѭ��
while(scanf("%d",&n)==1)	��ֵʧ�ܣ�����ѭ��

*/



// ƽ�������е����
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



// ���1-1/2+1/3-��������
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



// �ж�һ����Χ��ȡֵ�ĺ���ֵ�Ƿ�ȫΪ����
// #include <stdio.h>
// #include <math.h>
// int isPrime(int num){//1Ϊ������0Ϊ������
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



// ������
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



// ��ȥһ����������Сֵ����ȡ������ƽ��ֵ
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
//         //��ʼ��arr
//         for(int z=0;z<n;z++){
//             arr[z]=0;
//         }
//     }
//     return 0;
// }



// #include <stdio.h>
// int main(){//�ж�m<=n����������������������������������������������������������
//     int n,m,average;
//     int arr[100];
//     while(scanf("%d %d",&n,&m) != EOF){ 
//         int sum=0;
//         //����n��ż��
//         for(int i=0;i<n;i++){
//             arr[i] = (i+1)*2;
//         }
//         for(int i=1,j=0;i<=n/m;i++){//3��
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
//         //��ʼ������,��Ҫ��
//         for(int i=0;i<n;i++){
//             arr[i]=0;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// WA



// ż��������ֲ�ƽ��
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



// һ��������С������ǰ���������
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
//���෽�����ܿ��Լ�ס��С����Index�Դ�������



//��һ�������붨������������
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



//�ַ��������ָ�����ͳ��
// char c = '1';
// char b = 1;
// printf("c=%d\n",c);//49
// printf("b=%d\n",b);//1
// printf("c=%c\n",c);//1
// printf("b=%c\n",b);//�����
//ȡһ�����ַ�0~9���ж����飬�����ж�����һ�������Ƿ񺬳���char
//char judge[]={'0','1','2','3','4','5','6','7','8','9'};
//ֱ�ӱȽ�ASCII���С��'0'~'9'
// scanf("%d",&n);
// getchar();
//printf("strlen=%lu",strlen(str));
// for(int i=0;i<n;i++){
//     scanf("%c",&c);
//     getchar();
// }
    /*getchar������ȡ�ַ��ĺ���
    int getchar(void)
    ��������Ϊint,����Ϊvoid.
    ���˿��ܻ����ɻ�getchar��Ȼ�Ƕ�ȡ�ַ��ģ�Ϊʲô����������int�أ�
    1��getchar��ʵ���ص����ַ���ASCII��ֵ����������
    2��getchar�ڶ�ȡ��������ʧ�ܵ�ʱ�򣬻᷵��EOF��
    EOF��˼��end of file,��������-1.
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
//���ַ��������ֵĸ��� Accepted:
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



//����ֵ�ɴ�С����
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



//ĸţ�Ĺ���
/*
�±� 0 1 2 3 4 5 6 7 8 9 ������
ţ�� 1 1 0 0 0 0 0 0 0 0
���� 4 1 0 0 0 0 0 0 0 0

��ţ�������� ������� �Ƴ�
��һֻţ��������Ҫ��ȥ��

ֱ�����������飿
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 4 1 0 0 0 0 0 0 0 0 ������

����Ϊ0����ûţ������0������ţ������ ��0Ԫ�� - 4 ����ţ�ܹ�����ţ��
���䳬��4��ÿ��1��ĳ���±�������0���1
��һͷţ��ţ���ر���㼴�ɣ��ӵڶ�ͷţ��������
//��������3��󣬵�4�������һͷ
��һ�� 1 ţ  3-3 + 1 = 1
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 3 0 0 0 0 0 0 0 0 0 ������

�ڶ��� 2 ţ  4-3 + 1 = 2
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 4 1 0 0 0 0 0 0 0 0 ������

������ 3 ţ  5-3 + 1 = 3
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 5 2 1 0 0 0 0 0 0 0 ������

������ 4 ţ  6-3 + 1 = 4
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 6 3 2 1 0 0 0 0 0 0 ������

������ 6 ţ  7-3 + 4-3 + 1 = 6
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 7 4 3 2 1 1 0 0 0 0 ������

������ 9 ţ  8-3 + 5-3 + 4-3 + 1 = 9
�±� 0 1 2 3 4 5 6 7 8 9 ������
���� 8 5 4 3 2 2 1 1 1 0 ������

������ 13 ţ  
�±� 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18������
���� 9 6 5 4 3 3 2 2 2 1  1  1  1

�ڰ��� 19 ţ  
�±� 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18������
����10 7 6 5 4 4 3 3 3 2  2  2  2  1  1  1  1  1  1

�ھ��� 28 ţ  
�±� 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18������
����11 8 7 6 5 5 4 4 4 3  3  3  3  2  2  2  2  2  2������
*/
#include <stdio.h>
int main(){
    int year;
    long long int sum;
    long long int temp;
    long long int AgeOfCow[10000];
    //cowIndex���ڼ�¼�´β���ţ�����������
    while(scanf("%d",&year) != EOF,year){   
        
        sum=1;
        temp=sum=1;
        AgeOfCow[0]= 3;
        for(long long int i=1;i<10000;i++){
            AgeOfCow[i]=0;
        }

        for(long long int i=1;i<year;i++){//��ȥ��һ��
//year = 2 -- >sum=2 
//year = 3 -- >sum=3
//year = 4 -- >sum=4
//year = 5 -- >sum=
//������
            for(long long int j=0;j<sum;j++){
                AgeOfCow[j]++;
                if(AgeOfCow[j] > 3){
                    AgeOfCow[temp]++;
                    temp++;
                }
            }
            sum = temp;
        }
        
        //���㵽��year����ţ��sum
        // for(int i=0;i<cowIndex;i++){
        //     if(AgeOfCow[i]>3){
        //         sum += AgeOfCow[i] - 3;
        //     }
        // }
        printf("%lld\n",sum);

    }
    return 0;
}
//Ϊʲô��������0<year<55�����ܸ���ȫ��year
//ʹ�õݹ�











