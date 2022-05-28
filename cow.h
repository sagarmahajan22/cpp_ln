#pragma once

#ifndef COW_H
#define COW_H
#include <string>

//using namespace std; is bad practice because it may force whole project to use this

class cow
{
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    cow();
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int  new_age);

public:
    std::string name;
    int age;
    unsigned char purpose;

};

enum cow_purpose { milk, dairy };


#endif // !COW_H

