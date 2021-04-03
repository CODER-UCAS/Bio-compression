//
// Created by WZZ on 2021/4/1.
//

#ifndef PROJECTMAIN_INDEX_H
#define PROJECTMAIN_INDEX_H
#include <unordered_map>
#include <fstream>
#include <vector>
using namespace std;

class Index{
private:
    unordered_map<char, vector < int>> Push;
public:
    vector<int> Create(char  ch)
    {
        return  Push[ch];
    }
    int set(char ch,int a)
    {
        Push[ch].push_back(a);
        return 1;
    }
    void Traverse()
    {
        std::ifstream file("../data/Align2.txt");
        if(!file.is_open())
        {
            cout<<"Error opening file!";
            exit(001);
        }
        int j=0;
        while (!file.eof())
        {
            char buffer[1005];
            file.getline(buffer,1005);
            string string1=buffer;
            for(int i=0;i<string1.length();i++)
            {
                Push[string1[i]].push_back(i+j*1000);
            }
            j++;
        }
        for(int i=0;i<Push['A'].size();i++)
            cout<<Push['A'][i]<<" ";
    }
};





#endif //PROJECTMAIN_INDEX_H
