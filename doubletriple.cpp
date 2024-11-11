#include <iostream>
#include <iomanip>

using namespace std;


void double_It(int&);
void triple_It(int&);




int main()
{
    int input_Num, case_Num;
    
    
    cout << "Please enter number you want processed: ";
    
    cin >> input_Num;
    cout << endl;
    
    cout << "To have it doubled enter 2, or to have it tripled enter 3: ";
    
    cin >> case_Num;
    cout << endl;
    
    
    switch (case_Num)
    {
        case 2:
        {
            double_It(input_Num);
        }break;
            
        case 3:
        {
            triple_It(input_Num);
            
        }break;
            
        default:
        {
            cout <<"You entered an incorrect number" <<endl;
            cout <<endl;
        }
    }
}
    
void double_It (int& double_Num)
{
    double_Num *= 2;
    
    cout <<"The entered value doubled is " << double_Num << endl;
    cout << endl;
}

void triple_It (int& triple_Num)
{
    triple_Num *= 3;
    
    cout <<"The entered value tripled is " << triple_Num << endl;
    cout << endl;
}
