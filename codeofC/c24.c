/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*����������������������������������������������������������������������������������������������������������������������������������������������С���������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/*1*/
// int main(){
//     int num;
//     scanf("%d",&num);
//     char char0 = num;
//     printf("%c",char0);
//     return 0;
// }



/*2*/
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




/*3*/
// int main(){
//     int a1,a2,n;
//     scanf("%d %d %d",&a1,&a2,&n);//d=a2-a1,an=a1+(n-1)(a2-a1)
//     printf("%d",a1+(n-1)*(a2-a1));
//     return 0;
// }



/*4*/
// int main(){
//     int num;
//     scanf("%d",&num);
//     if(num>=100 && num<=999){
//         printf("%d%d%d",num%10,(num/10)%10,num/100);
//     }
//     return 0;
// }



/*5*/
// *****************ע����Ŀ��ֵ��Χ   1 <= A,B <= 50000 ,
// ��A*B <= 2500000000�Ѿ�����int�������ݷ�Χ -2147483648��+2147483647 �� [-2^31 , 2^31 - 1]
// #include <stdio.h>
// int main(){
//     long long a,b;
//     scanf("%lld %lld",&a,&b);
//     printf("%lld\n",a*b);
//     return 0;
// }



/*6*/
// int main(){
//     int n1,n2,n3;
//     scanf("%d %d %d",&n1,&n2,&n3);
//     printf("%d",n2);
//     return 0;
// }



/*7*/
// һ��printf()��%f���С������scanfҪ��%lf
// int main(){
//     double num;
//     scanf("%lf",&num);
//     printf("%.3f\n",num);
//     return 0;
// }



/*8*/
// int main(){
//     double num;
//     scanf("%lf",&num);
//     printf("%.12f\n",num);
//     return 0;
// }



/*9*/
// #include <stdio.h>
// int main(){
//   int F;
//   scanf("%d",&F);
//   int C=5*(F-32)/9;
//   printf("Celsius = %d\n",C);//
//   return 0;
// }



/*10*/
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



/*11*/
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



/*12*/
// #include <stdio.h>
// int main(){
//     int getill,death;
//     scanf("%d %d",&getill,&death);
//     printf("%.3f%%\n",100.0*death/(getill));
//     return 0;
// }



/*13*/
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



/*14*/
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



/*15 �������ĳ˻�*/
// #include <stdio.h>
// int n,m=1;
// int main(){
//     while(scanf("%d",&n) != EOF){
//         for(int i=0;i<n;i++){
//             int num;
//             scanf(" %d",&num);
//             if(num % 2 != 0){
//                 m *= num;
//             }
//         }
//         printf("%d\n",m);
//         m = 1;
//     }
//     return 0;
// }



/*16 ����������*/
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



/*17 ��������*/
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



/*18 ��ʵ������С����������abs�������ľ���ֵ*/
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



/*19 ƽ�������е����*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,m;
//     double t=0,m=0;
//     //int ch;
//     while(scanf("%d %d",&n,&m) != EOF && n>=0 && m>0){   
//         m = n;
//         t = n;
//         for(int i=2;i<=m;i++){
//             t = sqrt(t);
//             m += t;
//         }
//         printf("%.2f\n",m);
//         //while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



/*20 ���1-1/2+1/3-��������*/
// #include <stdio.h>
// int main(){
//     double m = 0;
//     int m,n;
//     scanf("%d",&m);
//     while(m>0 && scanf("%d",&n) != EOF && n>0,m--){  
//         for(int i = 1;i<=n;i++){
//             if(i % 2 == 0){
//                 m -= 1.0 / i;
//             }else{
//                 m += 1.0 / i;
//             }
//         }
//         printf("%.2f\n",m);
//         m = 0;
//     }
//     return 0;
// }



/*21 */
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



/*22 ��ȥһ����������Сֵ����ȡ������ƽ��ֵ*/
// #include <stdio.h>
// int main(){
//     int n;//m-= min+max
//     int arr[100];
//     while(scanf("%d",&n) != EOF){
//         int num,temp,m=0;
//         for(int i=0;i<n;i++){//99 60 101
//             scanf("%d",&num);
//             arr[i]=num;
//             m+=num;
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
//         m -= arr[0] + arr[n-1];
//         printf("%.2f\n",1.0*m/(n-2));
//         //��ʼ��arr
//         for(int z=0;z<n;z++){
//             arr[z]=0;
//         }
//     }
//     return 0;
// }



/*23 һ��������С������ǰ���������*/
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



/*24 �ַ��������ָ�����ͳ��*/
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


/*25 ����ֵ�ɴ�С����*/
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



/*26 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char num[12];
//     int n;
    
//     scanf("%d",&n);
//     sprintf(num,"%x",n);
//     for(int i=0;i<strlen(num);i++){
//         printf("%c ",num[i]);
//     }
//     return 0;
// }



/*27 */
// #include <stdio.h>
// int ifqin(int number){
//     int sum1=0;
//     for(int j=1;j<=number/2;j++){
//         if(number % j == 0){
//             sum1 += j;
//         }
//     }
//     return sum1;
// }
// int main(){
//     int n,a,b;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){  
//         scanf("%d %d",&a,&b);
//         if(ifqin(a) == b && ifqin(b) == a){
//             printf("YES\n");
//             continue;
//         }else{
//             printf("NO\n");
//         }
//     }
//     return 0;
// }
 


/*28 */
// #include <stdio.h>
// int main(){
//     int n,m;
//     int light[5000];
//     scanf("%d %d",&n,&m);
//     for(int i=0;i<n;i++){
//         light[i] = 1;
//     }
//     for(int i=1;i<=m;i++){
//         for(int j=0;j<n;j++){
//             if((j+1)%i == 0 ){
//                 light[j]=-light[j];
//             }
//         }
//     }
//     int ifone=1;
//     for(int i=0;i<n;i++){
//         if(light[i] == -1){
//             if(ifone == 1){
//                 printf("%d",i+1);
//                 ifone = 0;
//             }else{
//                 printf(",%d",i+1);
//             }
//         }
//     }
//     return 0;
// }



/*29 */
// #include <stdio.h>
// int main(){
//     int n;
//     int a[1000];
//     int b[1000];
//     long long int sum=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }
//     for(int i=0;i<n;i++){
//         sum += a[i]*b[i];
//     }
//     printf("%lld\n",sum);
//     return 0;
// }



/*30 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[31];
//     char a;
//     char b;
//     scanf("%s %c %c",str,&a,&b);
//     for(int i=0;i<strlen(str);i++){
//         if(str[i]==a){
//             str[i]=b;
//         }
//     }
//     for(int i=0;i<strlen(str);i++){
//         printf("%c",str[i]);
//     }
//     return 0;
// }



/*31 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[101];
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s",str);
//     }
//     return 0;
// }



/*32 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n,a,e,i1,o,u;
//     char str[101];
//     scanf("%d",&n);
//     getchar();
//     for(int i=0;i<n;i++){
//         a=e=i1=o=u=0;
//         gets(str);
//         for(int j=0;j<strlen(str);j++){
//             switch(str[j]){
//                 case 'a':a++;break;
//                 case 'e':e++;break;
//                 case 'i':i1++;break;
//                 case 'o':o++;break;
//                 case 'u':u++;break;
//             }
//         }
//         printf("a:%d\n",a);
//         printf("e:%d\n",e);
//         printf("i:%d\n",i1);
//         printf("o:%d\n",o);
//         printf("u:%d\n",u);
//         if(i<n-1){
//             printf("\n");
//         }
//         memset(str,'\0',101);
//     }
//     return 0;
// }



/*33 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int count=0;
//     char str[300];
//     gets(str);
//     for(int i=0;i<strlen(str);i++){
//         if(str[i] >= '0' && str[i] <= '9')count++;
//     }
//     printf("%d\n",count);   
//     return 0;
// }



/*34 ʯͷ������*/
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int count[100];
//     int n;
//     char str1[20];
//     char str2[20];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s %s",str1,str2);
//         if(strcmp(str1,"Rock")==0){
//             if(strcmp(str2,"Scissors")==0){
//                 count[i]=1;
//             }else if(strcmp(str2,"Paper")==0){
//                 count[i]=2;
//             }else if(strcmp(str2,"Rock")==0){
//                 count[i]=0;
//             }
//         }else if(strcmp(str1,"Scissors")==0){
//             if(strcmp(str2,"Scissors")==0){
//                 count[i]=0;
//             }else if(strcmp(str2,"Paper")==0){
//                 count[i]=1;
//             }else if(strcmp(str2,"Rock")==0){
//                 count[i]=2;
//             }
//         }else if(strcmp(str1,"Paper")==0){
//             if(strcmp(str2,"Scissors")==0){
//                 count[i]=2;
//             }else if(strcmp(str2,"Paper")==0){
//                 count[i]=0;
//             }else if(strcmp(str2,"Rock")==0){
//                 count[i]=1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(count[i]==0){
//             printf("Tie\n");
//         }else if(count[i]==1){
//             printf("Player1\n");
//         }else if(count[i]==2){
//             printf("Player2\n");
//         }
//     }
//     return 0;
// }



