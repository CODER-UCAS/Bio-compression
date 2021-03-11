//
// Created by Wzz on 2021/1/3.
//
#include "Transform.h"
using namespace std;


void transform(string file1,vector<unsigned char >&line)
{
    char buffer[1005];
    string string1;
    ifstream ifile;
    unsigned char sum=0;
    ofstream ofile;
    ifile.open(file1);
    if(!ifile.is_open())
    {
        cout<<"Error opening file!";
        exit(001);
    }
    while (!ifile.eof())
    {
        ifile.getline(buffer,1005);
        string1=buffer;
        int j=0;
        for(int i=0;i<string1.length();i+=4)
        {
            sum=Convert(string1[i],string1[i+1],string1[i+2],string1[i+3]);
            line.push_back(sum);
        }
    }
    ifile.close();
    ofile.close();
}

int Convert( char ch, char ch1, char ch2 , char ch3)
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

string BinaryCreate( char ch)
{
    if(ch=='A')
        return "00";
    else if(ch=='C')
        return "01";
    else if(ch=='G')
        return "10";
    return "11";
}