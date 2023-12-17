#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Calc{
    private:
        int result;
    public:
        int addition(int x, int y){
            result = x + y;
            return result;
        }
        int soustraction(int x, int y){
            result = x - y;
            return result;
        }
        int addition(int x, int y, int z){
            result = x + y + z;
            return result;
        }
        int division(int x, int y){
            if(y == 0){
                cout << "Division par 0 impossible" << endl;
                return 1;
            }
            else{
                result = x / y;
                return result;
            }
        }
        int racine(int x){
            result = sqrt(x);
            return result;
        }
        int puissance(int x, int y){
            result = pow(x, y);
            return result;
        }
};

int main(int argc, char** argv){
    Calc myObj;

    if(argc != 4 &&  argc != 3){
        cout << "Usage : .\run.exe {args} {num1} {num2}\n -a : addition\n -s : soustraction\n -d : division\n -p : puissance\n -r : racine" << endl;
        return 1;
    }
    for(int i = 0; i < argc; i++){
        if(string(argv[i]) == "-a"){
            if(argc == 4){
                cout << myObj.addition(stoi(argv[2]), stoi(argv[3])) << endl;
            }
            else{
                cout << myObj.addition(stoi(argv[2]), stoi(argv[3]), stoi(argv[4])) << endl;
            }
        }
        else if(string(argv[i]) == "-s"){
            cout << myObj.soustraction(stoi(argv[2]), stoi(argv[3])) << endl;
        }
        else if(string(argv[i]) == "-d"){
            cout << myObj.division(stoi(argv[2]), stoi(argv[3])) << endl;
        }
        else if(string(argv[i]) == "-p"){
            cout << myObj.puissance(stoi(argv[2]), stoi(argv[3])) << endl;
        }
        else if(string(argv[i]) == "-r"){
            if(argc =! 3){
                cout << "Usage : .\run.exe {args} {num1} {num2}\n -a : addition\n -s : soustraction\n -d : division\n -p : puissance\n -r : racine" << endl;
                return 1;
            }else{
                cout << myObj.racine(stoi(argv[2])) << endl;
            }
        }
    }


    return 0;
}