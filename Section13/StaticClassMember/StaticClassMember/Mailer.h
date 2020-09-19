#ifndef _MAILER_H_
#define _MAILER_H_
#include <string>

class Mailer
{
private:
    std::string *email;
    static int numMail;

public:
    Mailer(std::string e);
    Mailer(const Mailer &source);
    Mailer(Mailer &&source);
    ~Mailer();
    
    static int getNumMail();
    void setMail(std::string m);
    std::string getMail() const;

};

#endif // _MAILER_H_
