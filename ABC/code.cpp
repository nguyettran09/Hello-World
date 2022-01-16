/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //cout<<"Hello World";
    
    
    //  string word = "Teacher Nam, did you finish the slide of next week? By the way, did you help your parents take care of your younger brother today? and by the way, how old in month is he now?";
    //  bool encode = true;
     
    
    string word = "GA";
    bool encode = false;
    
    string result = "";
    
    
    vector<char> source = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    vector<char> des =    {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M'};
    
    char s;
        for (char s: word){
            if (s == ' ' or s == ',' or s ==  '.' or s == '!' or s == '?')
                result += s;    
            else if ((65 <= int(s) and int(s) <= 90) or (97 <= int(s) and int(s) <= 122)){//letter
                if(97 <= int(s) and int(s) <= 122){ //lower case
                    s = char(int(s)  -  32);
                }
                //now s is upper case
                if(encode)
                    result += des[int(s)-65];
                else{  //decode
                    for (int i = 0; i < 26; i++){
                        if (s == des[i]){
                            result += source[i];
                            break;
                        }
                    }
                }
            }
            else{
                //error: word with some illegal letter
                break;
            } 
        }
    cout <<result<<endl;
    return 1;
}
