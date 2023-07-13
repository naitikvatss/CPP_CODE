#include<iostream>


using namespace std;

/*void tower_of_hanoi ( int n , char src , char dst , char hlp){
    if( n==0){
        return;
    }
    tower_of_hanoi( n-1 , src , hlp , dst);
    cout<<"MOVE FROM " <<src<<" TO "<<dst<<endl;
    tower_of_hanoi( n-1 , hlp , dst , src);
}


int main(){
    tower_of_hanoi ( 4 , 'A', 'C' , 'B');
    return 0 ;
}*/

/*string remove_dupl( string s){
    if (s.length()==0){
        return ;
    }
char ch= s[0];
string ans = remove_dupl (s.substr(1));

if (ch ==ans[0]){
    return ans;
}
return (ch + ans) ; 

}

int main(){

    remove_dupl(" aaabddssee");
}*/


/*string move_all_x ( string s){

    if ( s.length()== 0 ){
        return;
    }

    char ch = s[0];
    string ans = move_all_x( s.substr(1));

    if ( ch == 'x'){
        return ( ans + ch);
    }

    return ( ch + ans);
}

int main(){
    cout<<move_all_x ("xxasdxdx") <<endl;
    return 0;
} 

*/
/*
void subseq ( string s , string ans){

    if ( s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch= s[0];
    int code = ch;
    string ros = s.substr(1);
    subseq(ros , ans  );
    subseq( ros , ans+ch);
    subseq( ros , ans+ to_string(code));
}

int main(){

    subseq( "ABC" , "");
    cout<<endl;
}
*/
string keypadArr[] = { "", "abc" , "def" , "ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad( string s , string ans){

    if( s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch= s[0];
    string code = keypadArr[ ch - '0'];
    string ros = s.substr(1);

    for( int i=0; i< code.length(); i++){
        keypad( ros , ans + code[i]);
    }
}

int main(){
    keypad( "23" , "");

}


#include <iostream>

using namespace std;

void rev_string ( string s ){
    
    if( s.length()==0){
        return;
    }
    
    string ros = s.substr(1);
    rev_string(ros);
    cout<<s[0];
}

int main()
{
  rev_string( "binod");

    return 0;
}


#include <iostream>

using namespace std;

int first_occ ( int arr[], int n , int i, int key){
    
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return first_occ( arr , n, i+1 , key);
}

int last_occ ( int arr[], int n, int i, int key){
    if (i==n){
        return -1;
    }
    
    int rest_array = last_occ( arr ,n, i+1 , key);
    if ( rest_array=! -1){
        return rest_array;
    }
    
    if ( arr[i]== key){
        return i;
    }
    
   
   return -1;
}



int main()
{
  int arr[]={ 4,2,1,2,5,2,7};
  cout<<first_occ( arr , 7 , 0 , 2);
  cout<<last_occ(arr , 7 , 0 , 2);

    return 0;
}

/*
#include <iostream>

using namespace std;

void replace ( string s){
    
    if( s.length()==0){
        return;
    }
    
    if( s[0]== 'p' && s[1]== 'i' ){
        cout<<3.14;
        replace ( s.substr(2));
    }
    else
    cout<<s[0];
    replace(s.substr(1));
}

int main()
{
   replace ( "pippppiiiip");

    return 0;
}*/