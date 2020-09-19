#ifndef _SHALLOW_H_
#define _SHALLOW_H_

class Shallow
{
private:
    int *data;

public:
    Shallow(int d);
    
    Shallow(const Shallow &source);
    
    ~Shallow();

    void setData(int d);
    int getData();
};

#endif // _SHALLOW_H_
