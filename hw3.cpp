#include <iostream>
using namespace std;
 int main() {                           
    char character;
    cout <<"enter your character: ";
    cin >> character;
    
    switch(character){
    	case 'a':
    	case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':  
	        cout<<"VOWEL";
		    break;
	    default:
		    cout<<"CONSONANT";
			break;  	
	}
  }

