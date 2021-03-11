//
// Created by Zizhao Wang on 2021/1/3.
// @Language C++
// @device Clion 2020.3
//
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <vector>

#ifndef PROJECTMAIN_TRANSFORM_H //条件编译
#define PROJECTMAIN_TRANSFORM_H
using namespace std;
/** The function of Comprressed data!**/
void transform(string file1,vector<unsigned char>&line );
int Convert(char ch,char ch1,char ch2 ,char ch3);
string BinaryCreate(char ch);
#endif //PROJECTMAIN_TRANSFORM_H
