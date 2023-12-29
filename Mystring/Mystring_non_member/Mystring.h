#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend Mystring operator-(const Mystring& obj); // make lowercase
    friend Mystring operator+(const Mystring& obj); // make uppercase
    friend Mystring operator+(const Mystring& lhs,const Mystring& rhs); // concatenate
    friend bool operator==(const Mystring& lhs,const Mystring& rhs); // equality check
    friend bool operator!=(const Mystring& lhs,const Mystring& rhs); // non-equality check
    friend bool operator<(const Mystring& lhs,const Mystring& rhs); //lexically smaller 
    friend bool operator>(const Mystring& lhs,const Mystring& rhs); // lexically larger
    friend Mystring& operator+=(Mystring& lhs,const Mystring& rhs); // concat and assign
    friend Mystring operator*(const Mystring& lhs,int n); // concat, repeat n-times
    friend Mystring& operator*=(Mystring& obj,int n); // concat, repeat n-times, assign
    friend Mystring& operator++(Mystring& obj); // first make uppercase then assign
    friend Mystring operator++(Mystring& obj, int); // first assign then make uppercase
    friend std::ostream& operator<<(std::ostream &os, const Mystring &rhs); // terminal output
    friend std::istream& operator>>(std::istream &in, Mystring &rhs); // terminal input
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring(); // No-args constructor
    Mystring(const char *s); // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    Mystring( Mystring &&source); // Move constructor
    ~Mystring(); // Destructor
    Mystring& operator=(const Mystring& rhs); // Copy assignment
    Mystring& operator=(Mystring&& rhs); // Move assignment
    // getters
    void display() const;
    int get_length() const; 
    const char *get_str() const;
};

#endif // _MYSTRING_H_