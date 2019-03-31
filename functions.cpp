#include <iostream>
#include "functions.h"
void printUsageInfo(string exe_name){
    cout<<"Usage: "<<exe_name<<" [-c] [-s] string ..."<<endl;
    cout<<"  -c: turn on case sensitivity"<<endl;
    cout<<"  -s: turn off ignoring spaces"<<endl;
    exit(1);
}
bool isPalindromeR(string pal){
   
    string temp=pal;
    int j=0;
    for (int i=pal.length()-1;i>=0;i--){
        temp[j]=pal[i];
        j++;
        
    }
   
    if (temp==pal){
        return 1;}
    else{
        return 0;}
}
bool isPalindrome(string checkPal, bool case_sense, bool space_sense){
int track=0;
    
    if(space_sense==1){
        for(int i=0;checkPal[i];i++){
            if(checkPal[i]!=' '){
                checkPal[track++]=checkPal[i];
                
            }     
        }   
    }
    if(track!=0){
    checkPal=checkPal.substr(0,track);}
    if(case_sense==0){
        for(int j=0;checkPal[j];j++){
            
            checkPal[j]=tolower(checkPal[j]);
        }
    }
     for (size_t i = checkPal.size() - 1; i; --i){
        if (ispunct(checkPal[i]) ){
            checkPal.erase(i,1);
        }
     }
    
    
    return isPalindromeR(checkPal);
}