/*35 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[81];
//     gets(str);
//     for(int i=0;i<strlen(str);i++){
//         if((str[i] >= 'a' && str[i] <= 'y') || str[i] >= 'A' && str[i] <= 'Y'){
//             str[i] += 1;
//         }else if(str[i] == 'z'){
//             str[i] = 'a';
//         }else if(str[i] == 'Z'){
//             str[i] = 'A';
//         }
//     }
//     puts(str);
//     return 0;
// }



/*36 */
//����
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[201];
//     gets(str);
//     for(int i=0;i<strlen(str);i++){
//         if(str[i] >= 'A' && str[i] <= 'E'){
//             str[i] += 21;
//         }else if(str[i] >= 'F' && str[i] <= 'Z'){
//             str[i] -= 5;
//         }
//     }
//     puts(str);
//     return 0;
// }



/*37 */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[10];
//     double hei[2][40];
//     int n;
//     double max,temp;
//     int man=0,women=0;
//     scanf("%d",&n);
//     for(int i=0,count1=0,count2=0;i<n;i++){
//         scanf("%s",str);
//         if(strcmp(str,"male")==0){
//             scanf("%lf",&hei[0][count1]);
//             man++;
//             count1++;
//         }else if(strcmp(str,"female")==0){
//             scanf("%lf",&hei[1][count2]);
//             women++;
//             count2++;
//         }
//         memset(str,'\0',10);
//     }
//     for(int i=0;i<man-1;i++){
//         for(int j=0;j<man-1-i;j++){
//             if(hei[0][j+1]<hei[0][j]){
//                 temp =hei[0][j+1];
//                 hei[0][j+1]=hei[0][j];
//                 hei[0][j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<women;i++){
//         for(int j=0;j<women-1-i;j++){
//             if(hei[1][j+1]>hei[1][j]){
//                 temp =hei[1][j+1];
//                 hei[1][j+1]=hei[1][j];
//                 hei[1][j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(i < man){
//             if(i == 0){
//                 printf("%.2f",hei[0][i]);
//             }else{
//                 printf(" %.2f",hei[0][i]);
//             }
//         }else{
//             printf(" %.2f",hei[1][i-man]);
//         }
//     }
//     return 0;
// }



/*38 */
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double x;
//     scanf("%lf",&x);
//     if(x>=0){
//         printf("f(%.2f) = %.2f\n",x,sqrt(x));
//     }else{
//         printf("f(%.2f) = %.2f\n",x,pow(x+1,2)+2*x+1.0/x);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("%d + %d = %d\n",a,b,a+b);
//     printf("%d - %d = %d\n",a,b,a-b);
//     printf("%d * %d = %d\n",a,b,a*b);
//     printf("%d / %d = %d\n",a,b,a/b);
//     return 0;
// }



/*39 */
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     if(a<0){
//         printf("Invalid Value!\n");
//     }else if(a<=50){
//         printf("cost = %.2f\n",0.53*a);
//     }else{
//         printf("cost = %.2f\n",0.53*50+0.58*(a-50));
//     }
//     return 0;
// }



/*40 */
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     if(a<0||b<0||a>b || a>100||b>100){
//         printf("Invalid.\n");
//     }else{
//         printf("fahr celsius\n");
//         for(int i=a;i<=b;){
//             printf("%d%6.1f\n",i,5.0*(i-32)/9);//%6.1fָ���ռ6���ַ���ȵ�1λС��
//             i+=2;
//         }
//     }
//     return 0;
// }



/*41 */
// #include <stdio.h>
// int main(){
//     int a,m;
//     double b=0;
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++){
//         m=2*i-1;
//         if(i%2==0){
//             b-=1.0*i/m;
//         }else{
//             b+=1.0*i/m;
//         }
//     }
//     printf("%.3f\n",b);
//     return 0;
// }



/*42 */
// #include <stdio.h>
// int main(){
//     int a,b,j,k,l;
//     scanf("%d %d",&a,&b);
//     if(a>= 100 && a<=999 && b>= 100 && b<=999 && b>=a){
//         for(int i=a;i<=b;i++){
//             j=i/100;
//             k=i/10%10;
//             l=i%10;
//             if(i == j*j*j+k*k*k+l*l*l){
//                 printf("%d\n",i);
//             }
//         }
//     }else{
//         printf("Invalid Value.\n");
//     }
//     return 0;
// }



/*43 */
//�ո�
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int n,count=0;
//     char str[10000][101];
//     char str_t[10000][101];
//     scanf("%d",&n);
//     getchar();
//     for(int i=0;i<n;i++){
//         gets(str[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0,z=0;str[i][j] != '\0';j++){
//             if(str[i][j] != 32){ 
//                 str_t[i][z++]=str[i][j];
//             }else{
//                 count++;
//             }
//         }
//     }
//     printf("%d\n",count);
//     for(int i=0;i<n;i++){
//         printf("%s\n",str_t[i]);
//     }
//     return 0;
// }



/*44 */
// #include <stdio.h>
// int main(){
//     int n,num,index=-1;
//     int arr[10001];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     scanf("%d",&num);
//     for(int i=0;i<n;i++){
//         if(arr[i] == num){
//             index = i+1;
//             break;
//         }
//     }
//     printf("%d\n",index);
//     return 0;
// }



/*45 */
//a1+a2+a3���
// #include <stdio.h>
// int main(){
//     int n,a1,a2,a3,sum;
//     scanf("%d",&n);
//     for(int i=0,time=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             for(int z=0;z<=n;z++){
//                 if((i+j)%2==0 && (j+z)%3==0 && (i+j+z)%5==0)
//                     if(time == 0){
//                         sum = i+j+z;
//                         time++;
//                     }else{
//                         if((i+j+z) > sum)
//                             sum = i+j+z;
//                     }
//             }
//         }        
//     }
//     printf("%d\n",sum);
//     return 0;
// }



/*46 */
//C - ����ͬ��
//1.AC
// #include <stdio.h>
// int main(){
//     int n,min=0,max=0,sum=0;
//     scanf("%d",&n);
//     if(n % 2 ==0){
//         while(1){
//             if(n-sum >= 4){
//                 sum+=4;
//                 min++;
//             }else if(n-sum>=2){
//                 sum+=2;
//                 min++;
//             }else{
//                 break;
//             }
//         }
//         max = n/2;
//     }
//     if(min == 0 || max ==0){
//         printf("0 0\n");
//     }else
//         printf("%d %d\n",min,max);
//     return 0;
// }
//2.simplified
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n & 1) printf("0 0\n");
//     else printf("%d %d\n",n/4+n%4/2,n/2);
//     return 0;
// }
//1. n & 1 �����ж�n�Ƿ�Ϊ����  n&1 ��Ч�� n%2==1
// nΪ����ʱ��n�����λΪ1 ; nΪż��ʱ��n�����λΪ0
// �����ż����n&1����0�����򷵻�1
//2. 1 & n
// ��������n�����λ����Ϊ1����1&n�Ľ������1��
// ����Ϊ1����1&n�Ľ������0



/*47 ����*/
//���� 22 �� 1515 ����ͬ������������������Ǽ�����Щ�������ж��ٸ��������㣺������һ��������һ����������
// #include <stdio.h>
// int main(){
//     int num[16];
//     int n=0,length=0,count=0;
//     for(int i=0;i<16;i++){
//         scanf("%d",&n);
//         if(n==0){
//             length = i;
//             break;
//         }else{
//             num[i] = n;
//         }
//     }
//     for(int i=0;i<length-1;i++){
//         for(int j=i+1;j<length;j++){
//             if(num[i]*2==num[j] || num[j]*2==num[i]){
//                 count++;
//             }
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }



