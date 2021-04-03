//
// Created by WZZ on 2021/4/1.
//

#ifndef PROJECTMAIN_INDEX_H
#define PROJECTMAIN_INDEX_H
#include <unordered_map>
using namespace std;

class Index
{
    unordered_map<char,vector<int>> Push;

public:
    vector<int> Create(char  ch)
    {
        return  Push[ch];
    }
    int set(char ch,int a)
    {
        Push_A[ch]=a;
    }
};





#endif //PROJECTMAIN_INDEX_H
