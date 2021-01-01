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
void DataC();

int main(int argc, char** argv)
{
    dataRead();
    return 0;
}
void dataRead()
{
    try
    {
        char buffer[256000];
        fstream  afile("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align1.txt");
        fstream  afile1("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align2.txt");
        if(! afile.is_open())
        {
            cout << "Error opening file";
            exit(1);
        }
        while (!afile.eof())
            afile>>buffer;
        for(int i=0;i<strlen(buffer);i++)
        {
           // afile1<<buffer[i];
           // if((i+1)%1000==0)
           //    afile1<<"\n";
        }
        afile.close();
    }
    catch (exception except)
    {
        cout<<"文件打开失败！"<<"\n";
    }
}
void DataC()
{
    try
    {
        char szTest[1000] = {0};
        int len = 0;

        FILE *fp = fopen("D:\\smart_match\\Processing-of-genomic-data\\Processing-of-genomic-data\\Align1.txt", "r");
        if(NULL == fp)
        {
            printf("failed to open dos.txt\n");
            exit(1) ;
        }

        while(!feof(fp))
        {
            memset(szTest, 0, sizeof(szTest));
            fgets(szTest, sizeof(szTest) - 1, fp); // 包含了换行符
            printf("%s", szTest);
        }

        fclose(fp);

    }
    catch (exception ex)
    {

    }


}

