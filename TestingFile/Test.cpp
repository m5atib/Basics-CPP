#include <iostream>
#include <fstream>
#include <stack>
using namespace std;

string isBalanced(string s) {
    
    
    if (s.length()%2) return "NO";
    stack <char> mys;
    long long len = s.length();
    for (long long i=0; i<len; i++){
        
        if (s[i] == '}'){
            if (mys.size() <1) return "NO";
            if (mys.top() == '{') mys.pop();
            else return "NO";
        }
        else if (s[i] == ']'){
            if (mys.size() <1) return "NO";
            if (mys.top() == '[') mys.pop();
            else return "NO";
        }
        else if (s[i] == ')'){
            if (mys.size() <1) return "NO";
            if (mys.top() == '(') mys.pop();
            else return "NO";
            
        }else if (s[i] == '{'){
            mys.push(s[i]);
        }
        else if (s[i] == '['){
            mys.push(s[i]);
        }
        else if (s[i] == '('){
            mys.push(s[i]);
        }
    }
    
    if (mys.size() > 0) return "NO";
    else {
    return "YES";
    }
    
}

int main(int argc, char *argv[])
{
	ifstream fin("case1.txt");
	ifstream finout("out1.txt");
	string myResult ;
	string out;
	string allCases;
	string funResult;
	fin>>allCases;
	cout<<"MyResult|\tCorrectOut"<<endl;
	
	int correctCases=0;
	while (fin>>myResult){
		finout>>out;
		funResult = isBalanced(myResult);
		if (funResult == out)
		correctCases++;
		cout<<funResult<<"\t|\t"<<out<<endl;
	}
	cout<<"The Correct Casses:"<<correctCases<<"/"<<allCases<<endl;
	fin.close();
	return 0;
}