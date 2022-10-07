#include<iostream>
#include<map>
#include<Windows.h>
using namespace std;

char random_operator(){
    srand(time(0));
    int a= rand()%5;
    map<int,char> operators={{0,'-'},{1 ,'+'},{2,'*'},{3,'/'},{4,'%'}};
    return operators[a];
}
int result(char op,int operand1,int operand2){
    switch (op)
    {
    case '+':
        return operand1+operand2;
    case '-':
        return operand1-operand2;
    case '*':
        return operand1*operand2;
    case '/':
        return operand1/operand2;
    case '%':
        return operand1%operand2;
    }
}
int main(){
    cout<<"\n\nWe will Display Arithmetic expressions, your task is to evaluate them and input the results. You have three wrong attempts once they are exhausted, the game will be over.We will be using '-' for subtraction,'+' for addition , '/' for division, '*' for multiplication, '%' for modulo. Sole purpose of the application/game is to train you solve basic arithmetic expressions fast.To Start enter \"start\" to quit enter \"quit\". ";
    cout<<"\n\n#####################\n\n";
    string flag;
    cout<<"Enter your Choice\t :";
    while(true){
    cin>>flag;
    if(flag=="start"){
        break;
    }else if(flag=="quit"){
        exit(0);
    }
    else{
        cout<<" enter valid input  ";
    }}
    int a,b,c,count=3,score=0,finalsc=0,div=10;
    srand(time(0));

    while(count>0){
        a=(rand()%div);
        b=rand()%div;
        char op=random_operator();
        if(op=='/' and b==0){
            b++;
        }
        cout<<a<<op<<b<<endl;
        cin>>c;
        if(c!=result(op,a,b)){
            count--;
            cout<<"wrong"<<" -1    "<<"lives remaining: "<<count<<endl;
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

    cout<<"\n\n\tYour Score is:\t";
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
                                { #10: add two modes : timed and normal..use  #def or related pragma}
****************************************************************************************************
****************************************************************************************************
solution proposed :  
  #5 file i/o operation
  # can use clearscr type functioms

*/