/*48 ��������*/
//���� a^3= b^3 + c^3 + d^3 �ĵ�ʽ����Ϊ����������ʽ
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(long long int i=2;i<=n;i++){
//         for(long long int j=2;j<i;j++){
//             for(long long int k=j;k<i;k++){
//                 for(long long int z=k;z<i;z++){
//                     if(i*i*i == j*j*j + k*k*k + z*z*z){
//                         printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",i,j,k,z);
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }



/*49 ����*/
//��������е�������������֮�͵����ĸ���
// #include <stdio.h>
// int main(){
//     int n,arr[101],sum[99999];
//     int count=0,k = 0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             sum[k] = arr[i] + arr[j];
//             k++;      
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<k;j++){
//             if(sum[j] == arr[i]){
//                 count++;
//                 break;
//             }
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }



/*50 */
//������
// #include <stdio.h>
// #include <math.h>
// int ifPrime(int x,int y){
//     int ret=1;
//     if(x < y){
//         int t = x;
//         x = y;
//         y = t;
//     }
//     for(int i=2;i<=y;i++){
//         if(y % i == 0 && x % i == 0){
//             ret = 0;
//             break;
//         }
//     }
//     return ret;
// }
// int main(){
//     int n,arr[605],count=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(ifPrime(arr[i],arr[j])){
    //             count++;
    //         }
    //     }
    // }
//     printf("%d\n",count);
//     return 0;
// }



