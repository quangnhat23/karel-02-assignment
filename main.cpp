#include<iostream>
using namespace std;
#include<string>
using namespace std;
const int ROWS = 15;
const int COLUMNS= 15;
char grid[ROWS][COLUMNS];
int karel ;
string karelDirection;

void karelBoard(char grid[][COLUMNS])
{
cout<<" ";
for(int rows=0; rows<COLUMNS; rows++)
cout<<rows+1<<" ";
cout<<endl;
for(int rows=0; rows<COLUMNS; rows++)
{  
cout<<rows+1<<"  ";
for(int columns=0; columns<COLUMNS; columns++)
{
cout<<grid[rows][columns]<<"  ";
}
cout<<endl;
}
}

void karelMove(int &rows, int &columns) //i tried to remove the "&" , and it only move 1 step 
{
grid[rows][columns] = '-';
if(karelDirection=="North") {rows--;
}else if(karelDirection=="East") {columns++;
}else if(karelDirection=="West") {columns--;
}else if(karelDirection=="South"){ rows++;
}
  
if(rows>=ROWS || columns>=COLUMNS || rows<0 || columns<0)
{
cout<<"Karel has been crashed!!"<<endl;
exit(0);
}
  
if(grid[rows][columns]==' ')karel=1;{
grid[rows][columns] = 'O';
}
}
void turnLeft()
{
if(karelDirection=="North"){ karelDirection = "West";
}else if(karelDirection=="East"){ karelDirection = "North";
cout<<"karel face to North"<<endl;
}else if(karelDirection=="West"){ karelDirection ="South";
cout<<"Karel face to South"<<endl;
}else if(karelDirection=="South"){ karelDirection = "East";
cout<<"Karel face to East"<< endl;
}
cout<<"karel has turn left!"<<endl;   
}

void quit(){
cout<< "Karel stop!"<<endl;
exit(0);
}

int main(){
int rows = ROWS-1, columns = 0, command;
for(int rows=0; rows<ROWS; rows++){
for(int columns=0; columns<COLUMNS; columns++){
grid[rows][columns] = '-'; //I don't know why i put this letter "_" when the karel move, it change to "-" 
}
}
grid[rows][columns] = 'O';
karelDirection = "East";
while(1){
karelBoard(grid);
cout<<"1. Move(); 2. Turn Left(); 3.Quit"<<endl;
cout<<"Enter your command number: "<<endl;
cin>>command;

switch(command){ //I found on this one on the youtube, and I see this one may be easier and convinient ways, and it give me many case for each situation below here the link I found https://www.youtube.com/watch?v=_CelY_ZBXb4
case 1:
karelMove(rows, columns);
break;
case 2:
turnLeft();
break;
case 3:
quit();
default:
cout<<"Syntax error! Try again"<<endl;   
}
}
}


// I tried a lot on karelBeeper and it fail :( sorry Ben no Beeper