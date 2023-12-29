#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
    friend std::istream& operator>>(std::istream& in, Mystring& rhs);

private:
    char *str; // pointer to a char[] that holds a C-style string
public:
    Mystring(); // No-args constructor
    Mystring(const char *s); // Overloaded constructor
    Mystring(const Mystring& source); // Copy constructor
    Mystring( Mystring&& source); // Move constructor
    ~Mystring(); // Destructor
    
    Mystring& operator=(const Mystring& rhs); // Copy assignment
    Mystring& operator=(Mystring&& rhs); // Move assignment

    Mystring operator-() const; // make lowercase
    Mystring operator+() const; // make uppercase
    bool operator==(const Mystring& rhs) const; // equality check
    bool operator!=(const Mystring& rhs) const; // non-equality check
    bool operator>(const Mystring& rhs) const; // lexically greater
    bool operator<(const Mystring& rhs) const; // lexically smaller
    Mystring operator+(const Mystring& rhs) const; // concatenate
    Mystring& operator+=(const Mystring& rhs); // concat, assign
    Mystring operator*(int n) const; // concat, repeat n-times
    Mystring& operator*=(int n); // concat, repeat n-times, assign
    Mystring operator++(); // first make uppercase then assign
    Mystring operator++(int); // first assign then make uppercase
    // getters
    void display() const;
    int get_length() const;                                       
    const char *get_str() const;
};
#endif // _MYSTRING_H_