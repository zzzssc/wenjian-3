//
//  main.cpp
//  wenjian 3
//
//  Created by s20181106119 on 2019/6/26.
//  Copyright © 2019 s20181106119. All rights reserved.
//


//  main.cpp
//  文件传输3
//
//  Created by s20181106119 on 2019/6/26.
//  Copyright © 2019 s20181106119. All rights reserved.
//



#include<iostream>
#include<fstream>
using namespace std;
struct student{
    char name1[5];       //学生姓名
    char number[50];      //学号
    char  colleage[50];   //学院
    char  speciality[50];   //专业
};
struct referee{
    char name2[8];    //裁判姓名
    int score[7];    //分数
};

int main()
{
    
    ifstream in("/Users/s20181106119/Desktop/学生信息.txt");
    ifstream inf ("Users/s20181106119/Desktop/裁判信息及分数.txt");
    ofstream output("/Users/s20181106119/Desktop/最终排名.txt");
    struct student student[5];
    struct  referee referee[7];
    if(in.is_open())
    {
        int i;
        for(i=0;i<5;i++)
        {
            in>>name1>>
        }
        
        
        
    }
    
    
    
}
