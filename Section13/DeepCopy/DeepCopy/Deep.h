#ifndef _Deep_H_
#define _Deep_H_

class Deep
{
private: 
    int *data;
public:
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
    
    void setData(int d);
    int getData();
};

#endif // _Deep_H_
