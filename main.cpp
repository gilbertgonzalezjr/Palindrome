#include <iostream>
#include <cstring>
#include <string>
#include <cctype>
#include "functions.h"
using namespace std;

int main(int argc, char *argv[]) {
    bool space_sensitivity=true;
    bool case_sensitivity=false;
    string argument;
    if(argc<2){
        printUsageInfo(argv[0]);
    }
    else if (argc==2 && argv[1][1]=='-'){
         printUsageInfo(argv[0]);
    }
    for(int i=1;i<argc;i++){
        if (argv[i][0]=='-'){
            int argLength=strlen(argv[i]);
            for(int j=1;j<argLength;j++){
                if (argv[i][j]=='c'||argv[i][j]=='C')
                    case_sensitivity=true;
                else if(argv[i][j]=='s'||argv[i][j]=='S'){
                    space_sensitivity=false;}
                else{  
                 printUsageInfo(argv[0]);   
                }    
           }
        }
      
        else{
                
            
            if(isPalindrome(argv[i],case_sensitivity,space_sensitivity)){
                cout<<"\""<<argv[i]<<"\""<<" is a palindrome."<<endl;
            }
            else{
                cout<<"\""<<argv[i]<<"\""<<" is not a palindrome."<<endl;
            }             

            } 
        }
    }
