//
// Created by WLSYH on 2021/1/17.
//

#include <array>
#include <fstream>
#include <iostream>
#include "DataReader.h"
using namespace std;

//Read and write function one
void DataReader() {
    try {
        std::string buffer;
        std::fstream afile("../data/Align1.txt");
        std::fstream afile1("../data/Align2.txt");
        if (!afile.is_open())
        {
            std::cout << "Error opening file!";
            exit(1);
        }
        int i = 0;
        while (!afile.eof())
        {
            afile >> buffer;
            for (i = 0; i < buffer.length(); i += 1000)
            {
                afile1 << buffer.substr(i, 1000);
                if (i + 1000 <= buffer.length())
                    afile1 << std::endl;
            }
        }
        afile.close();
        afile1.close();
    }
    catch (exception ex) {
        std::cout << "File open failed!" << "The Reason is:" << std::endl << ex.what();
    }
}


//Read and write function two
void DataReader2()
{
    try
    {
        char buffer;
        fstream  afile("../data/Align1.txt");
        fstream  afile1("../data/Align2.txt");
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