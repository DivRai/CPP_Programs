#include<iostream>
#include<string>
using namespace std;

class charInput
{
    string result;    
    
    public:
        void add(char c) {
            result = result + c;
        }
        
        string getValue() 
        { 
            return result;
        }
};


class numInput : public charInput
{
    string result;
    
    public:
        void add(char c) 
        {
            if(c>='0' && c<='9')
            {
                result = result + c;
            }
        }

        string getValue() 
        { 
            return result;
        }
};


int main()
{
    numInput *inputN;
    inputN = new numInput();
    inputN->add('1');
    inputN->add('a');
    inputN->add('0');
    cout << inputN->getValue() << endl;
    return 0;
}
