#ifndef _INSUFFICIENTFUNDSEXCEPTION_H_
#define _INSUFFICIENTFUNDSEXCEPTION_H_
#include <exception>

class InsufficientFundsException : public std::exception
{
public:
    InsufficientFundsException() noexcept = default;
    ~InsufficientFundsException() = default;
    virtual const char* what() const noexcept {
        return "InsufficientFundsException class return";
    } 
};

#endif // _INSUFFICIENTFUNDSEXCEPTION_H_
