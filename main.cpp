#include <iostream>
using namespace std;
int main(){
        float a,b;
        int o;
        cin>> a >> b >> o;
        switch (o) {
            case 0:
                cout<< (a*b)/2 << endl;
                break;
            case 1:
                cout<< (a*a) << endl;
                break;
            case 2:
                cout << (a*b)<< endl ;
                break;
            default:
                cout << "opzione non valida";
        }
        return 0;
    }

