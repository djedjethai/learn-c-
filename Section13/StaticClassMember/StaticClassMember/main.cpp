#include <iostream>
#include <string>
#include <vector>
#include "Mailer.h"

using std::endl;
using std::cout;
using std::cin;

void read(Mailer m);
void getNum();

int main()
{
	const Mailer m1{"email@email.com"};
    read(m1);
    
    const Mailer m2{m1};
    read(m2);
    
    std::vector<Mailer> ml;
//    in this case move    
    ml.push_back(Mailer {"vector@vector.com"});
    ml.push_back(Mailer {"exemple@exemple.com"});

//    in this case deep copy
    ml.push_back(m1);
    ml.push_back(m2);
    
    getNum();
    
	return 0;
}

void read(Mailer m) {
     std::string sm1;
     sm1 = m.getMail();
     cout << sm1 << endl;
     // cout << m.getMail(); << endl; // ok.
}

void getNum() {
    cout << "Active mail: " << Mailer::getNumMail() << endl;
}