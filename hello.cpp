#include<iostream>


using namespace std;

void tower_of_hanoi ( int n , char src , char dst , char hlp){
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
}