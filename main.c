#include<stdio.h>
int main()
{
    int n;
    int choice , comp_choice ;
    printf("NO of times you want to play");
    scanf("%d",&n);
    while(n--){
    printf("Chose the option: \n 1 for rock \n 2 for paper \n 3 for scissors");
    scanf("%d",&choice);
    int comp_choice = rand() % 3 + 1;
    if(choice<=3){
    if(     comp_choice==1, choice==2){
        printf("player wins!");
    }
    else if(comp_choice==2, choice==2){
        printf("tie  :(");
    }
    else if(comp_choice==3,choice==2){
        printf("Computer Wins!");
    }
     else if(comp_choice==1,choice==1){
        printf("Tie :(");
    }
     else if(comp_choice==2,choice==1){
        printf("Computer Wins!");
    }
     else if(comp_choice==3,choice==1){
        printf("Player Wins!");
    }
     else if(comp_choice==1,choice==3){
        printf("Computer Wins!");
    }
     else if(comp_choice==2,choice==3){
        printf("Player Wins!");
    }
     else if(comp_choice==3,choice==3){
        printf("Tie :(");
    }
    }
    else{
        printf("Enter Valid Input");
    }
    }
    return 0;
}
