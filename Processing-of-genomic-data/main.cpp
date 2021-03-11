/**
 * @author Zizhao Wang
 * @date 2020.12.22
 * @IDE Clion 2020.3
 * @function the main function!
 */
#include <iostream>
#include "Transform.h"
#include "Search.h"
using namespace std;

int main()
{
    vector<unsigned char> line;
    vector<vector<int>> location;
    string str="../data/Align2.txt";
    transform(str,line);
    location=AccurateSearch(line);
    return 0;
}


