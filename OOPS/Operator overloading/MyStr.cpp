#include<iostream>
#include<cstring>
#include "Mystr.hpp"
using namespace std;


Mystr::Mystr()
    :str{nullptr}{
            str=new char[1];
            *str='\0';
        }


Mystr::Mystr(const char *s)
    :str{nullptr}{
        if(s==nullptr)
        {
            str=new char[1];
            *str='\0';
        }
        else
        {
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
    }

Mystr::Mystr(const Mystr &source)
:str{nullptr}{
    str=new char[strlen(source.str)+1];
    strcpy(str,source.str);
}

Mystr::~Mystr()
{
    delete []str;
}

void Mystr::display() const{
    cout<<str<<":"<<get_len()<<endl;
}

int Mystr::get_len() const {
    return strlen(str);
}

const char *Mystr::get_str() const{
    return str;
}
