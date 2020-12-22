/**
 * @author Zizhao Wang
 * @date 2020.12.22
 * @IDE Clion 2020.3
 * @function the main function!
 */
#include <iostream>
#include <fstream>
using namespace std;
void dataRead();
int main()
{
    dataRead();
    return 0;
}
void dataRead()
{
    try
    {
        char buffer[1000];
        ifstream  afile("data/Align1.txt");
        if(afile)
            cout<<"Successful opened!";
        int i=0;
        while (!afile.eof())
        {
            afile.getline(buffer,100);
        }
        cout<<buffer;
        cout<<i-1;
        afile.close();
    }
    catch (exception except)
    {
        cout<<"文件打开失败！"<<"\n";
    }
}
