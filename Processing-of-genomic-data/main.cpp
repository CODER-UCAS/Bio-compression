/**
 * @author Zizhao Wang
 * @date 2020.12.22
 * @IDE Clion 2020.3
 * @function the main function!
 */
#include <iostream>
#include <fstream>
#include "cstring"

using namespace std;

void dataRead();
void dataRead2();

int main(int argc, char** argv)
{
    dataRead2();
    return 0;
}
//Read and write function one
void dataRead()
{
    try
    {
        string buffer;
        fstream  afile("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align1.txt");
        fstream  afile1("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align2.txt");
        if(! afile.is_open())
        {
            cout << "Error opening file";
            exit(1);
        }
        int i=0;
        while (!afile.eof())
        {
            afile>>buffer;
            for(i=0;i<buffer.length();i+=1000)
            {
                afile1<<buffer.substr(i,1000);
                if(i+1000<=buffer.length())
                    afile1<<endl;
            }
        }
        afile.close();
        afile1.close();
    }
    catch (exception ex)
    {
        cout<<"File open failed!"<<"The Reason is:"<<endl<<ex.what();
    }
}
//Read and write function two
void dataRead2()
{
    try
    {
        char buffer;
        fstream  afile("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align1.txt");
        fstream  afile1("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align2.txt");
        if(!afile.is_open())
        {
            cout << "Error opening file";
            exit(1);
        }
        int i=0;
        while (!afile.eof())
        {
            afile>>buffer;
            if(buffer=='A'||buffer=='G'||buffer=='C'||buffer=='T')
            {
                i++;
                afile1<<buffer;
                if(i%1000==0)
                    afile1<<endl;
            }
        }
        afile.close();
        afile1.close();
    }
    catch (exception ex)
    {
        cout<<"File open failed!"<<"The Reason is:"<<endl<<ex.what();
    }
}


