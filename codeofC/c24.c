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
//���� 2 �� 15 ����ͬ������������������Ǽ�����Щ�������ж��ٸ��������㣺������һ��������һ����������
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



/*65 ͳ���ַ�*/
// #include<stdio.h>
// int main(){
//     int N,let=0,bla=0,dig=0,oth=0;
//     char str[100];
//     scanf("%d",&N);
//     getchar();
//     for(int i=0;i<N;i++) scanf("%c",&str[i]);
//     for(int i=0;i<N;i++){
//         char c = str[i];
//         if((c>='a' && c<='z') || (c>='A' && c<='Z')) let++;
//         else if(c==32 || c==13 || c==10) bla++;
//         else if(c>='0' && c<='9') dig++;
//         else oth++;
//     }
//     printf("letter = %d, blank = %d, digit = %d, other = %d\n",let,bla,dig,oth);
//     return 0;
// }



/*66 �����Χ������*/
// #include<stdio.h>
// int main(){
//     int year,cnt=1;
//     scanf("%d",&year);
//     if(year>=2001 && year<=2100){
//         for(int x=2001;x<=year;x++){
//             if((x % 4 == 0 && x % 100 != 0) || x % 400 == 0 ) {
//                 printf("%d\n",x);
//                 cnt=0;
//             }
//         }
//         if(cnt){
//             printf("None\n");
//         }
//     }else{
//         printf("Invalid year!\n");
//     }
//     return 0;
// }



/*67 ��ѯˮ���۸�*/
// #include<stdio.h>
// int main(){
//     int n;
//     double arr[]={0 ,3.00 ,2.50 ,4.10 ,10.20};
//     printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
//     for(int i=0;i<5;i++){
//         scanf("%d",&n);
//         if(n!=0){
//             if(n<0||n>4){
//                 printf("price = 0.00\n");
//             }else{
//                 printf("price = %.2f\n",arr[n]);
//             }
//         }else{
//             break;
//         }
//     }
//     return 0;
// }



/*68 */
// #include<stdio.h>
// int main(){
//     int a,b;
//     char c;
//     double cost = 0.00;
//     scanf("%d %d %c",&a,&b,&c);
//     int numofc=c;
//     switch(b){
//         case 90:
//             cost=6.95;
//             break;
//         case 93:
//             cost=7.44;
//             break;
//         case 97:
//             cost=7.93;
//             break;
//     }
//     switch(numofc){
//         case 'm':
//             cost*=0.95;
//             break;
//         case 'e':
//             cost*=0.97;
//             break;
//     }
//     printf("%.2f\n",cost*a);
//     return 0;
// }



/*69 ���ж��������*/
// #include <stdio.h>
// int main(){
//     int year,month,day,m=0,Feburary=0;
//     scanf("%d %d %d",&year,&month,&day);
//     int yearofWhole=0;
//     if((year%4==0 && year%100!=0) || year%400==0){
//         Feburary = 29;
//         yearofWhole=366;
//     }else{
//         Feburary = 28;
//         yearofWhole=365;
//     }
//     switch(month-1){
//         case 12:m+=31;
//         case 11:m+=30;
//         case 10:m+=31;
//         case 9:m+=30;
//         case 8:m+=31;
//         case 7:m+=31;
//         case 6:m+=30;
//         case 5:m+=31;
//         case 4:m+=30;
//         case 3:m+=31;
//         case 2:m+=Feburary;
//         case 1:m+=31;
//     }
//     printf("%d\n",yearofWhole-(m+day));
//     return 0;
// }



