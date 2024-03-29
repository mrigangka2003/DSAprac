#include<iostream>
#include<string>
using namespace std ;

/*void palindrome(string str){
    int n = str.size();
    for(int i = 0 ; i<n ; i++){
        if(str[i]!=str[n-i-1]){
            cout<<"not a palindrome "<<endl;
            break ;
        }
    }
    cout<<"palindrome"<<endl;

}*/
string lowercase(string str){
    for(int i = 0; i<str.size(); i++){
        if(str[i]>= 65 && str[i]<= 91){
            str[i] = str[i]-'A' +'a' ;
        }
    }
    return str ;
}


void counting(string str){
    int vowel= 0 , conso = 0 , space = 0 ;
    for(int i = 0; i<str.length(); i++ ){
        if(str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u'){
            vowel++ ;
        }else if(str[i]== ' '){
            space++ ;
        }else{
            conso++ ;
        }
    }

    cout<<"Vowel--> "<<" "<<vowel <<endl;
    cout<<"conso--> "<<" "<<conso<<endl;
    cout<<"spaces--> "<<" "<<space <<endl;
}

string removeVowel(string str){
    for(int i = 0 ; i < str.size() ; i++){
        if(str[i]=='a' || str[i]=='e'||str[i]=='i' || str[i]=='o'||str[i]=='u'){
            str.erase(str.begin()+i) ;
        }
    }
    return str ;
}

string RemoveChar(string &str){
    string ans ="" ;
    for(int i = 0 ; i<str.size();i++){
        if((str[i]>='A' && str[i]<='Z' )||(str[i]>='a' && str[i]<='z'))
            ans.push_back(str[i]) ;
        
    }
    return ans ;
}

string RemoveBrackets(string str){
    for(int i = 0 ; i <str.size(); i++){
        if(str[i]==')'||str[i]=='(' || str[i]=='}'||str[i]=='{' ||str[i]=='['||str[i]==']')
        {
            str.erase(str.begin()+i);
        }
    }
    return str ;
}

//capatilizing the fist and last element of an string 
string cap(string str){

    // if(str[0]>='a' && str[0]<= 'z')

    //     str[0] = str[0]-'a'+'A' ;

    // if(str[str.length()-2]>='a' && str[0]<= 'z')
    //     str[str.length()-2] -'a' + 'A' ;

        
    for(int i = 0 ; i<str.size(); i++){
        if((str[i-1]==' '|| str[i+1]==' '|| i==0 || i== (str.size()-1) ) && (str[i]>='a' && str[i]<= 'z')){
            str[i] = str[i]-'a'+'A' ;
        }
    }
    return str ;
}

int main(){
    string str ="" ;
    cout<<"enter a string "<<endl;
    getline(cin,str) ;
    // lowercase(str);
    cout<<cap(str)<<endl ;


   
}