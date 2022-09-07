// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class patient
{
private:
    static int count;

public:
    patient(){
        cout << "patient added" << endl;
        count++;
    }
    static int get_count(){
        return count;
    }
};
// initializing static function kkkkkk
int patient::count;
int main()
{
    // objects
    patient p1,p2,p3,p4;
    
    cout << "TOTAL PATIENTS REGISTERED ARE: " << patient::get_count();
}
