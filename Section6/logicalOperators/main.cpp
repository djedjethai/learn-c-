#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    cout << std::boolalpha;
//    const int mini {10};
//    const int max {20};
//    
//	int num;
//    cout << "Enter 1 number berween 10 and 20: ";
//    cin >> num;
//    
//    bool withIn {false};
//    withIn = (num > mini && num < max);
//    cout << num << " is between " << mini << " and " << max << " : " << withIn << endl;  
//    bool wearCoastand {false};
//    bool wearCoastor {false};
//    const int wearCoastTemp {45}; // temperature below this value require a coast
//    const int wearCostWind {25}; // wind over this value require a coast
//    cout << "temp under 45F need to wear a coast" << endl;
//    cout << "wind more than 25 need to wear a coast" << endl;
//    cout << "Do you need to wear a coast ???" << endl;
//    cout << "what is the speed of the wind : ";
//    int windSpeed {0};
//    cin >> windSpeed;
//    cout << "what is the temperature in farenheit : ";
//    int temp {0};
//    cin >> temp;
//    wearCoastor = (temp < wearCoastTemp || windSpeed > wearCostWind);
//    wearCoastand = !(temp >= wearCoastTemp && windSpeed <= wearCostWind);
//    cout << "For the temperature: " << temp << " F, and the wind\'s speed: " << windSpeed << " a coast is required: " << wearCoastor << endl;
//    cout << wearCoastand << endl;


        // assignment
        long amount {0};
        amount = 0;
        cout << "Enter the amount in cents: ";
        cin >> amount;
        
        // 1 dollar => 100 cents
        const int convDollars {100};
        // 1 quarter => 25 cents
        const int convQuarters {25};
        // 1 dim => 10 cents
        const int convDims {10};
        // 1 nickels => 5 cents
        const int convNickels {5};
        // 1 penny => 1 cent
        
        
        int dollars {0};
        int quarters {0};
        int dims {0};
        int nickels {0};
        int pennies {0};
        
        int rest {0};
        
        // if divisible /100 || > 100 => set dollars => set rest
        if (amount > convDollars || amount % convDollars == 0) {
            dollars = amount / convDollars;
            rest = amount % convDollars;
        }
        
        if (rest > convQuarters || rest % convQuarters == 0) {
            quarters = rest / convQuarters;
            rest %= convQuarters;
        }
        
        if (rest >= convDims) {
            dims = rest / convDims;
            rest %= convDims;
        }
        
        if (rest >= convNickels) {
            nickels = rest / convNickels;
            rest %= convNickels;
        }
        
        if ((rest < 5 && rest > 0) || (amount < 5 && amount > 0)) {
            amount < 5 ? pennies = amount : pennies = rest;
        }
        
        cout << "For " << amount << " cents, we can provide the change like it: " << endl;
        cout << "dollars: " << dollars << endl;
        cout << "quarter: " << quarters << endl;
        cout << "dims: " << dims << endl;
        cout << "nickels: " << nickels << endl;
        cout << "pennies: " << pennies << endl;
        
    
}
