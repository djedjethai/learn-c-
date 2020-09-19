#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_

#include "AccountUtil.h"

#include "Account.h"
#include <vector>
// #include <iostream>

void display(const std::vector<Account*> &account);
void deposit(std::vector<Account*> &account, double d);
void withdraw(std::vector<Account*> &account, double w);




#endif // _ACCOUNTUTIL_H_