/*70 ��Ԫһ�η�����������������������*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double a,b,c,r1=0,r2=0;
//     scanf("%lf %lf %lf",&a,&b,&c);
//     if(a==0){
//         if(b==0){
//             if(c==0)    printf("Zero Equation\n");
//             else    printf("Not An Equation\n");
//         }else if(c!=0)
//             printf("%.2f\n",-c/b);
//     }else{
//         r1=(-b-sqrt(b*b-4*a*c))/(2*a);
//         r2=(-b+sqrt(b*b-4*a*c))/(2*a);
//         if(b*b-4*a*c == 0)  printf("%.2f\n",r2);
//         else if(b*b-4*a*c > 0){
//             printf("%.2f\n",r2);
//             printf("%.2f\n",r1);
//         }else{
//             printf("%.2f+%.2fi\n",-b/(2*a),sqrt(4*a*c-b*b)/(2*a));
//             printf("%.2f-%.2fi\n",-b/(2*a),sqrt(4*a*c-b*b)/(2*a));
//         }
//     }
//     return 0;
// }



/*71 ���������ǰN���*/
// #include <stdio.h>
// int main(){
//     int n;
//     double a,b;
//     a=2;
//     b=1;
//     double sum=2.00;
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++){
//         double t = a;
//         a=a+b;
//         b=t;
//         sum+=a/t;
//     }
//     printf("%.2lf\n",sum);
//     return 0;
// }



/*72 ��������ȵļ򵥽������в��ֺ�*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double n;
//     double sum=0.00;
//     scanf("%lf",&n);
//     for(int i=1;;i++){   
//             if(i%2==0) sum-=1.0/(3*i-2);
//             else sum+=1.0/(3*i-2);   
//         if(1.0/(3*i-2)<=n){
//             break;
//         } 
//     }
//     printf("sum = %.6lf\n",sum);
//     return 0;
// }



/*73 ��������Ϸ*/
// #include <stdio.h>
// int main(void) {
//     int num, N, gs;
//     scanf("%d %d", &num, &N);
//     int guess;
//     while (1) {
//         scanf("%d", &guess);
//         gs++;
//         if ((gs > N) || (guess < 0 && gs <= N)) {
//             printf("Game Over\n");
//             return 0;
//         }
//         if (guess > num) {
//             printf("Too big\n");
//         }
//         if (guess < num) {
//             printf("Too small\n");
//         }
//         if (guess == num) {
//             if (gs == 1) {
//                 printf("Bingo!\n");
//             }
//             else if (gs <= 3) {
//                 printf("Lucky You!\n");
//             }
//             else {
//                 printf("Good Guess!\n");
//             }
//             return 0;
//         }
//     }
// }



/*74 ���ӷ�������(쳲���������)*/
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
//     int num=1;
//     int T;
//     scanf("%d",&T);
//     while(GetFib(num++)<T);
//     printf("%lld\n",num-1);
//     return 0;
// }



/*75 �߿�׹��*/
// #include<stdio.h>
// int main(){
//     double h,n,hn;
//     scanf("%lf %lf",&h,&n);
//     double sum=h;
//     for(int i=2;i<=n;i++){ 
//         h/=2;
//         sum+=2*h;
//         if(i==n) hn=h/2;
//     }
//     printf("%.1f %.1f\n",sum,hn);
//     return 0;
// }



/*76 �ڶ���*/
// #include<stdio.h>
// void max(int *a,int *b,int *c){
//     int t;
//     if(*a<*b){
//         t=*a;
//         *a=*b;
//         *b=t;
//     }
//     if(*a<*c){
//         t=*a;
//         *a=*c;
//         *c=t;
//     }
//     if(*b<*c){
//         t=*b;
//         *b=*c;
//         *c=t;
//     }
// }
// int main(){
//     int num;
//     scanf("%d",&num);
//     int a,b,c;
//     a=num/100;
//     b=num/10%10;
//     c=num%10;
//     max(&a,&b,&c);
//     if(a==b&&b==c){
//         printf("%d: %d - %d = %d\n",1,num,num,0);
//     }else{
//         int n1,n2,minus=0,cnt=1;
//         while(minus!=495){
//             n1=a*100+b*10+c;
//             n2=c*100+b*10+a;
//             minus=n1-n2; 
//             printf("%d: %d - %d = %d\n",cnt++,n1,n2,minus);
//             a=minus/100;
//             b=minus/10%10;
//             c=minus%10;
//             max(&a,&b,&c);
//         }
//     }
//     return 0;
// }



/*77 ð������*/
//1.�ַ�������(�ϸ���)
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char str[500],str_t[200],strEx[150][150];
// int num[150];
// int main(){
//     gets(str);
//     int index1=0,index2=0,index3=0;
//     for(int i=0,start=0;;i++){
//         if(str[i]=='\0'){
//             for(int j=start;j<i;j++)    str_t[index1++] = str[j];
//             strcpy(strEx[index2++],str_t);
//             num[index3++]=atoi(strEx[index2-1]);
//             break;
//         }else if(str[i]==32){
//             for(int j=start;j<i;j++)    str_t[index1++] = str[j];
//             strcpy(strEx[index2++],str_t);
//             num[index3++]=atoi(strEx[index2-1]);
//             memset(str_t,'\0',200);
//             index1=0;
//             start=i+1;
//         }
//     }
//     for(int i=0;i<index3-1;i++){
//         for(int j=0;j<index3-i-1;j++){
//             if(num[j]>num[j+1]){
//                 int t=num[j];
//                 num[j]=num[j+1];
//                 num[j+1]=t;
//             }
//         }
//     }
//     for(int i=0;i<index3;i++){
//         if(i==0) printf("%d",num[i]);
//         else printf(" %d",num[i]);
//     }
//     return 0;
// }
//2.ֱ�Ӷ�ȡ����
// #include<stdio.h>
// int num[200];
// int main(){
//     int cnt=0;
//     for(int i=0;;i++){
//         scanf("%d",&num[i]);
//         cnt++;
//         if(getchar()=='\n') break;
//     }
//     for(int i=0;i<cnt-1;i++){
//         for(int j=0;j<cnt-i-1;j++){
//             if(num[j]>num[j+1]){
//                 int t=num[j];
//                 num[j]=num[j+1];
//                 num[j+1]=t;
//             }
//         }
//     }
//     for(int i=0;i<cnt;i++){
//         if(i==0) printf("%d",num[i]);
//         else printf(" %d",num[i]);
//     }
//     return 0;
// }



/*78 ������������*/
// #include <stdio.h>
// int numOrg[550];
// int main(){
//     int n,num,cnt=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&num);
//         if(num%2!=0) numOrg[cnt++]=num;
//     }
//     for(int i=0;i<cnt-1;i++){
//         for(int j=0;j<cnt-1-i;j++){
//             if(numOrg[j]>numOrg[j+1]){
//                 int t = numOrg[j+1];
//                 numOrg[j+1]=numOrg[j];
//                 numOrg[j]=t;
//             }
//         }
//     }
//     for(int i=0;i<cnt;i++){
//         if(i==0) printf("%d",numOrg[i]);
//         else printf(",%d",numOrg[i]);
//     }
//     return 0;
// }



/*79 ������ż����*/
// #include <stdio.h>
// int num,numE[10],numO[10];
// void sortEx(int num[],int size,int mode){
//     //mode=1��С����
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(mode){
//                 if(num[j]>num[j+1]){
//                     int t = num[j+1];
//                     num[j+1]=num[j];
//                     num[j]=t;
//                 }
//             }else{
//                 if(num[j]<num[j+1]){
//                     int t = num[j+1];
//                     num[j+1]=num[j];
//                     num[j]=t;
//                 }
//             }
//         }
//     }
// }
// void prtarr(int numO[],int numE[],int sizeO,int sizeE){
//     int ifprt=0;
//     for(int i=0;i<sizeO;i++){
//         if(i==0) printf("%d",numO[i]);
//         else printf(" %d",numO[i]);
//         ifprt=1;
//     }
//     for(int i=0;i<sizeE;i++){
//         if(ifprt){
//             printf(" %d",numE[i]);
//         }else{
//             if(i==0) printf("%d",numE[i]);
//             else printf(" %d",numE[i]);
//         }
//     }
// }
// int main(){
//     int indexE=0,indexO=0;
//     for(int i=0;i<10;i++){
//         scanf("%d",&num);
//         if(num % 2==0) numE[indexE++]=num;
//         else numO[indexO++]=num;
//     }
//     sortEx(numE,indexE,1);
//     sortEx(numO,indexO,0);
//     prtarr(numO,numE,indexO,indexE);
//     return 0;
// }



/*80 ��ӰЧ��*/
//�Ż�����ʵ����Ů���������������ٴӺ��濪ʼ����ͺ���
// #include <stdio.h>
// void sortEx(double num[],int size,int mode){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(mode){
//                 if(num[j]>num[j+1]){
//                     double t = num[j+1];
//                     num[j+1]=num[j];
//                     num[j]=t;
//                 }
//             }else{
//                 if(num[j]<num[j+1]){
//                     double t = num[j+1];
//                     num[j+1]=num[j];
//                     num[j]=t;
//                 }
//             }
//         }
//     }
// }
// int main(){
//     char str[10];
//     int n,indexm=0,indexf=0;
//     double hei,male[50],female[50];
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s %lf",str,&hei);
//         if(str[0]=='m')     male[indexm++]=hei;
//         else if(str[0]=='f')    female[indexf++]=hei;
//     }
//     sortEx(male,indexm,1);
//     sortEx(female,indexf,0);
//     int ifprt=0;
//     for(int i=0;i<indexm;i++){
//         if(i==0) printf("%.2lf",male[i]);
//         else printf(" %.2lf",male[i]);
//         ifprt=1;
//     }
//     for(int i=0;i<indexf;i++){
//         if(ifprt)   printf(" %.2lf",female[i]);
//         else{
//             if(i==0) printf("%.2lf",female[i]);
//             else printf(" %.2lf",female[i]);
//         }
//     }
//     return 0;
// }



/*81 ��1�ĸ�������*/
// #include <stdio.h>
// struct numstring{
//     char str[300];
//     int cnt;
// };
// struct numstring arr[150];
// int counter(const char str[]){
//     int i=0,ret=0;
//     while(str[i]!='\0'){
//         if(str[i++]=='1' && ret++);
//     }
//     return ret;
// }
// int main(){
//     int N,max=0;
//     scanf("%d",&N);
//     for(int i=0,ifnot=1 ;i<N ;i++){
//         scanf("%s",arr[i].str);
//         arr[i].cnt = counter(arr[i].str);
//         if(ifnot++==1)    max=arr[i].cnt;
//         else if(arr[i].cnt>max)    max=arr[i].cnt;
//     }
//     for(int i=0 ;i<=max ;i++){
//         for(int j=0 ;j<N ;j++){
//             if(arr[j].cnt==i)   printf("%s\n",arr[j].str);
//         }
//     }
//     return 0;
// }



/*82 �����Ŷ�*/
// #include <stdio.h>
// #include <string.h>
// struct patients{
//     char id[50];
//     int age;
// }temp,eld[150],yog[150];
// void sort_elder(struct patients eld[],int size){
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-1-i;j++){
//             if(eld[j].age<eld[j+1].age){
//                 temp = eld[j+1];
//                 eld[j+1]=eld[j];
//                 eld[j]=temp;
//             }
//         }
//     }
// }
// int main(){
//     int N,indexe=0,indexy=0;
//     scanf("%d",&N);
//     for(int i=0;i<N;i++){
//         int age=0;
//         char id_t[50];
//         scanf("%s %d",id_t,&age);
//         if(age>=60) {
//             strcpy(eld[indexe].id,id_t);
//             eld[indexe++].age = age;
//         }else{
//             strcpy(yog[indexy].id,id_t);
//             yog[indexy++].age = age;
//         }
//     }
//     sort_elder(eld,indexe);
//     for(int i=0;i<indexe;i++)   printf("%s\n",eld[i].id);
//     for(int i=0;i<indexy;i++)   printf("%s\n",yog[i].id);
//     return 0;
//}



/*83 ��ȡ���ִ�����ֵ����*/
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// char str[500],str_t[500],strEx[500][500];
// long long int num[310];
// int main(){
//     gets(str);
//     int index1=0,index2=0,index3=0,i=0,j=0,ifallchar=0;
//     while(i>=0){
//         while(!(str[i]>='0' && str[i]<='9') && str[i]!='\0'){
//             i++;
//             ifallchar++;
//         }
//         if(ifallchar == strlen(str)){
//             printf("0\n");
//             break;
//         }else if(str[i]=='\0')     break;
//         for(j=i+1;str[j]>='0' && str[j]<='9' && str[j]!='\0';j++);
//         for(int z=i;z<j;z++)    str_t[index1++] = str[z];
//         strcpy(strEx[index2++],str_t);
//         num[index3++]=atoll(strEx[index2-1]);

//         memset(str_t,'\0',500);
//         index1=0;
//         i=j;
//     }
//     for(int i=0;i<index3-1;i++){
//         for(int j=0;j<index3-i-1;j++){
//             if(num[j]>num[j+1]){
//                 long long int t=num[j];
//                 num[j]=num[j+1];
//                 num[j+1]=t;
//             }
//         }
//     }
//     for(int i=0;i<index3;i++){
//         if(i==0) printf("%lld",num[i]);
//         else printf(",%lld",num[i]);
//     }
//     return 0;
// }



/*84 DNA����*/
// #include <stdio.h>
// #include <string.h>
// struct strarr{
//     int cnt;
//     char str[100];
// }temp,dna[150];
// int counter(const char str[]){
//     int ret=0;
//     for(int i=0;i<strlen(str)-1;i++){
//         for(int j=i+1;j<strlen(str);j++){
//             if(str[i]>str[j]) ret++;
//         }
//     }
//     return ret;
// }
// int main(){
//     int n,m,i=0,j=0;
//     scanf("%d %d",&n,&m);
//     getchar();
//     while(i<m){
//         for(j=0;j<n;j++)    dna[i].str[j]=getchar();
//         getchar();
//         dna[i].cnt = counter(dna[i].str);
//         i++;
//     }
//     for(int a=0;a<m-1;a++){
//         for(int b=0;b<m-1-a;b++){
//             if(dna[b].cnt > dna[b+1].cnt){
//                 temp=dna[b+1];
//                 dna[b+1]=dna[b];
//                 dna[b]=temp;
//             }
//         }
//     }
//     for(int a=0;a<m;a++) printf("%s\n",dna[a].str);
//     return 0;
// }



/*85 �� K ��*/
// #include <stdio.h>
// struct playerinfo{
//     int time;
//     char name[200];
// }players[200];
// int main(){
//     int N,K;
//     scanf("%d %d",&N,&K);
//     for(int i=0;i<N;i++)    scanf("%s %d",players[i].name,&players[i].time);
//     for(int i=0;i<N-1;i++){
//         for(int j=0;j<N-1-i;j++){
//             if(players[j].time > players[j+1].time){
//                 struct playerinfo temp = players[j+1];
//                 players[j+1] = players[j];
//                 players[j] = temp;
//             }
//         }
//     }
//     printf("%s\n",players[K-1].name);
//     return 0;
// }



/*86 01������(����ASCII��)*/
// #include <stdio.h>
// #include <string.h>
// struct numstring{
//     char str[300];
//     int cnt;
// }arr[150];
// int counter(const char str[]){
//     int i=0,ret=0;
//     while(str[i]!='\0') if(str[i++]=='1' && ret++);
//     return ret;
// }
// void exchange(struct numstring arr[],int index){
//     struct numstring temp;
//     temp = arr[index+1];
//     arr[index+1] = arr[index];
//     arr[index] = temp;
// }
// int main(){
//     int N,max=0;
//     scanf("%d",&N);
//     for(int i=0,ifnot=1 ;i<N ;i++){
//         scanf("%s",arr[i].str);
//         arr[i].cnt = counter(arr[i].str);
//         if(ifnot++==1)    max=arr[i].cnt;
//         else if(arr[i].cnt>max)    max=arr[i].cnt;
//     }
//     for(int i=0 ;i<N-1 ;i++){
//         for(int j=0 ;j<N-1-i ;j++){
//             if(strlen(arr[j].str) > strlen(arr[j+1].str)){
//                 exchange(arr,j);
//             }else if(strlen(arr[j].str) == strlen(arr[j+1].str)){
//                 if(arr[j].cnt > arr[j+1].cnt){
//                     exchange(arr,j);
//                 }else if(arr[j].cnt == arr[j+1].cnt && strcmp(arr[j].str,arr[j+1].str)>0){
//                     exchange(arr,j);
//                 }
//             }
//         }
//     }
//     for(int i=0;i<N;i++)    printf("%s\n",arr[i].str);
//     return 0;
// }



/*87 ����������ַ���*/
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char c = 'A';
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             printf("%c ",c++);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*88 ���ݼ���չ������*/
// #include <stdio.h>
// #include <math.h>
// int main(){
//     double x,sum=1;
//     scanf("%lf",&x);
//     for(int i=1;;i++){
//         double t = 1;
//         for(int j=2;j<=i;j++){
//             t*=j;
//         }
//         sum+=pow(x,i)/t;
//         if(pow(x,i)/t < 0.00001) break;
//     }
//     printf("%.4lf\n",sum);
//     return 0;
// }



/*89 ���������λ���֣��ݹ飩*/
// #include <stdio.h>
// #include <math.h>
// void prt(int x){
//     if(x > 9){
//         prt(x/10);
//     }
//     printf("%d ",x%10);
// }
// int main(){
//     int x;
//     scanf("%d",&x);
//     prt(x);
//     return 0;
// }

/*90 �жϻ�����*/
// #include <stdio.h>
// #include <string.h>
// char str[40000];
// int main(){
//     int n,x,ifnot=1;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s",str);
//         ifnot = 1;
//         for(int j=0,m=strlen(str)-1;j<strlen(str)/2;){
//             if(str[j++] != str[m--]){
//                 ifnot=0;
//             }
//         }
//         if(ifnot) printf("Yes\n");
//         else printf("No\n");
//         memset(str,'\0',40000);
//     }
//     return 0;
// }


/*91 ������*/
// #include <stdio.h>
// int main(){
//     int m,n,ifnot=1;
//     scanf("%d%d",&m,&n);
//     for(int i=m;i<=n;i++){
//         int sum=0,t=0;
//         int arr[40000];
//         for(int j=1,m=0;j<i;j++){
//             if(i%j==0){
//                 sum+=j;
//                 arr[m++]=j;
//             }
//             t=m;
//         }
        
//         if(sum == i){
//             ifnot = 0;
//             printf("%d = ",i);
//             for(int h=0;h<t;h++){
//                 if(h==0) printf("%d",arr[h]);
//                 else printf(" + %d",arr[h]);
//             }
//             printf("\n");
//         }
//     }
//     if(ifnot){
//         printf("No perfect number\n");
//     }
//     return 0;
// }




/*92 ��֤����°ͺղ��롱��������*/
// #include <stdio.h>
// #include <math.h>
// int isPrime(int num){
//     for(int j=2;j<=sqrt(num);j++){
//         if(num % j == 0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=2;i<=n/2;i++){
//       if(isPrime(i) && isPrime(n-i)){
//         printf("%d = %d + %d",n,i,n-i);
//         break;
//       }
//     }
//     return 0;
// }


/*93 �Ʋ���������*/
// #include <stdio.h>
// int f(int n){
//     int a=1,b=1,t;
//     for(int i=3;i<=n;i++){
//         t=b;
//         b=a+b;
//         a=t;
//     }
//     return b;
// }
// int main(){
//     int T,n;
//     scanf("%d",&T);
//     while(T--){
//         scanf("%d",&n);
//         printf("%d\n",f(n));
//     }
//     return 0;
// }


/*94 Pell����*/
//���ݹ�����Խlong long intʱ����Ŀһ���ȡģ������ע��һ���ǶԽ��ȡģ
// #include <stdio.h>
// long long int func(int n){
//     if(n==1) return 1;
//     long long int a1=1,a2=2,an;
//     for(int i=3;i<=n;i++){
//         an=(2*a2+a1)%32767;
//         a1=a2;
//         a2=an;
//     }
//     return a2;
// }
// int main(){
//     int T,n;
//     scanf("%d",&T);
//     while(T--){
//         scanf("%d",&n);
//         printf("%lld\n",func(n));
//     }
//     return 0;
// }



/*95 ��Լ����*/
// #include <stdio.h>
// int gcd(int m, int n){//m*n/gcd = lcm
//     int res=0,max= m>n ? m:n;
//     for(int i=1;i<=max;i++){
//         if(m%i==0&&n%i==0) res=i;
//     }
//     return res;
// }
// int main(){
//     int m,n;
//     scanf("%d%d",&m,&n);
//     printf("%d %d\n",gcd(m,n),m*n/gcd(m,n));
//     return 0;
// }//



/*96 ŷ������*/
// #include <stdio.h>
// int gcd(int m, int n){
//     int res=0,max= m>n ? m:n;
//     for(int i=1;i<=max;i++){
//         if(m%i==0&&n%i==0) res=i;
//     }
//     return res;
// }
// int f(int n){
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         if(gcd(n,i)==1){
//             cnt++;
//         }
//     }
//     return cnt;
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         printf("%d\n",f(n));
//     }
//     return 0;
// }







/*97 */









/*98 �׺�����������*/
// #include <stdio.h>
// #include <math.h>
// int amicable_number(int a, int b){
//     int suma=0,sumb=0;
//     for(int i=1;i<a;i++){
//         if(a%i==0) suma+=i;
//     }
//     for(int i=1;i<b;i++){
//         if(b%i==0) sumb+=i;
//     }
//     if(suma==b&&sumb==a) return 1;
//     else return 0;
// }
// int main(){
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int m,n;
//         scanf("%d%d",&m,&n);
//         printf("%s",amicable_number(m,n)&&m!=n ? "YES\n" : "NO\n");
//     }
//     return 0;
// }



/*99 ʹ�ú��������Һ����Ľ���ֵ*/
// #include <stdio.h>
// #include <math.h>
// int p(int i){
//     int res=1;
//     for(int t=1;t<=i;t++) res*=t;
//     return res;
// }
// double mycos(double eps, double x){
//     int flag=1,i=0;
//     double res=0,t=1;
//     while(t>=eps){
//         t=pow(x,i)/p(i);
//         res+=flag*t;
//         flag=-flag;
//         i+=2;
//     }
//     return res;
// }
// int main(){
//     double eps,x;
//     scanf("%lf%lf",&eps,&x);
//     printf("cos(%.2lf) = %.6lf\n", x, mycos(eps,x));
//     return 0;
// }






/*100 ʹ�ú�����֤��°ͺղ���*/
// #include <stdio.h>
// #include <math.h>
// int prime(int num){
//     for(int j=2;j<=sqrt(num);j++){
//         if(num % j == 0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int m,n;
//     scanf("%d%d",&m,&n);
//     for(int j=m,cnt=1;j<=n;j++){
//         for(int i=2;i<=j/2;i++){
//             if(j>=6 && j%2==0 && prime(i) && prime(j-i)){
//                 if(cnt%5==0) printf("%d=%d+%d\n",j,i,j-i);
//                 else printf("%d=%d+%d, ",j,i,j-i);
//                 cnt++;
//                 break;
//             }
//         }
//     }
//     return 0;
// }



/*101 ���ĵ����ֽ�����*/
// #include <stdio.h>
// void hollow_pyramid(int n){
//     int block=1;
//     for(int i=1;i<=n;i++){
//         if(n==2&&i==2) {printf("2 2");break;}
//         for(int j=1;j<=n-i;j++) printf(" ");
//         if(i!=n){
//             printf("%d",i);
//             if(i>=2){
//                 for(int k=1;k<=block;k++)   printf(" ");
//                 printf("%d",i);
//                 block+=2;
//             }
//         }else{
//             for(int k=1;k<=block+2;k++){
//                 printf("%d",i);
//                 if(n==1) break;
//             }
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     hollow_pyramid(n);
//     return 0;
// }



/*102 ʹ�ú�����������*/
// #include <stdio.h>
// #include <math.h>
// int a[500];
// int index1;
// int isPrime(int num){
//     if(num % 2 == 0 && num!=2 || num==1) return 0;
//     for(int j=2;j<=sqrt(num);j++){
//         if(num % j == 0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int Prime_sum(int m,int n){
//     int sum=0;
//     if(m>n){
//         int t=n;
//         n=m;
//         m=t;
//     }
//     for(int i=m;i<=n;i++){
//         if(isPrime(i)==1){
//             a[index1]=i;
//             index1++;
//             sum+=i;
//         }
//     }
//     return sum;
// }
// int main(){
//     int m,n,s;
//     scanf("%d %d",&m,&n);
//     printf("Sum of ( ");
//     s=Prime_sum(m,n);
//     for(int i=0;i<index1;i++) printf("%d ",a[i]);
//     printf(") = %d",s);
//     return 0;
// }



/*103 ʹ�ú���ͳ��ָ�����ֵĸ���*/
// #include <stdio.h>
// int countdigit(int number, int digit){
//     int num = number>0 ? number:(-number);
//     int cnt=0;
//     if(num==0&&digit==0) cnt++;
//     while(num>0){
//         if(num%10 == digit) cnt++;
//         num/=10; 
//     }
//     return cnt;
// }
// int main(){
//     int num,digit;
//     scanf("%d %d",&num,&digit);
//     printf("Number of digit %d in %d: %d",digit,num,countdigit(num,digit));
//     return 0;
// }



/*104 ʹ�ú������ָ����Χ�ڵ�Fibonacci��*/
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
//     int m,n,i=1,t,ifnot=1;
//     scanf("%d %d",&m,&n);
//     while((t=GetFib(i))<m){i++;ifnot=0;}
//     if(t<=n){
//         printf("%d",t);
//         while((t=GetFib(++i))<=n){
//             printf(" %d"+ifnot,t);
//         }
//     }else{
//         printf("No Fibonacci number");
//     }
//     return 0;
// }



/*105 �ڷܵĴ��У�ѭ����*/
// #include <stdio.h>
// int main(){
//     int T,x,y,n;
//     scanf("%d",&T);
//     while(T--){
//         int cnt=0;
//         scanf("%d %d %d",&x,&y,&n);
//         for(int i=1;i<=n;i++){
//             if(i%(x+1)==0 && i%(y+1)==0)   cnt+=36;
//         }
//         printf("%d\n",cnt);
//     }
//     return 0;
// }



/*106 �ַ��ϲ�*/
// #include <stdio.h>
// #include <string.h>
// char a[1<<10];
// int main(){
//     int n,cnt=0,ifnot=1;
//     scanf("%d",&n);
//     getchar();
//     gets(a);
//     for(int i=0; cnt<n && a[i]!='#' ;i++){
//         if(a[i]>='a' && a[i]<='z'){
//             printf("%c", a[i]);
//             cnt++;
//         }else if(a[i]>='A' && a[i]<='Z'){
//             printf(" %c" + ifnot, a[i]);
//             cnt += 2-ifnot;
//             ifnot = 0;
//         }
//     }
//     return 0;
// }



/*107 �򻯵Ĳ�������*/
// #include <stdio.h>
// #include <stdlib.h>
// int a[15];
// int cmp(const void *a, const void *b)
// {
//     return *(int *)a > *(int *)b;
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++)    scanf("%d",&a[i]);
//     qsort(a, n+1, sizeof(a[0]), cmp);
//     for(int i=0;i<=n;i++)    printf("%d ",a[i]);
//     return 0;
// }



/*108 ������Сֵ�����ֵ*/
// #include <stdio.h>
// int main()
// {
//     int n,a[15],min=0,max=0,maxindex=0,minindex=0;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//         if(i==0) min=max=a[0];
//         else
//         {
//             if(a[i] < min)    {minindex = i; min=a[i];}
//             else if(a[i] > max)     {maxindex = i; max=a[i];}
//         }
//     }
//     int t = a[0];
//     a[0] = a[minindex];
//     a[minindex] = t;
//     if(maxindex == 0) maxindex=minindex;
//     t = a[n-1];
//     a[n-1] = a[maxindex];
//     a[maxindex] = t;
//     for(int i=0;i<n;i++) printf("%d ", a[i]);
//     return 0;
// }



/*109 ��һ�������г������ĸ�λ����*/
// #include <stdio.h>
// int a[10] = {0,0,0,0,0,0,0,0,0,0};
// void count(int x)
// {
//     if(x>0)
//     {
//         a[x%10]++;
//         count(x/10);
//     }
// }
// int main()
// {
//     int T,x,maxcnt=0;
//     scanf("%d",&T);
//     while(T--)
//     {
//         scanf("%d",&x);
//         if(x==0) a[0]++;
//         else count(x);
//     }
//     for(int i=0;i<10;i++)  maxcnt = a[i] > maxcnt ? a[i] : maxcnt;
//     printf("%d:",maxcnt);
//     for(int i=0;i<10;i++)
//         if(a[i] == maxcnt) printf(" %d",i);
//     return 0;
// }



/*110 �ҳ������������鹲�е�Ԫ��*/
// #include <stdio.h>
// int main()
// {
//     int N[2],a[2][25],res[20],resindex=0;
//     for(int i=0;i<2;i++)
//     {
//         scanf("%d",&N[i]);
//         for(int j=0;j<N[i];j++) scanf("%d",&a[i][j]);
//     }
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<N[i];j++)
//         {
//             int ifnot=1;
//             for(int k=0;k<N[1-i];k++)
//                 if(a[i][j]==a[1-i][k])
//                 {
//                     ifnot=0;
//                     break;
//                 }
//             if(ifnot)   res[resindex++]=a[i][j];
//         }
//     }
//     for(int i=0,num=res[0];i<resindex;i++)
//     {
//         if(res[i]!=num || !i)   printf(" %d" + !i, res[i]);
//         for(int j=i+1;j<resindex;j++) res[j] = (res[i] == res[j] ? num : res[j]); 
//     }
//     return 0;
// }



/*111 �����������г��ִ���������*/
// #include <stdio.h>
// int main()
// {
//     int N,num[1000];
//     scanf("%d",&N);
//     for(int i=0;i<N;i++)    scanf("%d",&num[i]);
//     int maxnum=num[0],maxcnt=1;
//     for(int i=0;i<N-1;i++)
//     {
//         int tcnt=1;
//         for(int j=i+1;j<N;j++)
//             if(num[j] == num[i])    tcnt++;
//         if(maxcnt<tcnt)
//         {
//             maxcnt = tcnt;
//             maxnum = num[i];
//         }
//     }
//     printf("%d %d",maxnum,maxcnt);
//     return 0;
// }



/*112 �����С��*/
// #include <stdio.h>
// int main()
// {
//     int a[10];
//     for(int i=0,iffirst=0;i<10;i++)
//     {
//         scanf("%d",&a[i]);
//         if(i>0 && a[i]>0 && !(iffirst++))
//         {
//             printf("%d",i);
//             a[i]--;
//         }
//     }
//     for(int i=0;i<10;i++)
//         while(a[i]--) printf("%d",i);
//     return 0;
// }



/*113 �������*/
// #include <stdio.h>
// int f(int x)
// {
//     int res=0;
//     switch(x/10000)
//     {
//         case 0:
//         case 1: res=x/10;break;
//         case 2: res=f(10000) + (x-10000)*75/1000;break;
//         case 3:
//         case 4: res=f(20000) + (x-20000)*5/100;break;
//         case 5:
//         case 6: res=f(40000) + (x-40000)*3/100;break;
//         case 7:
//         case 8: 
//         case 9:
//         case 10: res=f(60000) + (x-60000)*15/1000;break;
//         default: res=f(100000) + (x-100000)/100;break;
//     }  
//     return res;
// }
// int main()
// {
//     int T;
//     scanf("%d",&T);
//     while(T--)
//     {
//         int x;
//         scanf("%d",&x);
//         printf("%d\n",f(x));
//     }
//     return 0;
// }



/*114 ɨѩ��ս*/
//WA
// #include <stdio.h>
// #include <stdlib.h>
// int cmp(const void *a, const void *b)
// {
//     return ((int *)a)[1] - ((int *)b)[1];
// }   
// int a[10005][2];
// int main()
// {
//     int d,Q,min = 0;
//     scanf("%d%d", &d, &Q);
//     for(int i=0;i<Q;i++) 
//     {
//         scanf("%d %d", &a[i][0], &a[i][1]);
//         if(!i) min = a[i][0] > 0 ? (a[i][0]-1):0;
//         else min = min < a[i][0] ? min:(a[i][0]-1);
//     }
//     int res = min;
//     if(min > d || Q == 0) res = d;
//     else
//     {
//         qsort(a, Q, sizeof(a[0]), cmp);
//         for(int i=0;i<Q;i++)
//         {
//             if(i == Q-1) res += d > a[i][1] ? (d - a[i][1]):0;
//             else res += a[i+1][0] > a[i][1] ? (a[i+1][0] - a[i][1] - 1):0;
//         }
//     }
//     printf("%d", res);
//     return 0;
// }
//AC
// #include <stdio.h>
// #include <string.h>
// int a[1000000]={0};
// int main()
// {
//     int d,Q,res=0;
//     scanf("%d%d", &d, &Q);
//     for(int i=0,lef=0,rig=0;i<Q;i++) 
//     {
//         scanf("%d %d", &lef, &rig);
//         for(int i=lef;i<=rig;i++) a[i]=1;
//     }
//     for(int i=1;i<=d;i++) res += !a[i];
//     printf("%d", res);
//     return 0;
// }



/*115 */








/*116 */



 


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
        // for(int i=min;i<=max;i++){
        //     a = i/100;
        //     b = i/10%10;
        //     c = i%10;
        //     if(i == a*a*a + b*b*b + c*c*c){
        //         if(count++ > 0){
        //             printf(" %d",i);
        //         }else{
        //             printf("%d",i);
        //         }
        //     }
        // }
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
    // int ret = 1;
    // if(num % 2 != 0){
    //     for(int j=3;j<sqrt(num);j++){
    //         if(num % j == 0){
    //             ret = 0;
    //         }
    //     }
    // }else{
    //     ret = 0;
    // }
    // return ret;
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
// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// char pos_c[30][4];
// int pos[30][3];
// char ret1[10],ret2[10],ret3[10],ret4[10],inf[4]="Inf";
// int max(int a,int b) {return a>b ? a:b;}
// char* King(int x1,int y1,int x2,int y2){
//     int length=0;
//     if(!(x1==x2 && y1==y2)) length=max(abs(x1-x2),abs(y1-y2));
//     ret1[0]= '0' + length;
//     return ret1;
// }
// char* Queen(int x1,int y1,int x2,int y2){
//     int length = 0;
//     if(x1==x2 && y1==y2);
//     else if(abs(x1-x2)==0 || abs(y1-y2)==0 || abs(x1-x2)==abs(y1-y2)) length = 1;
//     else length = 2;
//     ret2[0]='0' + length;
//     return ret2;
// }
// char* Car(int x1,int y1,int x2,int y2){
//     int length = 0;
//     if(x1==x2 && y1==y2);
//     else if(x1 == x2 || y1 == y2) length = 1;
//     else length = 2;
//     ret3[0]='0'+ length;
//     return ret3;
// }
// char* Elep(int x1,int y1,int x2,int y2){
//     int length=0;
//     if(x1==x2 && y1==y2);
//     else if(abs(x1-x2)==abs(y1-y2)) length= 1;
//     else if((abs(x1-x2)%2!=0 && abs(y1-y2)%2!=0) || (abs(x1-x2)==0 && abs(y1-y2)%2==0) || (abs(y1-y2)==0 && abs(x1-x2)%2==0)) length= 2;
//     else return  inf;
//     ret4[0]='0'+length;
//     return ret4;
// }
// int main(){
//     int T,index=0;
//     scanf("%d",&T);
//     getchar();
//     for(int i=0;i<T;i++){
//         scanf("%s %s",pos_c[index++],pos_c[index++]);
//         pos[index-2][0]=pos_c[index-2][0] - 96;
//         pos[index-2][1]=pos_c[index-2][1] - 48;
//         pos[index-1][0]=pos_c[index-1][0] - 96;
//         pos[index-1][1]=pos_c[index-1][1] - 48;
//         printf("%s %s %s %s\n",King(pos[index-2][0] , pos[index-2][1],pos[index-1][0],pos[index-1][1]),Queen(pos[index-2][0] , pos[index-2][1],pos[index-1][0],pos[index-1][1]),Car(pos[index-2][0] , pos[index-2][1],pos[index-1][0],pos[index-1][1]),Elep(pos[index-2][0] , pos[index-2][1],pos[index-1][0],pos[index-1][1]));
//     }
//     return 0;
// }



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



/*20 �������*/
// #include <stdio.h>
// #include <string.h>
// #define MAXN 110*110
// int arr[110][110];
// int point[MAXN][3];
// int main(){
//     int N,index=0;
//     scanf("%d",&N);
//     for(int i=0;i<=N+1;i++)
//         for(int j=0;j<=N+1;j++) arr[i][j]=99;
//     for(int i=1;i<=N;i++){
//         for(int j=1;j<=N;j++){
//             scanf("%d",&arr[i][j]);
//             if(arr[i][j]<=50){
//                 point[index][0]=i;
//                 point[index++][1]=j;
//             }
//         }
//     }
//     int count = index;
//     if(index != 1){
//         for(int i=0;i<index;i++){
//             if(arr[ point[i][0]-1 ][ point[i][1] ]<=50 && arr[ point[i][0] ][ point[i][1]-1 ]<=50  && arr[ point[i][0]+1 ][ point[i][1] ]<=50  && arr[ point[i][0] ][ point[i][1]+1 ]<=50 )
//                 count--;
//         }
//     }
//     printf("%d %d",index,count);
//     return 0;
// }



/*21 ��12����n�Ľ׳�*/
// #include <stdio.h>
// long long int sum=1;
// long long int GetP(int n){
//     if(n>=2){
//         sum*=n--;
//         GetP(n);
//     }
//     return sum;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%lld\n",GetP(n));
//     return 0;
// }



/*22 �Ǳ�����*/
//һ��ǽ    1 2 4 8
//����ǽ    3 5 9 6 10 12
//����ǽ    7 14 11 13
//�Ķ�ǽ    15
// #include<stdio.h>
// #include<string.h>
// int wall[105][105];
// int dir[4][2] = {{0,-1}, {-1,0}, {0,1}, {1,0}};//�����ж��ĸ�����, �� �� �� ��   1 2 4 8
// int dirjudge[4]={4,8,1,2};
// int square_max=1, ver, hor, rooms=0, temp=0, t=0;
// int dfs(int x, int y, int iffirst){
//     int nextX, nextY;
//     if(x>=0 && x<ver && y>=0 && y<hor && wall[x][y]>=0 && (iffirst || (!(wall[x][y] & dirjudge[t]))) ){//�ж�����
//         wall[x][y] = -1;
//         for(int i=0; i<4 ; i++){
//             nextX = x + dir[i][0];
//             nextY = y + dir[i][1];
//             t=i;
//             dfs(nextX, nextY, 0); 
//         }
//         temp++;
//         return 1;
//     }
//     return 0;
// }
// int main(){
//     scanf("%d%d",&ver, &hor);
//     for(int i=0;i<ver;i++){
//         for(int j=0;j<hor;j++)  scanf("%d",&wall[i][j]);
//     }
//     for(int i=0;i<ver;i++){
//         for(int j=0;j<hor;j++){
//             if(dfs(i,j,1)) {
//                 rooms++;
//                 square_max = temp>square_max ? temp:square_max;
//                 temp=0;
//             }
//         }
//     }
//     printf("%d\n%d\n",rooms,square_max);
//     return 0;
// }



/*23 ����*/
// #include <stdio.h>
// int arr[16];
// int main(){
//     int n,index=0,cnt=0;
//     while(scanf("%d",&n)!=EOF, n)   arr[index++] = n;
//     for(int i=0;i<index;i++){
//         for(int j=0;j<index;j++){
//             if(arr[i]*2 == arr[j])  cnt++;
//         }
//     }
//     printf("%d\n",cnt);
//     return 0;
// }



/*24 ��ӡ����ˮ�ɻ���(��λ��)*/
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     for(int i=100;i<1000;i++){
//         a = i/100;
//         b = i/10%10;
//         c = i%10;
//         if(i == a*a*a + b*b*b + c*c*c)  printf("%d\n", i);
//     }
//     return 0;
// }



/*25 Biorhythms(��������)*/
// #include <stdio.h>
// int main(){
//     int p,e,i,d,cnt=1;
//     while(scanf("%d%d%d%d",&p,&e,&i,&d)!=EOF && (p!=-1||e!=-1||i!=-1||d!=-1)){
//         p%=23;
//         e%=28;
//         i%=33;
//         for(int m=d+1;;m++){//�Ӻ���ǰ�����Ǵ��
//             if((m-p)%23==0 && (m-e)%28==0 && (m-i)%33==0){
//                 printf("Case %d: the next triple peak occurs in %d days.\n",cnt++,m-d);
//                 break;
//             } 
//         }
//     }
//     return 0;
// }



/*26 �������ʽ*/
// #include <stdio.h>
// #include <stdlib.h>
// double func(){//�ݹ����һ��ջӦ�ã����������ʽ�������� �����ʵ�ʽ�����ʽ�ķ�ʽ
//     char str[33000];
//     scanf("%s",str);
//     switch(str[0]){
//         case '+':
//             return func() + func();
//         case '-':
//             return func() - func();
//         case '*':
//             return func() * func();
//         case '/':
//             return func() / func();
//         default:
//             return atof(str);
//     }
// }
// int main(){
//     printf("%f\n",func());
//     return 0;
// }



/*27 ��һ��C++����*/
// #include <iostream>
// using namespace std;
// int main(){
//     cout << "Welcome to C++!";
//     return 0;
// }



/*28 Number of letters*/
//1.WA
// #include <stdio.h>
// #include <string.h>
// typedef struct chartimes{
//     char c;
//     int cnt;
// }ct;
// ct counter(char str[]){
//     ct chars[1020];
//     ct max;
//     max.cnt=0;
//     int m=0;
//     for(int i=0;i<strlen(str)-1-1;i++){
//         chars[m].cnt=0;
//         if(str[i]!=32){
//             for(int j=i;j<strlen(str);j++){
//                 if(str[i]==str[j] && str[j]!=32){
//                     chars[m].c = str[i];
//                     chars[m].cnt++;
//                     if(i!=j) str[j]=32;
//                 }
//             }
//             if(chars[m].cnt>max.cnt){
//                 max = chars[m];
//             }
//             str[i] = 32;
//             m++;
//         }
//     }
//     return max;
// }
// int main(){
//     int N;
//     scanf("%d",&N);
//     for(int i=0;i<N;i++){
//         char str[1020];
//         scanf("%s",str);
//         ct tep = counter(str);
//         printf("%c %d\n",tep.c,tep.cnt);
//     }
//     return 0;
// }
//2.AC
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     while(n--){
//         char str[1100];
//         int cnt[30], max=0;
//         char maxchar;
//         memset(cnt, 0, sizeof(cnt));
//         scanf("%s",str);
//         for(int i=0;str[i]!='\0';i++){
//             cnt[ str[i]-'a' ]++;
//         }
//         for(int i=0;i<27;i++){
//             if(cnt[i] > max){
//                 max = cnt[i];
//                 maxchar = i + 'a';
//             }
//         }
//         printf("%c %d\n",maxchar,max);
//     }
//     return 0;
// }






/*29 �������*/
// #include <stdio.h>
// int arr[1005][1005];
// int main(){
//     int n,a1,a2,b1,b2;
//     scanf("%d",&n);
//     for(int i=0,iffirst=1;i<n;i++){
//         for(int j=0;j<n;j++){
//             scanf("%d",&arr[i][j]);
//             if(arr[i][j]==0){
//                 if(iffirst){
//                     iffirst=0;
//                     a1=i;
//                     b1=j;
//                 }
//                 a2=i;
//                 b2=j;
//             }
//         }    
//     }
//     printf("%d\n",(a2-a1-1)*(b2-b1-1));
//     return 0;
// }



/*30 Hangover*/
// #include <stdio.h>
// int main(){
//     double n;
//     while(scanf("%lf",&n)!=EOF ,n){
//         double sum=0;
//         int i=0;
//         do{
//             i++;
//             sum += 1.0/(i+1);
//         }while(sum<n);
//         printf("%d card(s)\n",i);
//     }
//     return 0;
// }



/*31 ��׳˵ĺ�*/
// #include <stdio.h>
// int t=1;
// int sum(int n){
//     if(n>=2){
//         t*=n--;
//         sum(n);
//     }
//     return t;
// }
// int main(){
//     int n,s=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         s+=sum(i);
//         t=1;
//     }
//     printf("%d\n",s);
//     return 0;
// }



/*32 �˽��Ƶ�ʮ����*/
// #include <stdio.h>
// #include <math.h>
// int a,arr[200001];
// int main(){
//     scanf("%d",&a);
//     int index=0,sum=0;
//     while(a>0){
//         arr[index++] = a%10;
//         a/=10;
//     }
//     for(int i=0;i<index;i++){
//         sum += arr[i]*pow(8,i);
//     }
//     printf("%d\n",sum);
//     return 0;
// }



/*33 ������(�߾���)�˷�*/
// #include <stdio.h>
// #include <string.h>
// char n1[205],n2[205];
// int a[40000],b[40000],res[40002];
// int main(){//'0' = 48
//     scanf("%s%s",&n1,&n2);
//     memset(res, 0, sizeof(res));
//     int len1=strlen(n1), len2=strlen(n2);
//     for(int i=0;i<len1;i++) a[i] = n1[len1-1-i] - '0';
//     for(int i=0;i<len2;i++) b[i] = n2[len2-1-i] - '0';
//     for(int i=0;i<len1;i++){
//         for(int j=0;j<len2;j++){
//             res[i+j] += a[i]*b[j];
//             res[i+j+1] += res[i+j]/10;//ʮλ����λ����һ������λ��
//             res[i+j] %= 10;//�ڸ�λ���ֻ������λ��
//         }
//     }
//     for(int i=len1+len2-1;i>=0;i--){
//         if(i==len1+len2-1 && res[i]==0) continue;//��λ������̫С�����������λ����ǰ����
//         printf("%d",res[i]);
//     }
//     //  1  2  3
//     //X 4  5  6
//     //  6 12 18
//    //5 10 15  0
//  //4 8 12  0  0
//     return 0;
// }



/*34 �ﳵ����· */
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     while(n--){
//         double t1=50,t2=0,s;
//         scanf("%lf",&s);
//         t1+=s/3.0;
//         t2+=s/1.2;
//         if(t1==t2) printf("All\n");
//         else printf("%s\n",t1<t2?"Bike":"Walk");
//     }
//     return 0;
// }



/*35 ��ֱֱ��ͼ*/
// #include <stdio.h>
// #include <string.h>
// char str[400];
// int sum[30];
// int main(){
//     int max=0,n=4;
//     memset(sum, 0, sizeof(sum));
//     while(n--){
//         gets(str);
//         for(int i=0;i<strlen(str);i++){
//             if(str[i]>='A' && str[i]<='Z')  sum[str[i] - 'A']++;//�����ж����һ��Ҫд������ֻ�ж��Ƿ�Ϊ�ո񣬷���RE
//         }
//     }
//     for(int i=0;i<26;i++)   max = max>sum[i] ? max:sum[i];
//     for(int i=max;i>0;i--){
//         for(int j=0;j<26;j++){
//             if(sum[j]>=i)   printf(" *"+!j);
//             else    printf("  "+!j);
//         }
//         printf("\n");
//     }
//     printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z");
//     return 0;
// }



/*36 ����2��N�η�*/
// #include <stdio.h>
// #include <string.h>
// int main(){
//     int n, res[35]={1}, index=1;
//     memset(res+1, 0, sizeof(res)-sizeof(res[0]));
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         int temp=0;//�����������������棬��������
//         for(int j=0;j<index;j++){
//             temp += res[j]*2;
//             res[j] = temp%10;
//             temp /= 10;
//         }
//         if(temp!=0) res[index++]+=temp;//��ʵֱ�� =1 ���ɣ���Ϊ�������ǽ�1
//     }
//     while(index) printf("%d",res[--index]);
//     return 0;
// }



/*37 ����������*/
// #include <stdio.h>
// int a[105][105];//a[i][j] -> a[i+1][j]��a[i+1][j+1]

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
    







//     return 0;
// }



/*38 Number of letters*/

/*39 Number of letters*/













/*�����������������������������������������������������������������������������������������������������������������������������������������������ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*����������������������������������������������������������������������������������������������������������������������������������������������ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
//P2142 �߾��ȼ��� (δ���)
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>
// #define SIZE 10800
// char num1[SIZE],num2[SIZE];
// int n1[SIZE],n2[SIZE],minus[SIZE];
// int main(){
//     int cnt=0;
//     memset(n1,0,SIZE);
//     memset(n2,0,SIZE);
//     memset(minus,0,SIZE);
//     scanf("%s %s",num1,num2);
//     for(int i=0;num1[i]!='\0';i++)  n1[i] = (int)num1[i]-48;
//     for(int i=0;num2[i]!='\0';i++)  n2[i] = (int)num2[i]-48;
//     for(int i=strlen(num1)-1 , j=strlen(num2)-1 , z=0; i>0&&j>0 ;i--,j--,z++){
//         int t = n1[i] - n2[j];
//         if(t<0 && i!=0 && j!=0){
//             n1[i-1]--;
//             minus[z] = abs(t);
//         }else{
//             minus[z] = t;
//         }
        
//         cnt++;
//     }
//     //1231234
//     //5678
    
//     for(int i=cnt-1;i>0;i--) printf("%d",minus[i]);

//     //�������minus


//     return 0;
// }































/*����������������������������������������������������������������������������������������������������������������������������������������������ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////






/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*�������������������������������������������������������������������������������������������������������������������������������������������㷨��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/*һ.̰���㷨��
1.̰���㷨�Ļ���˼·�Ǵ������ĳһ����ʼ�����һ��һ���ؽ��У�����ĳ���Ż���ȣ�ÿһ����Ҫȷ���ܻ�þֲ����Ž⡣
ÿһ��ֻ����һ�����ݣ�����ѡȡӦ������ֲ��Ż�������������һ�����ݺͲ������Ž�����һ�����ǿ��н�ʱ��
�Ͳ��Ѹ�������ӵ����ֽ��У�ֱ������������ö���꣬���߲���������㷨ֹͣ.
2.���ڲ������������ϼ��Կ��ǣ���������������ĳ�������ϵľֲ����Ž⣬���У�
    ���㷨���ڵ����⣺
    1.���ܱ�֤��õ���������ѵ�
    2.�������������ֵ����Сֵ������
    3.ֻ��������ĳЩԼ�������Ŀ��н�ķ�Χ
3.��֤�뷨��ȷ�ԣ����ȿ���һ���������㣬���Ƶ���n���ͬ���뷨���ܾٳ�����ֱ��һ��û�з�����
*/
//1.ƽ���ַ���
// #include <stdio.h>
// #define MAX 10000
// int main(){
//     char str[MAX];
//     int cnt=0,cnt_t=0;
//     scanf("%s",str);
//     for(int i=0 ; str[i] != '\0' ;i++){
//         if(str[i] == 'R') cnt_t++;
//         else if(str[i] == 'L') cnt_t--;
//         if(cnt_t == 0){
//             cnt++;
//         }
//     }
//     printf("%d",cnt);
//     return 0;
// }



//2.������Ʊ�����ʱ��
//ֻ�����ڵ��������Ƶ��������������ò�ۼ�������������������,�ȼ���ÿ�춼����
// #include <stdio.h>
// int main(){
//     int prices[] = {1,2,3,4,5};
//     int pricesSize = sizeof(prices)/sizeof(prices[0]);
//     int profit=0;
//     for(int i=1 ; i<pricesSize ; i++){
//         if(prices[i-1]<prices[i]){
//             profit += prices[i] - prices[i-1];
//         }
//     }
//     printf("%d",profit);
//     return 0;
// }



//3.��Ծ��Ϸ
// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     bool canJump = true;
//     int nums[] = {3,2,1,0,4};
//     int numsSize = sizeof(nums) / sizeof(nums[0]);
//     int temp = 0;
//     for(int i=0;i<numsSize;i++){
//         //������ߵĲ������±�����С�����Ѿ��޷�������ȥ��
//         if(temp < i){
//             canJump = false;
//             break;
//         }
//         temp = temp > (i+nums[i]) ? temp : (i+nums[i]);
//     }
//     printf("%s\n",canJump > 0 ? "true" : "false");
//     return 0;
// }


//4.��Ӱ�� (�������ص�����/���ظ�����ļ���)
//�������⣬�����������Ҷ˵���������ٱ������飬
//����˵���ڵ��������Ҷ˵�ֵʱ������һ�����غ�����(cnt��ʼΪ1����ΪĬ��������һ����Ϊ���غ�����)��
// #include<stdio.h>
// #include<stdlib.h>
// #define size 200
// int cmp(const void* a , const void* b){
//     return ((int *)a)[1] - ((int *)b)[1] ;
// }
// int main(){
//     int n;
//     while(scanf("%d",&n),n){
//         int arr[size][2],cnt=1;
//         for(int m=0;m<n;m++)    scanf("%d%d",&arr[m][0],&arr[m][1]);
//         qsort(arr,n,sizeof(arr[0]),cmp);
//         for(int i=0,rNum=arr[0][1];i<n;i++){
//             if(arr[i][0] >= rNum){
//                 rNum = arr[i][1];
//                 cnt++;
//             }
//         }
//         printf("%d\n",cnt);
//     }
//     return 0;
// }




//5.���зֶ�
// #include <stdio.h>
// #define size 100000+100
// int arr[size];
// int main(){
//     int n,m,cnt=0,sum=0;
//     scanf("%d %d",&n,&m);
//     for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//     for(int i=0;i<n;i++){
//         if(arr[i]+sum > m){
//             sum=0;
//             cnt++;
//         }
//         sum += arr[i];
//     }
//     printf("%d\n",++cnt);
//     return 0;
// }


//6.ʥ�����˵�����
// #include<stdio.h>
// #include<stdlib.h>
// struct gift{
//     double value;
//     double weight;
// }gifts[150];
// int cmp(const void* a, const void* b){
//     return ((struct gift *)a)->value / ((struct gift *)a)->weight  <  ((struct gift *)b)->value / ((struct gift *)b)->weight  ?   1 : -1 ;
// }
// int main(){
//     int n,m,a,b;
//     double sum=0.0;
//     scanf("%d%d",&n,&m);
//     for(int i=0;i<n;i++)    scanf("%lf %lf",&gifts[i].value,&gifts[i].weight);
//     qsort(gifts,n,sizeof(gifts[0]),cmp);
//     for(int i=0,j=0;i<n;i++){
//         if((m-j) >= gifts[i].weight){
//             sum += gifts[i].value;
//             j += gifts[i].weight;
//         }else{
//             sum += gifts[i].value * (m-j) / gifts[i].weight;
//             break;
//         }
//     }
//     printf("%.1f\n",sum);
//     return 0;
// }




//7.����
//��������Ҫ�ֵ��������Ҷ˵㿪ʼ��
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define size 30000+100
// int cmp(const void* a , const void* b){
//     return ((int *)a)[1] - ((int *)b)[1] ;
// }
// int arr[size][3];
// int tree[size];
// int main(){
//     int n,h,cnt=0;
//     scanf("%d%d",&n,&h);
//     memset(tree,0,size);
//     for(int i=0;i<h;i++){
//         scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
//     }
//     qsort(arr,h,sizeof(arr[0]),cmp);
//     for(int i=0  ; i<h ; i++){
//         //����������,
//         //�ȱ����Ƿ����ص����Ѿ��ֺõģ����о���������
//         for(int j=arr[i][0]; j<=arr[i][1] ; j++){
//             if(arr[i][2]==0) break;
//             if(tree[j]==1) arr[i][2]--;
//         }
//         for(int j=arr[i][1]; j>=arr[i][0] ; j--){
//             //�ص����Ĵ������Ѿ����˾����ġ�Ҫ�ֵ�������
//             if(arr[i][2]==0) break;
//             if(tree[j]==0){
//                 tree[j]=1;
//                 arr[i][2]--;
//                 cnt++;
//             }
//         }
//     }
//     printf("%d\n",cnt);
//     return 0;
// }




//8.��ص�����
// #include <stdio.h>
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF){
//         double t,sum=0.0,res=0.0,max=0.0;
//         for(int i=0;i<n;i++){
//             scanf("%lf",&t);
//             sum+=t;
//             max = max > t ? max : t;
//         }   
//         if(sum < 2*max){
//             //��ʱǰ�����е������������������ɶԣ�Ҳ����˵���ŵ��һֱ��
//             res = sum - max;
//         }else{
//             res = sum / 2;
//         }
//         printf("%.1lf\n",res);
//         //��ز�Ӧ��һ��һ���������ǽ��ɳ�˫�ĵ����ȫ���ۺϳ�һ���������أ����ܳ�˫�ĵ����������
//         //if sum<2*max ����Щ��ز�������ֳ�����
//         //
//         //else
//         //  

//         //3 3 5
//         //3 3 (2.5 + 2.5) ������������������
//         //res = sum/2

//         //3 3 5 5
//         //3 3 (2.5+2.5) (2.5+2.5)
//         //8
//     }
//     return 0;
// }



//9.��С������
//1.WA
// #include <stdio.h>
// int maxofnum(int n){
//     int max=n%10,cnt=1;
//     for(int i=n;i>0;){
//         max = max > (i%10) ? max:(i%10);
//         i/=10;
//     }
//     for(int i=n;i>0;){
//         if(i%10==max) break;
//         i/=10;
//         cnt*=10;
//     }
//     return cnt;
// }
// void numPRT(int n){
//     if(n>9){
//         numPRT(n/10);
//     }
//     if(n%10 != 0)   printf("%d",n%10);
// }
// int main(){
//     int n,t,k;
//     scanf("%d",&t);
//     for(int i=0;i<t;i++){
//         scanf("%d%d",&n,&k);
//         int m=n;
//         for(int j=0;j<k;j++){
//             int res=maxofnum(m);
//             m -= res * (m/res%10);
//         }
//         numPRT(m);
//         printf("\n");
//     }
//     return 0;
// }
//2.AC
// #include<stdio.h>
// #include<string.h>
// char str[20];
// int main(){
//     int t,k,len=0;
//     scanf("%d",&t);
//     while(t--){
//         scanf("%s%d",str,&k);
//         len = strlen(str);
//         while(k--){
//             //����str,������ǰ��С�����������ǰŲ,����'\0'
//             //9128456'\0'   len
//             //128456'\0'
//             //12456'\0'
//             for(int i=0;i<len;i++){
//                 if(str[i] > str[i+1]){
//                     for(int j=i;j<len;j++){
//                         str[j] = str[j+1];
//                     }
//                     break;
//                 }
//             }
//             //ÿ��Ų��˵��strlen��1
//             len--;
//         }
//         printf("%s\n",str);
//         memset(str,'\0',strlen(str));
//     }
//     return 0;
// }



//*10.�������
//1.WA
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 1100
// int cmp(const void* a, const void* b){
//     return ((int *)a)[0] < ((int *)b)[0] ;
// }
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF, n){
//         int c[SIZE][2],s[SIZE];
//         int c_t[SIZE];
//         int max=0 ,min=0;
//         for(int i=0;i<n;i++) {
//             scanf("%d",&c[i][0]);
//             c[i][1]=c_t[i]=1;
//         }
//         for(int i=0;i<n;i++) {
//             scanf("%d",&s[i]);
//         }
//         qsort(c ,n ,sizeof(c[0]) ,cmp);
//         qsort(s ,n ,sizeof(s[0]) ,cmp);
//         for(int i=0;i<n;i++){
//             int ifnotmax=1,ifnotmin=1;
//             for(int j=0 ; j<n ; j++){
//                 if( c[j][1] ){
//                     if(s[i] > c[j][0]){
//                         max+=3;
//                         c[j][1] = 0;
//                         ifnotmax = 0;
//                         break;
//                     }else if(s[i] == c[j][0]){
//                         max+=2;
//                         c[j][1] = 0;
//                         ifnotmax = 0;
//                         break;
//                     }
                    
//                 }
//             }
//             if(ifnotmax){
//                 max+=1;
//                 for(int j=0;j<n;j++){
//                     if(c[j][1]) {
//                         c[j][1]=0;
//                         break;
//                     }
//                 }
//             }

//             for(int j=0 ; j<n ; j++){
//                 if( c_t[j] ){
//                     if(s[i] < c[j][0]){
//                         min+=1;
//                         c_t[j] = 0;
//                         ifnotmin = 0;
//                         break;
//                     }else if(s[i] == c[j][0]){
//                         min+=2;
//                         c_t[j] = 0;
//                         ifnotmin = 0;
//                         break;
//                     }
                    
//                 }
//             }
//             if(ifnotmin){
//                 min+=3;
//                 for(int j=n-1;j>=0;j--){
//                     if(c_t[j]) {
//                         c_t[j]=0;
//                         break;
//                     }
//                 }
                
//             }

//         }
//         //˫��ѭ��
//         //max:
//         //��s[0]��ʼ ��c[0]��ʼ�� c[j][1] && ���ڵ���c[j][0],�ҵ���+=,��c[j][1]=0
//         //if��s[i]û�ҵ���+=1,��������ifnot=1

//         //min:
//         //��s[0]��ʼ ��c[0]��ʼ�� c_t[j] &&С�ڵ���c[j][0],�ҵ���+=,��c_t[j]=0
//         //if��s[i]û�ҵ���+=3,��������ifnot=1

//         printf("%d %d\n",max,min);
//     }
//     return 0;
// }
//30 17 6
//22 11 5
//max=7
//min=3

//30
//22
//max=1
//min=1

//22
//30
//max=3
//min=3

//20 19
//22 18
//max=4
//min=4
//2.AC
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 1100
// int cmp(const void* a, const void* b){
//     return *(int *)a < *(int *)b ;
// }
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF, n){
//         int c[SIZE],s[SIZE];
//         int max=0 ,min=0;
//         for(int i=0;i<n;i++) scanf("%d",&c[i]);
//         for(int i=0;i<n;i++) scanf("%d",&s[i]);
//         qsort(c ,n ,sizeof(c[0]) ,cmp);
//         qsort(s ,n ,sizeof(s[0]) ,cmp);
//         int cmax,cmin,smax,smin;
//         cmin=smin=n-1;//��С������λ��
//         cmax=smax=0;//��������λ��
//         while(smax <= smin){//��������λ����С������λ���ܸ�����Խ���൱��ֻ����n��
//             if(s[smax] > c[cmax]){//��������Ӯ��������������Ӯ��Ӯ
//                 max+=3;
//                 smax++;
//                 cmax++;
//                 //���Զ�λ����������
//             //ÿ������һ�ζ�Ҫ��һ��ʤ����������Ҫ��ֻ��������С�����������������
//             }else if(s[smax] < c[cmax]){//������Ӯ���˶������������Ǿ��ü�����С����ȥ�䣬��t--
//                 max+=1;
//                 smin--;
//                 cmax++;
//             //������ƽ��ʱ���ǾͲ�����㰲�ų����������ȿ�����С������û�м�ֵ
//             }else if(s[smin] > c[cmin]){//˫����С�������ȣ���Ӯ��ã���ֹ�����˷ѵ�һ��Ӯ�Ļ���
//                 max+=3;
//                 smin--;
//                 cmin--;
//                 //˫����С������λǰ��
//             }else{//��С����Ӯ���˾�ֱ��ȥ���ĵ��Է�������
//                 max += (s[smin] == c[cmax]) ? 2:1 ;//��ʱ�������ȣ���С�����ֻ��������ȣ���Ȼ��ֻ����
//                 smin--;
//                 cmax++;
//             }
//         }
//         cmin=smin=n-1;//��С������λ��
//         cmax=smax=0;//��������λ��
//         while(smax <= smin){
//             if(s[smax] < c[cmax]){//�������������
//                 min+=1;
//                 smax++;
//                 cmax++;
//             //ÿ�����ж�Ҫ��һ��ʤ���������Ķ����ڶ����ˣ�����ֻ�����������С����
//             }else if(s[smax] > c[cmax]){
//                 min+=3;
//                 cmin--;
//                 smax++;
//             //�������ƽ��
//             }else if(s[smin] < c[cmin]){//��˫����С�ߣ�������䣬
//                 min+=1;
//                 smin--;
//                 cmin--;
//             }else{//�䲻�˾�ֻ�����Ķ�����С����,��������ƽ����Ȼֻ��Ӯ
//                 min += (c[cmin] == s[smax]) ? 2:3 ;
//                 smax++;
//                 cmin--;
//             }
//         }
//         printf("%d %d\n",max,min);
//     }
//     return 0;
// }
// 30 17 6  c
// 22 11 5  s
//max=7
//min=3

// 3
// 92 83 71   cmax(����������λ) , cmin(����С������λ)      
// 95 87 74   smax(����������λ) , cmax(����С������λ)           
// 9 5

// 95 87 74
// 92 83 71
//7 3
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 1100
// int cmp(const void* a, const void* b){
//     return *(int *)a < *(int *)b ;
// }
// int f(int c[], int s[], int n, int tag){
//         int cmax,cmin,smax,smin,max=0,min=0;;
//         cmin=smin=n-1;
//         cmax=smax=0;
//         while(smax <= smin){
//             if(s[smax] > c[cmax]){
//                 max+=3;
//                 min+=1;
//                 smax++;
//                 cmax++;
//             }else if(s[smax] < c[cmax]){
//                 max+=1;
//                 min+=3;
//                 smin--;
//                 cmax++;
//             }else if(s[smin] > c[cmin]){
//                 max+=3;
//                 min+=1;
//                 smin--;
//                 cmin--;
//             }else{
//                 max += (s[smin] == c[cmax]) ? 2:1;
//                 min += (s[smin] == c[cmax]) ? 2:3;
//                 smin--;
//                 cmax++;
//             }
//         }
//         if(!tag) return max;
//         else return min;
// }
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF, n){
//         int c[SIZE] ,s[SIZE] ,tag=1;
//         for(int i=0;i<n;i++) scanf("%d",&c[i]);
//         for(int i=0;i<n;i++) scanf("%d",&s[i]);
//         qsort(c ,n ,sizeof(c[0]) ,cmp);
//         qsort(s ,n ,sizeof(s[0]) ,cmp);
//         printf("%d %d\n",f(c ,s ,n ,tag),f(s ,c ,n ,tag--));
//     }
//     return 0;
// }




//11.�߶�
// #include <stdio.h>
// #include <stdlib.h>
// #define SIZE 1000000+1
// struct line{
//     int lef;
//     int rig;
// }lines[SIZE];
// int cmp(const void* a, const void* b){
//     return ((struct line *)a)->rig - ((struct line *)b)->rig;
// }
// int main(){
//     int n,a,b,cnt=1;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++)    scanf("%d %d",&lines[i].lef,&lines[i].rig);
//     qsort(lines ,n , sizeof(lines[0]), cmp);
//     for(int i=1,t=lines[0].rig;i<n;i++){
//         if(lines[i].lef >= t){//���ظ���ֱ�Ӻ��ԣ�ֻ���������ظ��߶��߲���Ϊ���Ҷ�
//             cnt++;
//             t=lines[i].rig;
//         }
//     }
//     printf("%d\n",cnt);
//     return 0;
// }



//12.���������
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct game{
//     int t;
//     int pns;
// }games[550];
// // int cmp(const void* a, const void* b){
// //     int t1=((struct game *)a)->t , t2=((struct game *)b)->t ;
// //     if(t1==t2){
// //         return ((struct game *)a)->pns < ((struct game *)b)->pns ;
// //     }else{
// //         return t1>t2 ;
// //     }
// // }
// int cmp(const void* a, const void* b){
//         return ((struct game *)a)->pns < ((struct game *)b)->pns ;
// }
// char ifnot[550]={'0'};
// int main(){
//     int money,n,cnt=1,sumofpns=0;
//     scanf("%d%d",&money,&n);
//     memset(ifnot+1, '0', n);
//     for(int i=1;i<=n;i++) scanf("%d",&games[i].t);
//     for(int i=1;i<=n;i++) scanf("%d",&games[i].pns);
//     qsort(games+1 ,n ,sizeof(games[0]) ,cmp);
//     for(int i=1;i<=n;i++){
//         //���Լ���ʱ�޿�ʼ��ǰ��λ�ã���Ϊ�Ѿ������˰���Ǯ������
//         //ͬʱ��εĿ�����ǰ��ѡ��λ�����º������Ҫ���λ�ã�����Ǯ����������
//         int flag=0;
//         for(int j=games[i].t ; j ; j--){
//             if(ifnot[j]=='0'){
//                 ifnot[j]='1';
//                 flag=1;
//                 break;
//             }
//         }
//         if(flag==0){
//             for(int j=n ; j ; j--){
//                 if(ifnot[j]=='0'){
//                     ifnot[j]='1';
//                     break;
//                 }

//             }
//             money-=games[i].pns;
//         }
//     }

//     //��Ϊ
//     // for(int i=1;i<=n;i++){
//     //     if(ifnot[ games[i].t ]=='0')    ifnot[ games[i].t ] = '1';
//     //     else if(games[i].pns > games[cnt].pns){
//     //         struct game temp = games[cnt] ;
//     //         games[cnt]=games[i];
//     //         games[i]=temp;
//     //         cnt++;
//     //     }
//     // }
//     // for(int i=1,j=1;i<=n;i++){
//     //     if(games[i].t < j){
//     //         money -= games[i].pns;
//     //     }else{
//     //         j++;
//     //     }
//     // }
//     printf("%d\n",money);
//     //�涨ʱ��ǰһ��ֻ������,����ͬʱ����滻ǰ�淣Ǯ�ٵ�
//     return 0;
// }



//13.Find Amir
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int cnt=0;
//     if(n%2==0) cnt=n/2-1;
//     else    cnt=n/2 ;
//     printf("%d\n",cnt);
//         // printf("%d\n",n / 2 - ((n & 1) ? 0 : 1));
//     return 0;
// }
//1 2 3 4 5 6 7  8  111
//1 1 1 1
//10 1  9 2  8 3 7 4 6 5
//1 2 3 4   1
//











/*��.�ݹ�*/

//1.��¥��(쳲���������)
// #include <stdio.h>
// int f(int n){
//     if(n==1) return 1;
//     else if(n==2) return 2;
//     return f(n-1)+f(n-2);
// }
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF){
//         printf("%d\n",f(n));
//     }
//     return 0;
// }


//2.Function Run Fun
//���������� / �������ü���궨�����һ����ʹ������
//��������������һ�ֶ�̬�滮Ӧ��,ĳ����������˵��̬�滮���� ������dfs
//��#define S((a),(b),(c)) save[a][b][c]!=0 ? save[a][b][c] : (save[a][b][c]=w(a,b,c));
// #include <stdio.h>
// int save[22][22][22]={0};
// int w(int a,int b,int c){
//     int res,res1,res2,res3,res4;
//     if(a<=0 || b<=0 || c<=0){
//         return 1;
//     }else if(a>20 || b>20 || c>20){
//         res = save[20][20][20]!=0 ? save[20][20][20] : (save[20][20][20]=w(20,20,20));
//         return res;
//     }else if(a<b && b<c){
//         res1 = save[a][b][c-1]!=0 ? save[a][b][c-1] : (save[a][b][c-1]=w(a,b,c-1));
//         res2 = save[a][b-1][c-1]!=0 ? save[a][b-1][c-1] : (save[a][b-1][c-1]=w(a,b-1,c-1));
//         res3 = save[a][b-1][c]!=0 ? save[a][b-1][c] : (save[a][b-1][c]=w(a,b-1,c));
//         return res1+res2-res3;
//     }else{
//         res1 = save[a-1][b][c]!=0 ? save[a-1][b][c] : (save[a-1][b][c]=w(a-1,b,c));
//         res2 = save[a-1][b-1][c]!=0 ? save[a-1][b-1][c] : (save[a-1][b-1][c]=w(a-1,b-1,c));
//         res3 = save[a-1][b][c-1]!=0 ? save[a-1][b][c-1] : (save[a-1][b][c-1]=w(a-1,b,c-1));
//         res4 = save[a-1][b-1][c-1]!=0 ? save[a-1][b-1][c-1] : (save[a-1][b-1][c-1]=w(a-1,b-1,c-1));
//         return res1+res2+res3-res4;
//     }
// }
// int main(){
//     int a,b,c;
//     while(scanf("%d%d%d",&a,&b,&c)!=EOF){
//         if(a==-1&&b==-1&&c==-1) break;
//         printf("w(%d, %d, %d) = %d\n",a,b,c,w(a,b,c));
//     }
//     return 0;
// }



//3.�ֽ�����
/*���жϳ���С����(��Ϊ����),n������С�����õ��������(�ܿ��ܲ�Ϊ����)
//ÿ�������ϴ��߶��ᾭ��ѭ���ж��Ƿ�����(�����ɶԳ���)��������������������ж�������������������i==n��ʹ��f(n/i,i)==f(1,i)
1.��һ������ f(45,2)ʱ����۽���45��������������i=3,5,9,15,45
          45
  3X15    5X9     45
f(15,3) f(9,5)  f(1,45)
          45
  3 X 15    5 X 9     45
     3X5       3X3    /

2.f(15,3),������������i=3,5,15
i=3ʱ,f(5,3)=f(1,5),cnt++(cnt=1)
i=5ʱ,f(3,5)�����κδ���,��f(3,5)�е�n<rʱ�����Ƕ�f(5,3)���ظ�����
i=15ʱ,15��Ϊԭ��45���������ᾭ��f(1,15)��������ʹcnt++(cnt=2)������ʵ�Ƕ�3X15��һ�μ���

3.f(9,5),����������ֻ��i=9
i=9ʱ��9��Ϊԭ��45������������f(1,9)��������ʹcnt++(cnt=3)����5X9��һ�μ���

4.f(1,45),��ԭ������,cnt++(cnt=4)
*/
// #include <stdio.h>
// int cnt=0;
// void f(int n, int r){
//     if(n==1) cnt++;//��ʱѭ����i����n��f(n/i,i)��f(1,n);�༴n==1������������1֮��ֻ�ҵ�����(Ҳ��һ�ηֽ�)ʱΪ�߽�
//     for(int i=r;i<=n;i++){
//         if(n%i==0){
//             f(n/i,i);
//         }
//     }
// }
// int main(){
//     int T,n;
//     scanf("%d",&T);
//     while(T--){
//         scanf("%d",&n);
//         f(n,2);
//         printf("%d\n",cnt);
//         cnt=0;
//     }
//     return 0;
// }




//4.��24
// #include <stdio.h>
// void cal(double a,double b,double c,double d){

// }
// int main(){
//     double a,b,c,d;
//     while(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)!=EOF){
//         if(a==0&&b==0&&c==0&&d==0) break;

//     }

//     return 0;
// }

//5.placing apples
// #include <stdio.h>
// //7 3    
// //place(m-n,n)+place(m,n-1)
// //(4,3) + (7,2)
// //(1,3)+(4,2) + (5,2)+(7,1)
// //1 + (2,2)+(4,1)  +  (3,2)+(5,1) + 1
// //1  +  (0,2)+(2,1) +  1   +   (1,2)+(3,1) + 1   +   1
// //1  +     1 + 1    +  1   +      1 + 1    + 1   +   1
// int place(int m,int n){
//     if(m<=1||n<=1){
//         return 1;
//     }else if(m<n){
//         return place(m,m);//����n-m������
//     }else if(m>=n){
//         return place(m-n,n)+place(m,n-1);//place(m-n,n)ÿ���ڿ��õ������Ϸ�һ��ƻ����place(m,n-1)ÿ������һ�����ӣ�Ҳ�����õ���������1��n��
//         //ÿ��ݹ����������������ȫ������ �� ������û���ϵ�
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



//*6.��ŵ������
// #include <stdio.h>
// void moveOne(int num, char init, char dest){//ÿһ�ƶ�һ�ζ���ӡһ��
//     printf("%d:%c->%c\n",num,init,dest);
// }
// void move(int num, char init, char temp, char dest){
//     if(num == 1) moveOne(1,init,dest);
//     else{
//         move(num-1,init,dest,temp);
//         moveOne(num,init,dest);
//         move(num-1,temp,init,dest);
//     }
// }
// int main(){
//     char a,b,c;
//     int n;
//     scanf("%d %c %c %c",&n,&a,&b,&c);
//     move(n,a,b,c);
//     return 0;
// }



//*7.The Sierpinski Fractal ����?
/*
����һ����ͼ�����뷶Χ��10����ô��ͼ��С�� 1024*2048
��ÿ�����룬������ǰ֪��Ҫ���ķ�Χ������7 Ҫ���ķ�Χ�� 128*256���Դ˷�Χ�ݹ飬���������ӷ�ΧҪ��
��ÿ���ӷ�Χ���������ӷ�Χ���ݹ��յ��ǻ���ͼ��(base)
n==1   /\                 
	  /__\				  
									
n==2   /\
 	  /__\
	 /\  /\
	/__\/__\
	
n==3   /\
      /__\
     /\  /\
    /__\/__\
   /\      /\
  /__\    /__\
 /\  /\  /\  /\
/__\/__\/__\/__\

�ܹ����֣���n����̬������3����n-1����̬��ɣ����ϣ����£����£���ÿ����̬���½Ƕ�Ϊ����(x,y)
��˴ӵ�n����ʼ�ݹ飬�ݹ�߽�Ϊn==1
*/
// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// char base[2][5]={
//     " /\\",
//     "/__\\"
// };
// char str[1500][2500];
// void SF(int x, int y, int sz){
//     if(sz == 2){
//         for(int i=y, ii=0; ii < 2 ; i++,ii++)
//             for(int j=x, jj=0; jj < 4 ; j++,jj++)
//                 str[i][j] = base[ii][jj];
//         return;
//     }
//     //���ϣ����£�����,ÿ��ռ����,ռ����(�ʿ���ʱsz���� >>1 ����2)
//     SF(x + (sz>>1), y, sz>>1);
//     SF(x, y + (sz>>1), sz>>1);
//     SF(x + sz, y + (sz>>1), sz>>1);
// }
// int main(){
//     int n;
//     while(scanf("%d",&n)!=EOF, n){
//         memset(str, 0, sizeof(str));
//         // int sz = (2<<n);
//         int sz = (int)(pow(2, n));
//         SF(0, 0, sz);
//         for(int i=0 ; i<sz ; i++){
//             int j = sz << 1;
//             for(; !str[i][j]; j--);//�����ÿ�����ʼ�����������ַ�Ϊֹ,��ȷ��ÿ��ĩβ����λ��j
//                 for(int k = 0; k <= j; k++)
//                     printf("%c", str[i][k] ? str[i][k] : ' ');//0�ʹ�ո񣬷������ַ�
//             printf("\n");
//         }
//         printf("\n");
//     }
//     return 0;
// }




//*8.��24
// #include <stdio.h>
// #include <math.h>
// double a[4];
// /*
// 5 5 5 1
// ��ȷ��·��Ϊ:
// 1. 1/5           b={?, ?, 0.2}
// 2. 5 - 1/5       b={?, 4.8}
// 3. 5 * (5 - 1/5) b={24}
// */
// const double eps = 1e-8;
// int ifzero(double x){
//     return fabs(x) <= eps;
//     //���������ݲ���ֱ���� x == 0 �ж��Ƿ�Ϊ0,����Ҫ�Ծ���Ϊ׼����С�ھ�������Ϊ0����Ϊ������������ζ�û��ȷ�е�0����ʵ�ʺ㲻����0
// }
// int cal(const double a[], int len){
//     if(len == 1) return ifzero(a[0]-24) ? 1:0;
//     double b[4];
//     int lenb = len-2;
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             if(i==j) continue;
//             for(int k=0,l=0; k<len ; k++){
//                 if(k!=i && k!=j) b[l++] = a[k];
//             }
//             for(int k=0;k<4;k++){
//                 switch(k){
//                     case 0: b[lenb] = a[i] + a[j]; break;
//                     case 1: b[lenb] = a[i] - a[j]; break;
//                     case 2: b[lenb] = a[i] * a[j]; break;
//                     default:
//                         if(!ifzero(a[j])) b[lenb] = a[i] / a[j];
//                 }
//                 if(cal(b,len-1)) return 1;               
//             }
//         }
//     }
//     return 0;
// }
// int main(){
//     while(scanf("%lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3])!=EOF, a[0]&&a[1]&&a[2]&&a[3]){
//         printf(cal(a,4) ? "YES\n" : "NO\n");
//     }
//     return 0;
// }

















/*��.DFS(������������㷨) ��
1.�������
������������㷨��Depth First Search�����DFS����һ�����ڱ�������������ͼ���㷨�� 
����������ȱ������Ľڵ㣬����������������ķ�֧�����ڵ�v�����ڱ߶�����̽Ѱ����������Ѱʱ��㲻����������
���������ݵ����ֽڵ�v�������ߵ���ʼ�ڵ㡣�������̷�������ֱ�����нڵ㶼������Ϊֹ��
����äĿ����,����������㷨ʱ�临�Ӷ�ΪO(!n)��
2.�㷨˼�룺
���ݷ���̽������ݷ�����һ��ѡ�����������ֳ�Ϊ��̽������ѡ��������ǰ�������ԴﵽĿ�ꡣ
����̽����ĳһ��ʱ������ԭ��ѡ�񲢲��Ż�ﲻ��Ŀ�꣬���˻�һ������ѡ��
�����߲�ͨ���˻����ߵļ���Ϊ���ݷ������������������ĳ��״̬�ĵ��Ϊ�����ݵ㡱��
3.����ģ��:
int check(����)
{
    if(��������)
        return 1;
    return 0;
}
 
void dfs(int step)//��Ҫ������int dfs(...),��������check������return 1,��������return 0
{
        �жϱ߽�
        {
            ��Ӧ����
        }
        ����ÿһ�ֿ���
        {
               ����check����
               ���
               ������һ��dfs(step+1)
               �ָ���ʼ״̬�����ݵ�ʱ��Ҫ�õ���
        }
}

int main()
{
    ...
    һ����Ҫѭ�����е㣬���Եĵ���ѭ������άͼ���˫��ѭ����������dfs,��Ҫ������if(dfs(...)) cnt++;
    return 0;
}
*/



//1.�Ǳ�����
// #include<stdio.h>
// #include<string.h>
// int wall[105][105];
// int dir[4][2] = {{0,-1}, {-1,0}, {0,1}, {1,0}};//�����ж��ĸ�����, �� �� �� ��   1 2 4 8
// int dirjudge[4]={4,8,1,2};
// int square_max=1, ver, hor, rooms=0, temp=0, t=0;
// int dfs(int x, int y, int iffirst){
//     int nextX, nextY;
//     if(x>=0 && x<ver && y>=0 && y<hor && wall[x][y]>=0 && (iffirst || (!(wall[x][y] & dirjudge[t]))) ){//�ж�����
//         wall[x][y] = -1;
//         for(int i=0; i<4 ; i++){
//             nextX = x + dir[i][0];
//             nextY = y + dir[i][1];
//             t=i;
//             dfs(nextX, nextY, 0); 
//         }
//         temp++;
//         return 1;
//     }
//     return 0;
// }
// int main(){
//     scanf("%d%d",&ver, &hor);
//     for(int i=0;i<ver;i++){
//         for(int j=0;j<hor;j++)  scanf("%d",&wall[i][j]);
//     }
//     for(int i=0;i<ver;i++){
//         for(int j=0;j<hor;j++){
//             if(dfs(i,j,1)) {
//                 rooms++;
//                 square_max = temp>square_max ? temp:square_max;
//                 temp=0;
//             }
//         }
//     }
//     printf("%d\n%d\n",rooms,square_max);
//     return 0;
// }








/*��.��̬�滮
��̬�滮��һ���㷨˼�룺��ԭ����ֽ�Ϊ�����⣬������������Ľ�ó�ԭ����Ľ⣬��⡰�����ӽṹ���͡��ظ������⡱��
������Ŀ�ص㣺
1.�����ࣺ
    -���ж����ַ�ʽ�ߵ�һ��
    -���ж����ַ�ʽѡ��k����ʹ�ú�Ϊsum
2.�������С��
    -��һ���ߵ���һ��·����������ֺ�
    -����������г���
3.�������(Y/N)��
    -ȡʯ����Ϸ�������Ƿ��ʤ
    -�ܲ���ѡ��k����ʹ�ú�Ϊsum
*/


//1.The Triangle
// #include <stdio.h>
// int a[105][105],res[105][105]={0};//a[i][j] -> a[i+1][j]��a[i+1][j+1]
// int n;
// int max(int a,int b){
//     return a>b?a:b;
// }
// int dp(int i, int j){//���м����ԣ�һ��·���л����Ѿ��ѹ��������·�������ܻ�û���ף�
//     if(i==n) {//�ж���ֹ:������
//         return a[i][j];
//     }else{
//         if(!res[i][j])  res[i][j]=a[i][j]+max(dp(i+1,j),dp(i+1,j+1));//ÿ�ζ������·��
//         return res[i][j];
//     }
// }
// int main(){
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++)   scanf("%d",&a[i][j]);
//     }
//     printf("%d\n",dp(1,1));
//     return 0;
// }


















/*�������������������������������������������������������������������������������������������������������������������������������������������㷨��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


















/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*���������������������������������������������������������������������������������������������������������������������������������������������ű��ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/*ģ����һ*/
//
// #include <stdio.h>
// char str[105][105];
// int cnt=0;
// int n,m;
// void dfs(int i, int j){
//     if(i==0&&j==0){
//         for(int g=i;g<n;g++){
//             for(int h=j;h<m;h++){
                
//             }
//         }
//     }
//     else if(i==0&&j==m-1){

//     }
//     else if(i==n-1&&j==0){

//     }
//     else if(i==n-1&&j==m-1){

//     }else{

//     }

// }
// int main(){
    
//     scanf("%d%d",&n,&m);
//     for(int i=0;i<n;i++)    scanf("%s",&str[i]);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             dfs(i,j);
//         }
//     }
//     return 0;
// }
//













































































/*ģ�����*/
























/*���������������������������������������������������������������������������������������������������������������������������������������������ű��ⵥ��������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




































/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
// #include <stdio.h>
// typedef struct people{
//     char name[20];
//     int sex;
//     int cf;
//     int at;
//     int face;
//     int body;
// }peo;
// peo all[100002];
// int exchange(peo all[],int i,int j){
//     if(all[j].sex<all[j+1].sex){
//                 return 1;
//             }else if(all[j].sex == all[j+1].sex){
//                 if(all[j].cf<all[j+1].cf){
//                     return 1;
//                 }else if(all[j].cf == all[j+1].cf){
//                     if(all[j].at<all[j+1].at){
//                         return 1;
//                     }else if(all[j].cf ==all[j+1].cf){
//                         if(all[j].face<all[j+1].face){
//                             return 1;
//                         }else if(all[j].face == all[j+1].face && all[j].face<all[j+1].face){
//                             return 1;
//                         }
//                     }
//                 }
//             }
//     return 0;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%s %d %d %d %d %d",all[i].name,&all[i].sex,&all[i].cf,&all[i].at,&all[i].face,&all[i].body);
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(exchange(all,i,j)==1){
//                 peo temp = all[j+1];
//                 all[j+1]=all[j];
//                 all[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++) printf("%s %d %d %d %d %d\n",all[i].name,all[i].sex,all[i].cf,all[i].at,all[i].face,all[i].body);
//     return 0;
// }



//Ӧ��ö���ٲ��Ƿ񺬸����ִ�
// #include <stdio.h>
// #include <string.h>
// char ser[10030];
// char temp[10030];
// int main(){
//     int n,m,size=0,index=0;
//     scanf("%d %d",&n,&m);
//     scanf("%s %s",ser,temp);
//     size = strlen(ser);
//     for(int i=0;temp[i] != '\0';i++){
//         int h=size-1;
//         if(i>=size-1){
//             int ifright=1;
//             for(int j=i;j>i-size;j--,h--){
//                 if(ser[h] != temp[j]){
//                     ifright =0 ;
//                     break;
//                 }
//             }
//             if(ifright==1) index = i;
//         }
//     }
//     printf("index=%d\n",index);
//     // for(int i=0,k=0;(index+i)<strlen(temp);i++){
//     //     char strm[20];
//     //     memset(strm,'\0',20);
//     //     if((index + i + 1)>=m ){
//     //         strncpy(strm,temp+k,m);
//     //         printf("temp=%s\n",temp+k);
//     //         printf("%s\n",strm);
//     //         k++;
//     //     }
//     // }
//     for(int i=0,k=0;(index+i)<strlen(temp);i++){
//         char strm[20];
//         memset(strm,'\0',20);
//         if((index + i + 1)>=m ){
//             strncpy(strm,temp+k,m);
//             printf("temp=%s\n",temp+k);
//             printf("%s\n",strm);
//             k++;
//         }
//     }

//     return 0;
// }









//F
// #include <stdio.h>
// long long int arr[10020];
// int main(){
//     long long int n,x,y,tmin=0;
//     scanf("%lld",&n);
//     for(int i=0;i<n;i++){
//         scanf("%lld",&arr[i]);
//     }
//     // for(int i=0;i<n-1;i++){
//     //     for(int j=0;j<n-1-i;j++){
//     //         if(arr[j]<arr[j+1]){
//     //             long long int t=arr[j+1];
//     //             arr[j+1]=arr[j];
//     //             arr[j]=t;
//     //         }
//     //     }
//     // }
//     scanf("%lld%lld",&x,&y);
//     for(int i=0;i<n;i++){
//         if((arr[i]*x) < y){
//             tmin+=arr[i]*x;
//         }else{
//             tmin+=y;
//         }
//     }
//     printf("%lld\n",tmin);
//     return 0;
// }




// #include <stdio.h>
// int main(){
//     unsigned long long int a,b;
//     scanf("%llu %llu",&a,&b);
//     printf("%llu\n",a+b);
//     return 0;
// }






























/*������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
