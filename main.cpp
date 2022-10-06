#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
    int a,b,c,count=3,score=0,finalsc=0,div=10;
    srand(time(0));

    while(count>0){
        a=(rand()%div);
        b=rand()%div;
        cout<<a<<"+"<<b<<endl;
        cin>>c;
        if(c!=(a+b)){
            count--;
            cout<<"wrong"<<" -1"<<endl;
        }
        else{
        score++;
        if(score>10){
            finalsc+=score;
            score=0;
            div*=10;
        }}
    }
    finalsc+=score;
    cout<<finalsc;

    
    Sleep(5000);
    return 0;
}
//TODO:
/***************************************************************************************************
****************************************************************************************************     
functionalities to be added :   { #1 : levels}
                                { #2 : random numbers of digits in a and b}
                                { #3: different types of operations instead of " + " only}
                                { #4: messages to be displayed before and after the game,during score display etc.}
                                { #5: use file i/o operations to store scores (in sorted orders also)}
                                { #6: using DSA return highscores , last score,}
                                { #7: built full functionality to diisplay scores on user demands}
                                { #8: preapre progarm as a playable game or usable application for end users...
                                      ... such as asking before starting and before exit, a}
                                { #9: Also show time taken in result/score.}
****************************************************************************************************
****************************************************************************************************
solution proposed :  
  #5 file i/o operation
  # can use clearscr type functioms

*/

