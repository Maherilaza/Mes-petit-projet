#include <iostream>
#include <string>
#include <string>

using namespace std;

class Calc {
private:
	int result;
public:
	int addition(int x, int y) {
		result = x + y;
        cout << "Resultat = " << result;
		return result;
	}
		int soustraction(int x, int y) {
			result = x - y;
            cout << "Resultat = " << result;
			return result;
	}
		int multiplication(int x, int y) {
			result = x * y;
            cout << "Resultat = " << result;
			return result;
		}

		int division(int x, int y) {
			if (y == 0) {
				std::cerr << "On peut pas diviser un nombre par zero";
				return 1;
			}
			else {
				result = x / y;
                cout << "Resultat = " << result;
				return result;
			}
		}
};

int main(int argc, char** argv) {
    std::string usage = "Usage : run.exe {-args} {-num1} {num2}\n-a [addition]\n-s [soustraction]\n-m [multiplication]\n-d [division]";
    bool argument = (argc == 4);

	Calc myObj;

    if(!argument){
        cout << usage;
        return 1;
    }

    for(int i = 0; i < argc; i++){
        if(std::string(argv[i]) == "-a"){
            std::string std1 = argv[2];
            std::string std2 = argv[3];

            int number = std::stoi(std1);
            int number2 = std::stoi(std2);

            myObj.addition(number, number2);

        }else if(std::string(argv[i]) == "-s"){
                        std::string std1 = argv[2];
            std::string std2 = argv[3];

            int number = std::stoi(std1);
            int number2 = std::stoi(std2);

            myObj.soustraction(number, number2);

        }else if(std::string(argv[i]) == "-m"){
            std::string std1 = argv[2];
            std::string std2 = argv[3];

            int number = std::stoi(std1);
            int number2 = std::stoi(std2);

            myObj.multiplication(number, number2);

        }else if (std::string(argv[i]) == "-d"){
            std::string std1 = argv[2];
            std::string std2 = argv[3];

            int number = std::stoi(std1);
            int number2 = std::stoi(std2);

            myObj.division(number, number2);

        }
    }


	return 0;
}