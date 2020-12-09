#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

string removeSpecialCharacter(string s) 
{ 
    for (int i = 0; i < s.size(); i++) { 
          
        // Finding the character whose  
        // ASCII value fall under this 
        // range 
        if (s[i] < 'A' || s[i] > 'Z' && 
            s[i] < 'a' || s[i] > 'z')  
        {    
            // erase function to erase  
            // the character 
            s.erase(i, 1);  
            i--; 
        } 
    }
    transform(s.begin(), s.end(), s.begin(), ::tolower); 

	return s;
} 

int main(){
	
	
	stack <char> s1;
	string s = "Was it a cat I saw ?";
	cout<<'"'<<s<<'"';
	s = removeSpecialCharacter(s);
	string a;
	int i;
	int n = int(s.length());
	int n2 = n/2;
	
	for(i=0;i<n2;i++)
		a[i] = s[i];
	
	if(n%2==1)
		i = i+1;
		
	for(;i<n;i++)
		s1.push(s[i]);
	
	for(i=0;i<n/2;i++){
		
		if(s1.top()!=a[i]){
			
			cout<<" is not a palindrome.";
			break;
			}
		else
			s1.pop();
		
		if(i==n/2-1)
			cout<<" is a palindrome.";
	}
	
}			
