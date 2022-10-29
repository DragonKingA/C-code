#include <stdio.h>
void main(){
    int num;
    char str[100];
    FILE *fp;
    FILE *pFile;
    //"D:\\ClanguageCorrelations\\codeofC\\test.txt"�����ָ��·����Ĭ��Ϊ�����ļ�����Ŀ¼��

    /*
    fopen���һ�����������ļ��Ķ�д��ʽ:
    "r"     ֻ��(r+ ��д)�����ļ�ͷ��ʼ���������򱨴�  
    "w"     ֻд(w+ ��д)���½��ļ����Ѵ����ļ��ᱻ�滻
    "a"     ׷��(a+ ��д)�����ļ�β��ʼ�����������½�
    "rb"    ֻ��(rb+ ��д)���򿪶������ļ����������򱨴�
    "wb"    ֻд(wb+ ��д)���򿪶������ļ������������½�
    "ab"    ׷��(ab+ ��д)���򿪶������ļ������ļ�β��д�����������½�

    �ļ��Ķ�д��ʽ�ĺ���:
    fgetc | fputc   �ַ�����  |�ַ����
    fgets | fputs   �ı�������|�ı������
    fscanf| fprintf ��ʽ������|��ʽ����� ��*ע�⣬��������ָ��ȡ�ļ������ָд���ļ���
    fread | fwrite  ����������|��������� ������������ֻ�������ļ�������ֱ������������������������������,����ֵ�ǳɹ���д���ֽ���

    ��������:
    fseek(FILE *fp , long ƫ����n , int origin)  
        ƫ��ָ����originȷ���ķ���ƫ��n���ֽ�(*����*������������������ʼorigin��Ϊ0λ��,����Ϊ����������)
        origin��������:
            SEEK_CUR �ӵ�ǰ�ļ�ָ���ƫ�ƴ���ʼ���ƫ��
            SEEK_SET ���ļ�����ǰ�˴���ʼ���ƫ��
            SEEK_END ���ļ�����ĩβ����ʼ��ǰƫ��(��ʱƫ����ҪΪ�������ܶ�ȡ)
    
    ftell(FILE *fp)


    rewind(FILE *fp)

    */
    /*
    �ı��ļ�:��Unix��
        ���ƣ����������д���ҿ�ƽ̨
        ȱ�㣺�������������Ҫ������ʽ����������
        ������Unixϰ�����ļ��������ļ��������������ϴ�Ĵ洢�����ݿ�
    �������ļ�:��Windows��
        ���ƣ������д��
        ȱ�㣺�����д���ѣ�������ƽ̨(������int��С��һ�¡���С�˵�����)
        ������Windowsϰ����ע����������ļ���ý���ļ�(��Ƶ��ͼƬ��)��Ϊ�������ļ������õ�����������д��ý���ļ�

    
    
    */
    fp = fopen("test.txt","r");
    if(fp){//���ļ������ڣ���fopen����NULL��0�������0
        printf("ԭ�ļ���ȡ�õ���\n");
        fscanf(fp,"%d",&num);
        printf("num=%d\n",num);
        fclose(fp);
    }else{
        printf("�޷����ļ�test.txt\n");
    }

    pFile = fopen("example.txt","wb+");
    if(pFile){
        fputs ( "This is an apple." , pFile );
        fseek ( pFile , 9 , SEEK_SET );//��λ���ھŸ��ַ�'a'
        fputs ( " sam" , pFile );//��"n ap"�滻
        rewind(pFile);
        //fscanf(pFile,"%s",str); �пո񲻺ö�ȡ
        fgets(str,30,pFile);
        printf("str=%s\n",str);//str=This is a sample.

        
        fprintf(pFile,"%s","aAaAaAaAaAaAaAaAaAaA");
        //д����ļ�ָ��ͣ����β��
        rewind(pFile);
        fgets(str,60,pFile);
        printf("str=%s\n",str);//str=This is a sample.aAaAaAaAaAaAaAaAaAaA
        fclose ( pFile );
    }else{
        printf("�޷����ļ�example.txt\n");
    }


}