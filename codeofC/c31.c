#include <stdio.h>
void main(){
    int num;
    char str[100];
    FILE *fp;
    FILE *pFile;
    //"D:\\ClanguageCorrelations\\codeofC\\test.txt"则可以指定路径，默认为运行文件所在目录下

    /*
    fopen最后一个参数决定文件的读写方式:
    "r"     只读(r+ 读写)，从文件头开始，不存在则报错  
    "w"     只写(w+ 读写)，新建文件，已存在文件会被替换
    "a"     追加(a+ 读写)，从文件尾开始，不存在则新建
    "rb"    只读(rb+ 读写)，打开二进制文件，不存在则报错
    "wb"    只写(wb+ 读写)，打开二进制文件，不存在则新建
    "ab"    追加(ab+ 读写)，打开二进制文件，在文件尾读写，不存在则新建

    文件的读写方式的函数:
    fgetc | fputc   字符输入  |字符输出
    fgets | fputs   文本行输入|文本行输出
    fscanf| fprintf 格式化输入|格式化输出 （*注意，这里输入指读取文件，输出指写入文件）
    fread | fwrite  二进制输入|二进制输出 （这两个函数只适用于文件，其余分别适用于所有输入流或所有输出流）,返回值是成功读写的字节数

    其他函数:
    fseek(FILE *fp , long 偏移量n , int origin)  
        偏移指依据origin确定的方向偏移n个字节(*可能*类似于索引，索引起始origin处为0位置,可以为负数即向左)
        origin参数可填:
            SEEK_CUR 从当前文件指针的偏移处开始向后偏移
            SEEK_SET 从文件的最前端处开始向后偏移
            SEEK_END 从文件的最末尾处开始向前偏移(此时偏移量要为负数才能读取)
    
    ftell(FILE *fp)


    rewind(FILE *fp)

    */
    /*
    文本文件:（Unix）
        优势：方便人类读写，且跨平台
        缺点：程序输入输出需要经过格式化，开销大
        其他：Unix习惯用文件做配置文件，程序数据量较大的存储用数据库
    二进制文件:（Windows）
        优势：程序读写快
        缺点：人类读写困难，而不跨平台(体现在int大小不一致、大小端等问题)
        其他：Windows习惯用注册表做配置文件，媒体文件(视频、图片等)均为二进制文件，再用第三方库来读写该媒体文件

    
    
    */
    fp = fopen("test.txt","r");
    if(fp){//若文件不存在，则fopen返回NULL即0，否则非0
        printf("原文件读取得到：\n");
        fscanf(fp,"%d",&num);
        printf("num=%d\n",num);
        fclose(fp);
    }else{
        printf("无法打开文件test.txt\n");
    }

    pFile = fopen("example.txt","wb+");
    if(pFile){
        fputs ( "This is an apple." , pFile );
        fseek ( pFile , 9 , SEEK_SET );//定位到第九个字符'a'
        fputs ( " sam" , pFile );//将"n ap"替换
        rewind(pFile);
        //fscanf(pFile,"%s",str); 有空格不好读取
        fgets(str,30,pFile);
        printf("str=%s\n",str);//str=This is a sample.

        
        fprintf(pFile,"%s","aAaAaAaAaAaAaAaAaAaA");
        //写入后文件指针停留在尾部
        rewind(pFile);
        fgets(str,60,pFile);
        printf("str=%s\n",str);//str=This is a sample.aAaAaAaAaAaAaAaAaAaA
        fclose ( pFile );
    }else{
        printf("无法打开文件example.txt\n");
    }


}