//
// Created by Wzz on 2021/1/17.
//

#include <iostream>
#include <vector>

using namespace std;


vector<unsigned char> change(string str)
{
    vector<unsigned char > vec;
    return vec;
}



vector<vector<int>> AccurateSearch(vector<unsigned char> line)
{
    //cout<<"Input the string to be found\n";
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
                cout<<i*4+4-j<<endl;
                break;
            }
            com/=4;
        }
    }
    //cout<<((line[0]&12)>>0)<<endl;
    vector<vector<int>> Location;
    return Location;
}
