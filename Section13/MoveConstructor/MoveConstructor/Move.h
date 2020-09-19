#ifndef _MOVE_H_
#define _MOVE_H_

class Move
{
private:
    int *data;
public:
    Move(int d);
    Move(const Move &source);
    Move(Move &&source);
    void setData(int d);
    int getData();
    ~Move();

};

#endif // _MOVE_H_
