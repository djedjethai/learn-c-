#ifndef _UTILE_H_
#define _UTILE_H_
#include <iostream>
#include <vector>
#include "Account.h"

void display(const std::vector<Account*> &account);
void deposit(std::vector<Account*> &account, double amt);
void withdraw(std::vector<Account*> &account, double amt);

#endif // _UTILE_H_
