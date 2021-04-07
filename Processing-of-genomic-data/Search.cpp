//
// Created by Wzz on 2021/1/17.
//

#include <iostream>
#include <vector>
#include "Index.h"

using namespace std;


vector<unsigned char> change(string str)
{
    vector<unsigned char > vec;
    return vec;
}



vector<vector<int>> AccurateSearch(vector<unsigned char> line)
{
    GeneralIndex search_index;
    search_index.Traverse();
    CompressedIndex index2;
    index2.Traverse();
    string str=" ACA";
    //cin>>str;
    int com;
    for(int i=0;i<line.size();i++)
    {
        com=192;
        for(int j=3;j>=0;j--)
        {
            if(3==((line[i]&com)>>(j*2)))
            {
                //cout<<i*4+4-j<<endl;
                break;
            }
            com/=4;
        }
    }
    vector<vector<int>> Location;
    return Location;
}
