#ifndef _STRING_HPP_
#define _STRING_HPP_

class Mystr
{
    private:
    char *str;
    public:
    Mystr();
    Mystr(const char *s);
    Mystr(const Mystr &source);
    ~Mystr();

    //need to make all the member methods const 
    //since we have defined the character array as const
    // and we need to tell the compiler that all the member
    //methods that we have declared will not change the char array

    void display() const; 
    int get_len() const;
    const char *get_str() const;
};

#endif