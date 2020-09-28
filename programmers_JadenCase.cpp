/************************************************************
 *  name : Youngwoo Park
 *  date : 09-28-2020
 *  level: l2
 *  problem source: programmers
 *  lang: C++
 *  skill: tolower and toupper
 * *********************************************************/

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool nextSpace = false;
    answer += putchar(toupper(s[0]));
    for(int i = 1 ; i < s.size() ; i++){
        if(s[i] == ' '){
            nextSpace = true;
            answer.push_back(' ');            
        }
        else if(nextSpace == true){
            answer+= putchar(toupper(s[i]));
            nextSpace = false;
        }else{
            answer += putchar(tolower(s[i]));
        }
    }
    return answer;
}
