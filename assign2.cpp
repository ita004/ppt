#include<iostream>
#include<string>
using namespace std;

char repeatingChar(string &s){
    int size = s.length();
    for(int i=0; i<size;i++){
        for(int j=0; j<size; j++){
            if(s[i]==s[j]){
                return s[i];
            }
            
        }
        return -1;
    }
}

    int
    main()
{

    string s = "leetcode";
   std::cout<<"repeating character is: "<< repeatingChar(s);
    return 0;
}