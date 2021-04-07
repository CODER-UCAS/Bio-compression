//
// Created by WLSYH on 2021/4/7.
//

#ifndef PROJECTMAIN_PRECISEQUERY_H
#define PROJECTMAIN_PRECISEQUERY_H
#include "Index.h"

class PreciseSearch
{
private:
    Index index;
public:
    void SearchMethod(int flag)
    {
        if(flag==1)
            index=new GeneralIndex();
        else
            index=new CompressedIndex();

    }
};



#endif //PROJECTMAIN_PRECISEQUERY_H
