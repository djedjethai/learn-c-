#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_
#include "Account.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include <vector>
// #include <iostream>

void display(const std::vector<Account> &account);
void deposit(std::vector<Account> &account, double d);
void withdraw(std::vector<Account> &account, double w);

void display(const std::vector<SavingAccount> &account);
void deposit(std::vector<SavingAccount> &account, double d);
void withdraw(std::vector<SavingAccount> &account, double w);

void display(const std::vector<CheckingAccount> &account);
void deposit(std::vector<CheckingAccount> &account, double d);
void withdraw(std::vector<CheckingAccount> &account, double w);

void display(const std::vector<TrustAccount> &account);
void deposit(std::vector<TrustAccount> &account, double d);
void withdraw(std::vector<TrustAccount> &account, double w);


#endif // _ACCOUNTUTIL_H_