/*51 �Һ�ΪK������Ԫ��*/
// #include<stdio.h>
// int main(){
//     int n,k,arr[1001],ifornot=0;
//     scanf("%d %d",&n,&k);
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j] == k){
//                 ifornot = 1;
//             }
//         }
//     }
//     if(ifornot){
//         printf("yes\n");
//     }else{
//         printf("no\n");
//     }
//     return 0;
// }



/*52 ������ͬ����*/
// #include<stdio.h>
// int main(){
//     long long int a,b,c,x;
//     scanf("%lld %lld %lld",&a,&b,&c);
//     for(long long int i=2;i <= 1000000;i++){
//         if(((a % i) == (b % i)) && ((b % i) == (c % i))){
//             x = i;
//             break;
//         }
//     }
//     printf("%lld\n",x);
//     return 0;
// }



/*53 �����������*/
// #include <stdio.h>
// int main(){
//     int a,b,c,count=0;
//     scanf("%d %d %d",&a,&b,&c);
//     for(int x=0;x<=c/a;x++){
//         for(int y=0;y<=c/b;y++){
//             if(a*x+b*y==c){
//                 count++;
//             }
//         }
//     }
//     printf("%d",count);
//     return 0;
// }



/*54 �����ĺ����*/
// #include <stdio.h>
// #include <math.h>
// int ifPrime(int x){
//     int ret = 1;
//     for(int i=2;i<=sqrt(x);i++){
//         if(x % i == 0){
//             ret = 0;
//             break;
//         }
//     }
//     return ret;
// }
// int main(){
//     int s;
//     long long int p,p_max;
//     scanf("%d",&s);
//     for(int i=2;i<=s/2;i++){
//         p = i*(s-i);
//         if(i-1 == 1){
//             p_max = p;
//         }
//         if(ifPrime(i) && ifPrime(s-i)){
//             if(p > p_max){
//                 p_max = p;
//             }
//         }
//     }
//     printf("%lld\n",p_max);
//     return 0;
// }



/*55 ������������3λ��*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,a,b,c;
//     scanf("%d",&n);
//     for(int i=100,count=0;i<=999;i++){
//         a = i/100;
//         b = i/10%10;
//         c = i%10;
//         if((int)sqrt(i)*(int)sqrt(i) == 1.0*i && (a==b || a==c || b==c)){
//             count++;
//             if(count == n){
//                 printf("%d\n",i);
//                 break;
//             }
//         }
//     }
//     return 0;
// }



/*56 �������������������*/
//������Ϊ7
// #include <stdio.h>
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF,n){
//         for(int i=1;i<n;i++){
//             if(i%7!=0){
//                 if(i==1){
//                     printf("%d",i);
//                 }else{
//                     printf(" %d",i);
//                 }
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



/*57 */
// #include<stdio.h>
// int main(){
//     int n,sign;
//     scanf("%d",&n);
//     if(n<0){    
//         sign = -1;
//     }else if(n==0){
//         sign = 0;
//     }else{
//         sign = 1;
//     }
//     printf("sign(%d) = %d\n",n,sign);
//     return 0;
// }



/*58 */
//ʵ��3-7 ͳ��ѧ���ɼ�
// #include<stdio.h>
// int judge(int x){
//     int ret = -1;
//         switch(x/10){
//             case 10:
//             case 9:
//                 ret =0;
//                 break;
//             case 8:
//                 ret =1;
//                 break;
//             case 7:
//                 ret =2;
//                 break;
//             case 6:
//                 ret =3;
//                 break;
//             case 5:
//             case 4:
//             case 3:
//             case 2:
//             case 1:
//             case 0:
//                 ret =4;
//                 break;
//         }
//     return ret;
// }
// int main(){
//     int n,arr[1001],count[5];
//     scanf("%d",&n);
//     for(int i=0;i<5;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//         count[judge(arr[i])]++;
//     }
//     printf("%d %d %d %d %d\n",count[0],count[1],count[2],count[3],count[4]);
//     return 0;
// }



/*59 */
//ʵ��3-3 �Ƚϴ�С
// #include<stdio.h>
// int main(){
//     int a,b,c,t=0;//3 2  1
//     scanf("%d %d %d",&a,&b,&c);
    // if(a>b){
    //     t=b;
    //     b=a;
    //     a=t;
    //     if(b>c){
    //         t=c;
    //         c=b;
    //         b=t;
    //         if(a>b){
    //             t=b;
    //             b=a;
    //             a=t;
    //         }
    //     }
    // }
//     printf("%d->%d->%d\n",a,b,c);
//     return 0;
// }



/*60 */
// #include<stdio.h>
// int main(){
//     int n,ifnot=0;
//     scanf("%d",&n);
//     int t=n;
//     if(n>5){
//         n%=5;
//         if(n<=3)
//             ifnot=1;
//     }else{
//         if(n<=3)
//             ifnot=1;
//     }
//     if(ifnot){
//         printf("Fishing in day %d",t);
//     }else{
//         printf("Drying in day %d",t);
//     }
//     return 0;
// }



/*61 ���������ܳ������*/
//#include<stdio.h>
// #include<math.h>
// int main()
// {
// 	int a,b,c;
// 	float area,perimeter,s;
// 	scanf("%d %d %d",&a,&b,&c);
// 	if(a+b>c&&a+c>b&&b+c>a)
// 	{
// 		s=(a+b+c)/2.0;
// 		area=sqrt(s*(s-a)*(s-b)*(s-c));
// 		printf("area = %.2f; perimeter = %.2f",area,s*2);
// 	}
// 	else
// 	{
// 		printf("These sides do not correspond to a valid triangle");
// 	}
// 	return 0;
// }



/*62 ����ƥ��*/
//1.WA
// #include<stdio.h>
// int main(){
//     int n,ifnot=1,box1[2][3],box2[2][3];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d %d %d",&box1[0][0],&box1[0][1],&box1[0][2]);
//         scanf("%d %d %d",&box2[0][0],&box2[0][1],&box2[0][2]);
//         for(int j=0,m=0;j<2;j++){
//             for(int z=j+1;z<3;z++,m++){
//                 box1[1][m]=box1[0][j]*box1[0][z];
//                 box2[1][m]=box2[0][j]*box2[0][z];
//             }
//         }
//         for(int j=0,m=2;j<3;j++,m--){
//             for(int z=0,k=2;z<3;z++,k--){
//                 if(box1[1][j] <= box2[1][z] && box1[0][m] <= box2[0][k]){
//                     printf("yes\n");
//                     ifnot = 0;
//                     goto AB;
//                 }
//             }
//         }
//         AB:
//             if(ifnot){
//                 printf("no\n");
//             }
//         ifnot=1;
//     }
//     return 0;
// }
//2.AC
// #include <stdio.h>
// struct box{
//     int len;
//     int wid;
//     int hei;
// }A,B; 
// struct box letInturn(struct box b){
//     if(b.len > b.wid){
//         int t=b.wid;
//         b.wid = b.len;
//         b.len = t;
//     }
//     if(b.len > b.hei){
//         int t=b.hei;
//         b.hei = b.len;
//         b.len = t;
//     }
//     if(b.wid > b.hei){
//         int t=b.hei;
//         b.hei = b.wid;
//         b.wid = t;
//     }
//     return b;
// }
// int main(){
//     int T;
//     scanf("%d",&T);
//     while(T--){
//         scanf("%d %d %d",&A.len,&A.wid,&A.hei);
//         scanf("%d %d %d",&B.len,&B.wid,&B.hei);
//         A = letInturn(A);
//         B = letInturn(B);
//         if((A.len<=B.len && A.wid<=B.wid && A.hei<=B.hei) || (B.len<=A.len && B.wid<=A.wid && B.hei<=A.hei)){
//             printf("yes\n");
//         }else
//             printf("no\n");
//     }
//     return 0;
// }



/*63 ���������ʱ��*/
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int x,y,hour,minute;
//     scanf("%d %d",&x,&y);
//     x = (x/100)*60 + x%100;
//     y = (y/100)*60 + y%100;
//     printf("%02d:%02d\n",(y-x)/60,(y-x)%60);
//     return 0;
// }



/*64 �������*/
// #include<stdio.h>
// double fact(int n){
//     int num = n;
//     double ret = 1.0;
//     while(num>0){
//         ret*=num;
//         num--;
//     }
//     return ret;
// }
// int main(){
//     int m,n;
//     scanf("%d %d",&m,&n);
//     if(n<m){
//         int t=n;
//         n = m;
//         m = t;
//     }
//     printf("result = %.0f\n",fact(n)/(fact(m)*fact(n-m)));
//     return 0;
// }



/*65 */


/*66 */



/*67 */



/*68 */










/*��������������������������������������������������������������������������������������������������������������������������������������������������С�����������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*����������������������������������������������������������������������������������������������������������������������������������������������(�ռ�-)����������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/*1 �ɼ��ȼ�ת��*/
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
        // if(x < 0 || x > 100){
        //     printf("Score is error!\n");
        //     continue;
        // }
        // switch(x/10){
        //     case 10:
        //     case 9:
        //         printf("A\n");
        //         break;
        //     case 8:
        //         printf("B\n");
        //         break;
        //     case 7:
        //         printf("C\n");
        //         break;
        //     case 6:
        //         printf("D\n");
        //         break;
        //     case 5:
        //     case 4:
        //     case 3:
        //     case 2:
        //     case 1:
        //     case 0:
        //         printf("E\n");
        //         break;
        // }
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



/*2 ˮ�ɻ���*/
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



/*3 ASCII������*/
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



/*4 YYYY/MM/DD���� ת ������*/
// #include <stdio.h>
// int main(){
//     int year,month,day,m=0,Feburary=0;
//     int ch;
//     while(scanf("%d/%d/%d",&year,&month,&day) != EOF){   
//         if((year%4==0 && year%100!=0) || year%400==0){
//             Feburary = 29;
//         }else{
//             Feburary = 28;
//         }
//         switch(month-1){
//             case 12:m+=31;
//             case 11:m+=30;
//             case 10:m+=31;
//             case 9:m+=30;
//             case 8:m+=31;
//             case 7:m+=31;
//             case 6:m+=30;
//             case 5:m+=31;
//             case 4:m+=30;
//             case 3:m+=31;
//             case 2:m+=Feburary;
//             case 1:m+=31;
//         }
//         printf("%d\n",m+day);
//         m = 0;
//         while((ch = getchar()) != '\n' && ch != EOF);
//     }
//     return 0;
// }



/*5 */
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



/*6 �������и�������������ĸ���*/
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
//         //while((ch = getchar()) != '\n' && ch != EOF);//�þ���ܻᵼ��mmit Failed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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



/*7 �ж�һ����Χ��ȡֵ�ĺ���ֵ�Ƿ�ȫΪ����*/
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



/*8 ż��������ֲ�ƽ��*/
// #include <stdio.h>
// int main(){
//     int arr[100];
//     int len,m,average=0,m=0,times=0;
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
//                     m += arr[j+m*i];
//                 }
//                 average = m/(len%m);
//             }else{
//                 for(int z=0;z<m;z++){
//                     m+=arr[z+m*i];
//                 }
//                 average = m/m;           
//             }
//             m = 0;
//             if(i==times - 1 ){
//                     printf("%d\n",average);
//             }else{
//                     printf("%d ",average);
//             }
//         }
//     }
//     return 0;
// }



/*9 ��һ�������붨������������*/
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



/*10 ĸţ�Ĺ���*/
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
//1.WA
// #include <stdio.h>
// int main(){
//     int year;
//     long long int m;
//     long long int temp;
//     long long int AgeOfCow[10000];
//     //cowIndex���ڼ�¼�´β���ţ�����������
//     while(scanf("%d",&year) != EOF,year){   
//         m=1;
//         temp=m=1;
//         AgeOfCow[0]= 3;
//         for(long long int i=1;i<10000;i++){
//             AgeOfCow[i]=0;
//         }
//         for(long long int i=1;i<year;i++){//��ȥ��һ��
// //year = 2 -- >m=2 
// //year = 3 -- >m=3
// //year = 4 -- >m=4
// //year = 5 -- >m=
// //������
//             for(long long int j=0;j<m;j++){
//                 AgeOfCow[j]++;
//                 if(AgeOfCow[j] > 3){
//                     AgeOfCow[temp]++;
//                     temp++;
//                 }
//             }
//             m = temp;
//         }
//         //���㵽��year����ţ��m
//         // for(int i=0;i<cowIndex;i++){
//         //     if(AgeOfCow[i]>3){
//         //         m += AgeOfCow[i] - 3;
//         //     }
//         // }
//         printf("%lld\n",m);
//     }
//     return 0;
// }
//Ϊʲô��������0<year<55�����ܸ���ȫ��year
//2.AC ʹ�õݹ�
// #include <stdio.h>
// int sum[56] = { 0,1,2,3,4,6 };//
// void cow(int n)
// {
//  if (sum[n - 1] != 0 && sum[n - 3] != 0)
//  {
//   sum[n] = sum[n - 1] + sum[n - 3];
//  }
//  else
//  {
//   if (sum[n - 1] == 0)
//    cow(n - 1);
//   if (sum[n - 3] == 0)
//    cow(n - 3);
//   sum[n] = sum[n - 1] + sum[n - 3];
//  }
// }
// int main()
// {
//  int n;
//  while (scanf("%d", &n) != EOF)
//  {
//   if (n == 0)
//    break;
//   if (sum[n] == 0)
//    cow(n);
//   printf("%d\n", sum[n]);
//  }
//  return 0;
// }



/*11 ������*/
//1.��ͨIf������
// #include <stdio.h>
// int main(){
//     int n,amount=0;
//     int arr[100] = {0};
//     int money[6] = {0};
//     //0 1 2 3  4  5
//     //1 2 5 10 50 100
//     unsigned int m;
//     while(scanf("%d",&n) != EOF,n){
//         for(int i=0;i<6;i++){
//             money[i]=0;
//         }
//         for(int i=0;i<n;i++){
//             scanf("%u",&m);
//             if(m >= 100){
//                 money[5] += m / 100;
//                 m %= 100;
//             }
//             if(m >= 50){
//                 money[4]++;
//                 m %= 50;
//             }
//             if(m >= 10){
//                 money[3] += m/10;
//                 m %= 10;
//             }
//             if(m >= 5){
//                 money[2] += m/5;
//                 m %= 5;
//             }
//             if(m >= 2){
//                 money[1] += m/2;
//                 m %= 2;
//             }
//             if(m >= 1){
//                 money[0] += m;
//                 m = 0;
//             }
//         }
//         for(int i=0;i<6;i++){
//             amount += money[i];
//         }
//         printf("%d\n",amount);
//         amount = 0;
//         //m = 0;
//     }
//     return 0;
// }
//
//2.�ݹ鷽����
// #include <stdio.h>
// int n,amount=0;
// int money[6] = {1,2,5,10,50,100};
// unsigned int m;
// void GetAccount(unsigned int money_,int k){
//     if(k < 0){
//         return;
//     }else if(money_ >= money[k]){
//         amount += money_ / money[k];
//         money_ %= money[k];
//     }
//     GetAccount(money_,--k);
// }
// int main(){
//     while(scanf("%d",&n) != EOF,n){
//         for(int i=0;i<n;i++){
//             scanf("%u",&m);
//             GetAccount(m,5);
//         }
//         printf("%d\n",amount);
//         amount = 0;
//     }
//     return 0;
// }



/*12 ��ѡŮ����*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int m,n;//m�У�n��
//     int score,score_temp,max_m,max_n;
//     while(scanf("%d %d",&m,&n) != EOF){  
//         max_m=1;
//         max_n=1;
//         scanf("%d",&score);
//         score_temp = score;
//         for(int i=1;i<=m;i++){
//             for(int j=1;j<=n;j++){
//                 if(i==1 && j==1){
//                     continue;
//                 }
//                 scanf("%d",&score);
//                 if(abs(score) >abs(score_temp)){
//                     score_temp = score;
//                     max_m = i;
//                     max_n = j;
//                 }
//             }
//         }
//         printf("%d %d %d\n",max_m,max_n,score_temp);
//     }
//     return 0;
// }



/*13 ��ƽ���ɼ� ��������ƾ����ڵ���ƽ���ɼ�������*/
// #include <stdio.h>
// int main(){
//     int m,n,score,sum1,sum2,count;
//     double sj_average[5];
//     int arr[50][5];
//     while(scanf("%d %d",&n,&m) != EOF){
//         count = n;
//         for(int i=0;i<50;i++){
//             for(int j=0;j<5;j++){
//                 arr[i][j] = 0;
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 scanf("%d",&score);
//                 arr[i][j]=score;
//             }
//         }   
//         for(int i=0;i<n;i++){
//             sum1 = 0;
//             for(int j=0;j<m;j++){
//                 sum1 += arr[i][j];  
//             }
//             if(i == n-1){
//                 printf("%.2f",1.0*sum1/m);
//             }else{
//                 printf("%.2f ",1.0*sum1/m);
//             }
//         }
//         printf("\n");
//         for(int j=0;j<m;j++){
//             sum2 = 0;
//             for(int z=0;z<n;z++){
//                 sum2 += arr[z][j];
//             }
//             sj_average[j] = 1.0*sum2/n;
//             if(j == m-1){
//                 printf("%.2f",sj_average[j]);
//             }else{
//                 printf("%.2f ",sj_average[j]);
//             }
//         }
//         printf("\n");
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(arr[i][j] < sj_average[j]){
//                     count--;
//                     break;
//                 }
//             }
//         }
//         printf("%d\n\n",count);
//     }
//     return 0;
// }



/*14 �ж��ַ����Ƿ���C���ԺϷ���ʶ��*/
//����λ��������һλ�����пո�,�����г�������,��Сд��ĸ��"_"���κ��ַ�
//��һλ���������ֻ�ո񣬻���˵ֻ����ʲô
// #include <stdio.h>
// #include <string.h>
// int main(){    
//     int n;
//     char str[50];
//     unsigned int len;
//     scanf("%d",&n);
//     getchar();
//     for(int i=0;i<n;i++){
//         gets(str);
//         len = strlen(str);
//         if((str[0] >= 65 && str[0] <= 90) || str[0] == '_' || (str[0] >= 97 && str[0] <= 122)){
//             for(int j=0;j<len;j++){
//                 if((str[j] >= 65 && str[j] <= 90) || str[j] == '_' || (str[j] >= 97 && str[j] <= 122) || (str[j] >= 48 && str[j] <= 57)){
//                     if(j==len-1){
//                         printf("yes\n");
//                         break;
//                     }
//                 }else{
//                     printf("no\n");
//                     break;
//                 }
//             }
//         }else{
//             printf("no\n");
//         }
//         memset(str,'\0',50);
//     }
//     return 0;
// }



/*15 ���������ĸ*/
// #include <stdio.h>
// #include <string.h>
// char str[100];
// int main(){
//     unsigned int len;
//     int index[100];
//     char max;
//     while(gets(str) != NULL){   
//         for(int i=0;i<100;i++){
//             index[i]=0;
//         }
//         len = strlen(str);
//         for(int i=0;str[i] != '\0';i++){ 
//                 if(i == 0){
//                     max = str[0];
//                 }else if(str[i] > max){
//                     max = str[i];
//                 }
//         } 
//         for(int i=0;str[i] != '\0';i++){
//             if(str[i] == max){
//                 index[i]=1;
//             }
//         }
//         for(int i=0;str[i] != '\0';i++){
//             if(index[i] == 1){
//                 printf("%c(max)",str[i]);
//             }else{
//                 printf("%c",str[i]);
//             }
//         }
//         printf("\n");
//         memset(str,'\0',100);
//     }
//     return 0;
// }



/*16 ��쳲��������еĵ�num��*/
//1.�ݹ飬ֻ�������
// #include <stdio.h>
// int GetFib(int n){
//     if(n <= 2){
//         return 1;
//     }else{
//         return GetFib(n-1) + GetFib(n-2);
//     }
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     printf("%d\n",GetFib(num));
//     return 0;
// }
//2.�����������������
// #include <stdio.h>
// int GetFib(int n){
//     long long int a,b,c;
//     a=b=c=1;
//     while(n>2){
//         c=a+b;
//         b=a;
//         a=c;
//         n--;
//     }
//     return c;
// }
// int main(){
//     int num;
//     int T;
//     scanf("%d",&T);
//     for(int i=0;i<T;i++){
//         scanf("%d",&num);
//         printf("%lld\n",GetFib(num));
//     }
//     return 0;
// }



/*17 sky��*/
//1.WA
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n,a,b,c,d;
//     while(scanf("%d",&n) != EOF,n){
//         a=n/1000;
//         b=n%1000/100;
//         c=n%100/10;
//         d=n%10;
//         if(a+b+c+d == 22){
//             printf("%d is a Sky Number.\n",n);
//         }else{
//             printf("%d is not a Sky Number.\n",n);
//         }
//     }
//     return 0;
// }
//2.AC
//#include <stdio.h>
// int sum=0;
// int f(int n,int d){
//     int temp,r;
//     if(n!=0){
//         r=n%d;
//         n/=d;
//         sum+=r;
//         f(n,d);
//     }else{
//         temp=sum;
//         sum=0;
//         return temp;
//     }
// }
// int main(){
//     int num;
//     while(scanf("%d",&num) != EOF,num){
//         if(f(num,16)==f(num,12) && f(num,10)==f(num,16)){
//             printf("%d is a Sky Number.\n",num);
//         }else{
//             printf("%d is not a Sky Number.\n",num);
//         }
//     }
//     return 0;
// }
//3.master's code
// #include<cstdio>
// #include<cstring>
// #include<cstdlib>
// int Cal(int x, int base)
// {
//     int res = 0;
//     for(; x; x /= base)
//         res += x % base;
//     return res;
// }
// int main()
// {
//     int n;
//     while(scanf("%d", &n) != EOF && n)
//     {
//         int res = Cal(n, 10);
//         if(Cal(n, 12) == res && Cal(n, 16) == res) printf("%d is a Sky Number.\n", n);
//         else printf("%d is not a Sky Number.\n", n);
//     }
//     return 0;
// }



/*18 �����ƶ�*/
//1.�жϺ����Ƿ��Ƿ��ƶ���x = 100~120 λ��
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char cmd[10];
//     char cmd_t[10];
//     int sum = 0;
//     int x = 0 , x_t = 0;
//     int cmd_int_temp = 0; 
//     while(scanf("%s",cmd) != EOF && strcmp(cmd,"STOP") != 0){
//         int cmd_int=0;
//         if(strcmp(cmd,"REPEAT")!=0) scanf("%d",&x); 
//         //����ASCIIֵ
//         for(int i=0;i<strlen(cmd);i++){
//             cmd_int += cmd[i];
//         }
//         switch(cmd_int){
//             case 'F'+'D':
//                 sum += x;
//                 x_t = x;
//                 cmd_int_temp = cmd_int;
//                 break;
//             case 'B'+'K':
//                 sum -= x;
//                 if(sum <= 0) sum = 0;
//                 x_t = x;
//                 cmd_int_temp = cmd_int;
//                 break;
//             case 'R'+'E'+'P'+'E'+'A'+'T':
//                 switch(cmd_int_temp){
//                     case 'F'+'D':
//                         sum += x_t;
//                         break;
//                     case 'B'+'K':
//                         sum -= x_t;
//                         if(sum <= 0) sum = 0;
//                         break;
//                 }
//         }
//     }
//     printf("sum=%d\n",sum);
//     if(sum >= 100 && sum <= 120) printf("YES\n");
//     else printf("NO\n");
//     return 0;
// }
//2.����ƶ��󺣹�x,y����
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #define PI 3.1415926535898
// #define K (PI/180)
// //��Ϊc���Ե����Ǻ�������Ϊ���ȣ�Ҫ�ӽǶ�ת���ɻ��Ȳ������
// int main(){
//     char cmd[10];
//     char cmd_t[10];
//     int angle = 0;
//     int s = 0 , s_t = 0;
//     double x=0.0 , y=0.0;
//     int cmd_int_temp = 0; 
//     while(scanf("%s",cmd) != EOF && strcmp(cmd,"STOP") != 0){
//         int cmd_int=0;
//         if(strcmp(cmd,"REPEAT")!=0) scanf("%d",&s);//s���� Ϊ�Ƕ� 
//         //����ASCIIֵ
//         for(int i=0;i<strlen(cmd);i++){
//             cmd_int += cmd[i];
//         }
//         switch(cmd_int){
//             case 'F'+'D':
//                 x += s * cos(angle * K);
//                 y += s * sin(angle * K);
//                 s_t = s;
//                 cmd_int_temp = cmd_int;
//                 break;
//             case 'B'+'K':
//                 x += s * cos(angle * K);
//                 y += s * sin(angle * K);
//                 s_t = s;
//                 cmd_int_temp = cmd_int;
//                 break;
//             case 'L'+'E'+'F'+'T':
//                 angle += s;
//                 cmd_int_temp = cmd_int;
//                 break;
//             case 'R'+'I'+'G'+'H'+'T':
//                 angle -= s;
//                 cmd_int_temp = cmd_int;
//                 break;
//             case 'R'+'E'+'P'+'E'+'A'+'T':
//                 switch(cmd_int_temp){
//                     case 'F'+'D':
//                         x += s * cos(angle * K);
//                         y += s * sin(angle * K);
//                         break;
//                     case 'B'+'K':
//                         x += s * cos(angle * K);
//                         y += s * sin(angle * K);
//                         break;
//                     case 'L'+'E'+'F'+'T':
//                         angle += s;
//                         break;
//                     case 'R'+'I'+'G'+'H'+'T':
//                         angle -= s;
//                         break;
//                 }
//         }
//     }
//     printf("x = %.2f\ny = %.2f\n",x,y);
//     return 0;
// }



/*19 ��1�ĸ������� 01��*/
//1.WA
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100][201];
//     int count[100];
//     int count_t[100];
//     int n;
//     int index[100];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         //gets(str[i]);
//         scanf("%s",&str[i]);
//         getchar();
//     }
//     for(int i=0;i<n;i++){
//         count[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<strlen(str[i]);j++){
//             if(str[i][j] == '1'){
//                 count[i]++;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         count_t[i] = count[i];
//     }
//     for(int i=0;i<n;i++){
//         printf("count=%d\n",count[i]);
//     }
//     int minindex=0;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(count_t[j+1]<count_t[j]){
//                 int temp = count_t[j+1];
//                 count_t[j+1]=count_t[j];
//                 count_t[j]=temp;
//             }
//         }
//         //index[i]=minindex;
//     }
//     // for(int i=0;i<n-1;i++){
//     //     for(int j=0;j<n-1-i;j++){
//     //         if(count[j]>count[j+1]){
//     //             int temp = str[j+1];
//     //             str[j+1] = str[j];
//     //             str[j]=temp; 
//     //         }
//     //     }
//     // }
//     for(int i=0;i<n;i++){
//         printf("count_t=%d\n",count_t[i]);
//     }
//     for(int i=0,temp=-1;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(count_t[j] == temp){
//                 index[j-1]=i-1;
//                 temp=-1;
//             }else if(count[i]==count_t[j]){
//                 index[j]=i;
//                 temp = count_t[j];
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("index[%d]=%d\n",i,index[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%s\n",str[index[i]]);
//     }
//     return 0;
// }
//2.WA
// #include <stdio.h>
// #include <string.h>
// char str[100][205];
// int count[100];
// int index1[100];
// char str_temp[100][205];
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s",&str[i]);
//     }
//     for(int i=0;i<n;i++){
//         index1[i]=0;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;str[i][j] != '\0';j++){
//             if(str[i][j]=='1'){
//                 count[i]++;
//                 index1[i]++;
//             }
//         }
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(count[j]>count[j+1]){
//                 int temp=count[j+1];
//                 count[j+1]=count[j];
//                 count[j]=temp;
//             }
//         }
//     } 
//     int temp=-1;
//     for(int i=0,z=0;i<n;){
//         for(int j=0;j<n;j++){
//             if(index1[j] == temp && strcmp(str_temp[z-1],str[j])==0){
//                 continue;
//             }else if(count[i]==index1[j]){
//                 printf("%s\n",str[j]);
//                 temp=index1[j];
//                 strcpy(str_temp[z++],str[j]);
//                 i++;
//                 break;
//             }
//         }
//     }
//     //���1�ĸ�����ͬ����ascii���С����strcmp(s1,s2)>0  ���s1�ں�
//     return 0;
// }
//3.AC �ṹ�巽��
// #include<stdio.h>
// #include<string.h>
// struct str{
//     char c[220];
//     int num;
// };
// int count(struct str s){
//     int cout = 0;
//     for(int i=0;i<strlen(s.c);i++)
//         cout += (s.c[i] == '1');
//     return cout;
// }
// struct str strArray[110];
// struct str strArray_result[110];
// int main(){
//     int n,num_max,ifnot=1;
//     scanf("%d",&n);
//     for(int m=0;m<n;m++){
//         scanf("%s",strArray[m].c);
//         strArray[m].num = count(strArray[m]);
//         if(ifnot++ == 1) num_max = strArray[0].num;
//         if(strArray[m].num > num_max) num_max = strArray[m].num;
//     }
//     for(int i=0,index=0;i<=num_max;i++){
//         for(int j=0;j<n;j++){
//             if(strArray[j].num == i)
//                 strArray_result[index++]=strArray[j];  
//         }
//     }
//     for(int i=0;i<n;i++)
//         printf("%s\n",strArray_result[i].c);
//     return 0;
// }



/*20 ���n���a(n)=a(n-1)*a(n-2)*a(n-3) - 1*/
//����a1=1,a2=2,a3=3
//���20221006���a(n)ֵ
// #include <stdio.h>
// long long int a1=1,a2=2,a3=3,a4=5;
// long long int f(long long int n){
//     while(n>3){
//         a4=a1*a2*a3-1;
//         a1=a2;
//         a2=a3;
//         a3=a4%1000000;
//         n--;
//     }
//     return a4;
//     //�ݹ飨�㷨���Ӷ�O(n)���󣩣�
//     // if(n > 3)
//     //     return (f(n-1)%1000)*(f(n-2)%1000)*(f(n-3)%1000) - 1;
//     // else
//     //     return arr[n-1];
// }
// int main(){
//     int num;
//     scanf("%d",&num);//
//     printf("%lld\n",f(num));
//     return 0;
// }
//a7=62929 a8=792024393



/*21 �������м������ǵ�������������������ͬ����֮��*/
// #include <stdio.h>
// int main(){
//     int arr[101][101];
//     int n,count=0;
//     scanf("%d",&n);
//     //¼����ı�ͷ�кͱ�ͷ��
//     /*������1 2 3 4 5�����ά����ͼ�񻯣�
//   i 0 1 2 3 4 5
// j  
// 0     1 2 3 4 5
// 1   1
// 2   2
// 3   3
// 4   4
// 5   5
//     */
//     //arr[0][0]����������
//     for(int i=1;i<=n;i++){
//         scanf("%d",&arr[0][i]);
//         arr[i][0] = arr[0][i];
//     }
//     //¼��������
//     /*��ά����ͼ�񻯣�
//   i 0 1 2 3 4 5
// j  
// 0     1 2 3 4 5
// 1   1 X 3 4 5 6
// 2   2 X X 5 6 7
// 3   3 X X X 7 8
// 4   4 X X X X 9
// 5   5 X X X X X
//     */
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             if(i != j)
//                 arr[i][j] = arr[0][j] + arr[i][0];
//         }
//     }
//     //�жϣ������Ѽ�����ϳ�������ֵ-1��
//     for(int m=1;m<=n;m++){
//         for(int i=1;i<=n;i++){
//             for(int j=i;j<=n;j++){
//                 if(i != j && arr[i][j] == arr[0][m]){
//                     count++;
//                     arr[0][m] = -1;
//                 }
//             }
//         }
//     }
//     printf("%d\n",count);
//     return 0;
// }



/*22 �����Ӵ�*/
//1.WA
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[505];
//     int s[505]={0};
//     int len;
//     gets(str);
//     for(int i=0;i<505;i++){
//         s[i] = 0;
//     }
//     //���ң�������������չ
//     for(int i=0;i<strlen(str)-1;i++){
//         if(str[i] == str[i+1]){
//             printf("%c%c\n",str[i],str[i+1]);
//             s[i]=1;
//         }
//     }
//         for(int i=0;i<strlen(str);i++){
//             if(s[i] == 1){
//                 if(i<=strlen(str)){
//                     len=i;
//                 }else{
//                     len=strlen(str)-1-i;
//                 }
//                 //222��111��22222��
//                 for(int j=1;j<=len;j++){
//                     if(str[i-j] == str[i+j]){
//                         for(int n=i-j;n<=i+j;n++){
//                             printf("%c",str[n]);
//                         }
//                         printf("\n");
//                     }else{
//                         break;
//                     }
//                 }
//                 //1221,123321�԰�ֵ�����
//                 for(int j=1;j<=len;j++){
//                     if(str[i-j] == str[i+1+j]){
//                         for(int n=i-j;n<=i+j+1;n++){
//                             printf("%c",str[n]);
//                         }
//                         printf("\n");
//                     }
//                 }
//             }
//         }
//     return 0;
// }
//2.master code
// #include<stdio.h>
// #include<string.h>
// char str[505];//123321125775165561
// int judge(int index_start,int length){
//     int i = index_start , j = index_start + length - 1;
//     for(;i<j && str[i]==str[j];i++,j--);//һ������һ�����ַ�����ֹѭ��������i��j�Ѿ���λ��ͬһ���ַ��˲�ͣ��˵����֮ǰ�ַ���һ������������ i >= j Ϊ�� ˵���ַ���һ��
//     return i>=j;
// }
// int main(){
//     scanf("%s",str);
//     int OriLen = strlen(str);
//     for(int len=2;len<=OriLen;len++){
//         for(int i=0;i<=OriLen-len;i++){
//             if(judge(i,len)){
//                 for(int k=i;k<len+i;k++){
//                     printf("%c",str[k]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }



/*23 G - ��������*/
//1.WA
// #include <stdio.h>
// int main(){
//     int p,e,i,d,sum=0;
//     scanf("%d %d %d %d",&p,&e,&i,&d);
//     for(int m=0;sum-d<=21252;m++){
//         sum=p+23*m;
//         if(sum > d && sum%28 == e && sum%33 == i){
//             printf("%d\n",sum-d);
//             break;
//         }
//     }
//     return 0;
// }
//2.AC
// #include <stdio.h>
// int main(){
//     int p,e,i,d;
//     scanf("%d %d %d %d",&p,&e,&i,&d);
//     p%=23;e%=28;i%=33;
//     for(int m=21252;m>=d;m--){
//         if((m-p)%23==0 && (m-e)%28==0 && (m-i)%33==0){
//             printf("%d\n",m-d);
//             break;
//         }
//     }
//     return 0;
// }
//3.master's code
// #include <stdio.h>
// int main(){
//     int p,e,i,d,t;
//     scanf("%d%d%d%d",&p,&e,&i,&d);
//     p%=23;e%=28;i%=33;t=d;
//     for(;(t-p)%23 || (t-e)%28 || (t-i)%33;t++); //��0���Ϊ�棬��ʱ����Ϊ0������Ϊ0ʱ������Ϊ0
//     printf("%d\n",t-d);
//     return 0;
// }


/*24 ���㹲��*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     int n,ifnot=0;
//     double point[101][2];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%lf %lf",&point[i][0],&point[i][1]);
//     }
//     for(int i=0;i<n-2;i++){
//         for(int j=i+1;j<n-i-1;j++){
//             for(int z=j+1;z<n;z++){
//                 if( (fabs(point[i][1] - point[j][1])/fabs(point[i][0] - point[j][0])) == (fabs(point[i][1] - point[z][1])/fabs(point[i][0] - point[z][0]))){
//                     ifnot = 1;
//                     break;
//                 }
//             }
//         }
//     }
//     if(ifnot){
//         printf("YES\n");
//     }else{
//         printf("NO\n");
//     }
//     return 0;
// }
//����ⷨ���ж��Ƿ� AC == AB + BC ����3�γ��ȣ��Դ��ж��Ƿ����㹲��



/*25 */
//ѧ������ͳ��ϵͳ����ѧ����Ϣ����ʵ�֣�
// #include <stdio.h>
// #include <string.h>
// //һά�ṹ���� �൱�� ���Դ��в�ͬ�������ݵĶ�ά����
// struct stu{//ÿ��ѧ����Ϣ
//     char name[4];//3����ĸ���峤��4Ϊ4������
//     char id[11];//10λѧ�Ŷ��峤��Ϊ11�����飬��Ϊ�ַ�����ʶ��'\0'ռһ���ֽڵ�����ռ�
//     double grade[6];//A~F�Ƴɼ�
//     double grade_average;
// };
// struct stu students[9999];//�ýṹ������Դ�9999��stu�ṹ�壬��9999��ѧ����Ϣ
// int main(){
//     //��nλѧ������Ϣ¼��ṹ����
//     int n;
//     scanf("%d",&n);
//     getchar();//������������ջس���,һ��ֻ��Ҫ��scanf�����ַ���ǰʹ��
//     for(int i = 0 ; i < n ; i++){
//         scanf("%s %s %lf%lf%lf%lf%lf%lf",students[i].name,students[i].id,
//         &students[i].grade[0],
//         &students[i].grade[1],
//         &students[i].grade[2],
//         &students[i].grade[3],
//         &students[i].grade[4],
//         &students[i].grade[5]);
//         //�� ����� �� ����ѧ���� �Լ� ��ƽ������
//         double sum = 0;
//         int count = 0;
//         for(int j = 0 ; j < 6 ; j++){
//             if(students[i].grade[j] != -1){
//                 sum += students[i].grade[j];
//                 count++;
//             }
//         }
//         students[i].grade_average = sum / count;
//     }
//     //��ѯkλѧ��
//     char id_temp[11];
//     int k;
//     scanf("%d",&k);
//     for(int i = 0 ; i < k;i++){
//         scanf("%s",id_temp);
//         for(int j = 0 ; j < n ; j++){
//             if(strcmp(id_temp , students[j].id) == 0){
//                 printf("%s %.2f\n",students[j].name,students[j].grade_average);
//                 break;
//             }
//         }
//     }
//     return 0;
// }



/*26 */


/*27 */



/*28 */


/*29 */


/*30 */


/*31 */
















/*����������������������������������������������������������������������������������������������������������������������������������������������(�ռ�-)����������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




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
        
//         while((ch = getchar()) != '\n' && ch != EOF);//�þ���ܻᵼ��mmit Failed!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     }
//     return 0;
// }
// *****************************************************************************************************************************************************************************************
/*
�������������ѭ��С֪ʶ��

while(scanf("%d",&n),n��	��nΪ0ʱ��ֹѭ��
while(scanf("%d",&n))	    ������ʱ����ֹѭ��
while(scanf("%d",&n)��=EOF)	�����ļ���βʱ��ֹѭ��
while(~scanf("%d",&n)��	    �����ļ���βʱ��ֹѭ��
while(scanf("%d",&n)==1)	��ֵʧ�ܣ�����ѭ��

*/





/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*�����������������������������������������������������������������������������������������������������������������������������������������������ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/*2 Լɪ������*/
// #include <stdio.h>
// int main(){
//     int n,m,cnt=0,out=0;
//     int monkeys[330];
//     while(scanf("%d %d",&n,&m) != EOF && m != 0 && n != 0){
//         for(int i=0;i<n;monkeys[i++]=1);
//         for(int i=0,cnt=0,out=0 ; i < n && out != n-1 ; i++){
//             if(monkeys[i]==1)cnt++;
//             if(cnt == m){
//                 monkeys[i]--;
//                 out++;
//                 cnt=0;
//             }
//             if(i == n-1) i=-1;
//         }
//         for(int i=0;i<n; i++){
//             if(monkeys[i] == 1) printf("%d\n",i+1);
//         }
//     }
//     return 0;
// }



/*3 У�������*/
// #include <stdio.h>
// int main(){
//     int L,M;
//     int cut[10001]={0};
//     int a,b;
//     scanf("%d %d",&L,&M);
//     int cnt=L+1;
//     for(int i=0;i<=L;cut[i++]=0);
//     for(int i=0;i<M;i++){
//         scanf("%d %d",&a,&b);
//         for(int j=a;j<=b;j++) cut[j]=1;
//     }
//     for(int i=0;i<=L;i++){
//         if(cut[i]==1) cnt--;
//     }
//     printf("%d\n",cnt);
//     return 0;
// }



/*5 Financial Management*/
// #include <stdio.h>
// int main(){
//     double sum=0.00;
//     double num;
//     for(int i=0;i<12;i++){
//         scanf("%lf",&num);
//         sum+=num;
//     }
//     printf("$%.2f\n",sum/12);
//     return 0;
// }



/*6 �ж�����*/
// #include<stdio.h>
// int main(){
//     int x;
//     scanf("%d",&x);
//     if((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0 && x % 3200 != 0) ) printf("Y\n");
//     else printf("N\n");
//     return 0;
// }



/*7 ��ƽ������*/
// #include <stdio.h>
// int main(){
//     int age;
//     int sum=0;
//     int n,n_t;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&age);
//         sum+=age;
//     }
//     printf("%.2f\n",1.0*sum/n);
//     return 0;
// }



/*8 �������*/
// #include <stdio.h>
// int main(){
//     int num[5];
//     int a,sum=0;
//     scanf("%d",&a);
//     for(int i=0;i<5;i++)scanf("%d",&num[i]);
//     for(int i=0;i<5;i++){
//         if(num[i]<a){
//             sum+=num[i];
//         }
//     }
//     printf("%d\n",sum);
//     return 0;
// }



/*9 ʮ���Ƶ��˽���(�������)*/
// #include <stdio.h>
// int main(){
//     unsigned int a;
//     scanf("%u",&a);
//     printf("%o",a);
//     return 0;
// }



/*10 Placing apples*/
// #include <stdio.h>
// #include <string.h>
// int place(int m,int n){
//     if(m==1 || n==1){
//         return 1;//ֻҪ��ֻʣһ��ƻ������ֻ��һ������װ����ֻ����1�ַ���
//     }else if(m < n){
//         return place(m,m);//����������ʱ����Ȼʣ��(n-m)�����ӣ���ʱ���൱��ƻ��������������ʱ�ķ���������ֻ�ÿ���m������
//     }else if(m > n){
//         return place(m,n-1) + place(m-n,n);
//     }else if(m == n){
//         return 1 + place(m,n-1);
//         //ƻ��������������ʱ�������������
//         //1.ÿ�����ӷ�һ��ƻ������������������������1�ַ���
//         //2.������һ�����̣�ֱ��ֻ��һ������װ
//     }
// }
// int main(){
//     int t=0,m,n;
//     scanf("%d",&t);
//     while(t--){
//         scanf("%d %d",&m,&n);//m��ƻ��,n������      
//         printf("%d\n",place(m,n));
//     }
//     return 0;
// }



/*11 ��7�޹ص���*/
// #include<stdio.h>
// int relateof7(int number){
//     int ret=0;
//     int a=number/10;
//     int b=number%10;
//     if(number % 7 == 0 || a == 7 || b == 7) ret=1;
//     return ret;
// }
// int main(){
//     unsigned int num,sum=0;
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         if(relateof7(i)==0) sum+=i*i;
//     }
//     printf("%u",sum);
//     return 0;
// }



/*12 �����ĸ���*/
// #include<stdio.h>
// int main(){
//     int k=0,num,sum[3];
//     for(int i=0;i<3;sum[i++]=0);
//     scanf("%d",&k);
//     for(int i=0;i<k;i++){
//         scanf("%d",&num);
//         if(num == 1) sum[0]++;
//         else if(num == 5) sum[1]++;
//         else if(num == 10) sum[2]++;
//     }
//     printf("%d\n%d\n%d\n",sum[0],sum[1],sum[2]);
//     return 0;
// }



/*13 ϸ����ֳ*/
// #include<stdio.h>
// #include<math.h>
// int days(int mon,int day){
//     int day_s=0;
//     switch(mon-1){
//         case 12:day_s+=31;
//         case 11:day_s+=30;
//         case 10:day_s+=31;
//         case 9:day_s+=30;
//         case 8:day_s+=31;
//         case 7:day_s+=31;
//         case 6:day_s+=30;
//         case 5:day_s+=31;
//         case 4:day_s+=30;
//         case 3:day_s+=31;
//         case 2:day_s+=28;
//         case 1:day_s+=31;
//     }
//     return day_s+day;
// }
// int main(){
//     int k,mon1,mon2,day1,day2,total=0;
//     long long int num,sum=0;
//     scanf("%d",&k);
//     for(int i=0;i<k;i++){
//         scanf("%d %d %lld %d %d",&mon1,&day1,&num,&mon2,&day2);
//         total = days(mon2,day2) - days(mon1,day1);
//         printf("%lld\n",num*(int)pow(2,total));
//     }
//     return 0;
// }



/*15 �����������*/
//1.WA �ó������ڴ��� �ַ��� ��������г���
// #include<stdio.h>
// #include<string.h>
// //�ȵõ���������
// int arr[1100],arrPos[1100],c[1100][1100];
// void arr_sort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int ifPos=1;
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 int t=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=t;
//                 ifPos=0;
//             }
//         }
//         if(ifPos) break;
//     }
// }
// int max(int n1,int n2){
//     return n1>n2 ? n1:n2;
// }
// int main(){
    // int N;
    // scanf("%d",&N);
    // memset(c,0,N);
    // for(int i=0;i<N;i++){
    //     scanf("%d",&arr[i]);
    //     arrPos[i]=arr[i];
    // }
//     arr_sort(arrPos,N);
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             if(arr[i-1]==arrPos[j-1]){
//                 c[i][j]=c[i-1][j-1]+1;
//             }else{
//                 c[i][j]=max(c[i-1][j],c[i][j-1]);
//             }
//         }
//     }
//     for(int i=1;i<=N;i++)
//     {
//         for(int j=1;j<=N;j++)
//             printf("%d  ",c[i][j]);
//         printf("\n");
//     }
//     printf("%d\n",c[N][N]);
//     return 0;
// }
//2.AC
// #include<stdio.h>
// int w[1100],f[1100];
// int max(int n1,int n2){
//     return n1>n2 ? n1:n2;
// }
// int main(){
//     int N;
//     scanf("%d",&N);
//     for(int i=0;i<N;i++){
//         scanf("%d",&w[i]);
//     }
//     int res=0;
//     //f[i]��ʾ�Ե�i������β�����������еĳ���
//     for(int i=0;i<N;i++){
//         f[i]=1;//����������ÿ������ʼ�������Լ�Ϊ��β���ҳ���Ϊ1�����������У���ֻ��������
//         for(int j=0;j<i;j++){
//             if(w[i]>w[j]){
//                 f[i]=max(f[i],f[j]+1);//ʹ��i��Χ�ڵ����ϸ����j��Χ�ڵ���
//             }
//         }
//         res=max(res,f[i]);//���f[i]�������
//     }
//     printf("%d\n",res);
//     return 0;
// }



/*16 Distance on Chessboard*/
#include <stdio.h>
int main(){
    

    return 0;
}











/*17 ������������*/
// #include<stdio.h>
// int main(){
//     int k;
//     int sum=0;
//     scanf("%d",&k);
//     for(int i=1;i<=k;i++){
//         sum+=i*i*i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }



/*19 �������*/
// #include <stdio.h>
// int main(){
//     int k;
//     double sum=0.00;
//     double book[10] = {28.9 , 32.7 , 45.6 , 78 , 35 , 86.2 , 27.8 , 43 , 56 , 65};
//     scanf("%d",&k);
//     while(k--){
//         sum = 0.00;
//         for(int i=0;i<10;i++){
//             int amount;
//             scanf("%d",&amount);
//             sum += amount*book[i];
//         }
//         printf("%.2f\n",sum);
//     }
//     return 0;
// }













/*�����������������������������������������������������������������������������������������������������������������������������������������������ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







