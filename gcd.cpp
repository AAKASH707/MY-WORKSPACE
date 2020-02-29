#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << "HCF = " << n1;
    return 0;
}
*****************************************************************************************************************************************
*****************************************************************************************************************************************
     #include <iostream>
using namespace std;

int main() {
    int n1, n2, hcf;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // Swapping variables n1 and n2 if n2 is greater than n1.
    if ( n2 > n1) {   
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }
    
    for (int i = 1; i <=  n2; ++i) {
        if (n1 % i == 0 && n2 % i ==0) {
            hcf = i;
        }
    }

    cout << "HCF = " << hcf;
    return 0;
}                                            // Find HCF/GCD using for loop  //
