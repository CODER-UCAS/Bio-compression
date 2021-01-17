//
// Created by WLSYH on 2021/1/3.
//
#include "Transform.h"
int transform(string file1)
{
    char buffer[1005];
    string string1;
    ifstream ifile;
    short sum=0;
    int a=0;
    ofstream ofile;
    ifile.open(file1);
    if(!ifile.is_open())
    {
        cout<<"Error opening file!";
        exit(001);
    }
    while (!ifile.eof())
    {
        ifile.getline(buffer,10005);
        string1=buffer;
        for(int i=0;i<string1.length();i+=4)
        {

            sum+=Convert(string1[i],string1[i+1],string1[i+2],string1[i+3]);
            a=0B01110100;
            sum=0X00FF;
            cout<< sizeof(a);
        }
    }
    ifile.close();
    ofile.open("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\data\\Align_Create.bin",ios::binary);
    ofile<<sum;
    ofile.close();
    return 1;
}

int Convert(char ch,char ch1,char ch2 ,char ch3)
{
    string str;
    int sum=0;
    str=BinaryCreate(ch)+BinaryCreate(ch1)+BinaryCreate(ch2)+BinaryCreate(ch3);
    for(int i=str.length()-1;i>=0;i--)
    {
        if(str[i]=='1')
            sum+=pow(2,str.length()-i-1);
        else
            sum+=0;
    }
    return sum;
}

string BinaryCreate(char ch)
{
    if(ch=='A')
        return "00";
    else if(ch=='C')
        return "01";
    else if(ch=='G')
        return "10";
    else if(ch=='T')
        return "11";
}