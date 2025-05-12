#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main(void)
{
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("(                        )\n");
    printf("( ****     *     * * *   )\n");
    printf("( *       **     |     ) )\n");
    printf("( ****     *     | * *   )\n");
    printf("( *        *     |     ) )\n");
    printf("( ****    ***    * * *   )\n");
    printf("(                        )\n");
    printf("(     / |       / |      )\n");
    printf("(    /  |      /  |      )\n");
    printf("(   /_ _|_ _  /_ _|_ _   )\n");
    printf("(       |         |      )\n");
    printf("(                        )\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("        /_\\__/_\\   \n");
    printf("       /        \\   \n");
    printf("      (  李仁瀚  )   \n");
    printf("       \\________/  ︿ \n");
    printf("       /        \\ / / \n");
    printf("      ( 程設作業 )/ /  \n");
    printf("       \\_________/_/  \n"); /*This is a personal style screen*/
    system("pause"); /*Pause the current screen*/
    system("cls"); /*Clear the current screen*/
    int password,n=0; /*Password input and judgment*/
    do{
        printf("Enter password:");
        scanf("%d",&password);
        n++;
        if(password==2025)
            break;
        if(n<=2)
            printf("You have %d attempts remaining.\n",(3-n));
        if(n==3){
            printf("You have entered the wrong password three times. Access denied.");
            return 0;}
    }while(n<3);
    system("cls"); /*Clear the current screen*/
    int  number=0,h;
    char seat[9][9],m,l;
    for(int i=0;i<9;i++){/*Initialize seat map*/ 
        for(int j=0;j<9;j++){
            seat[i][j]='-';
        }    
    }
    srand(time(NULL)); /*Randomly arrange 10 seats*/
    while(number<=9){
        int i=rand()%9;
        int j=rand()%9;
        if(seat[i][j]=='-'){
            seat[i][j]='*';
            number++;    
        }
    } 
    for(;;){ /* Main menu */
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("(                                   )\n");
        printf("(        a.Available seats          )\n");
        printf("(                                   )\n");
        printf("(        b.Arrange for you          )\n");
        printf("(                                   )\n");
        printf("(        c. Choose by yourself      )\n");
        printf("(                                   )\n");
        printf("(        d. Exit                    )\n");
        printf("(                                   )\n");
        printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("Please enter a single English letter:");
        scanf(" %c",&m);
        if(m=='a'||m=='A'){/*Check if m=a or A*/ 
            system("cls"); /*Clear the current screen*/ 
            printf("\\123456789\n"); /*Print out the 9x9 seat map*/ 
            for(int i=0;i<9;i++){
                printf("%d",9-i);
                for(int j=0;j<9;j++){
                    printf("%c",seat[i][j]);
                }
                printf("\n");
            }
            system("pause"); /*Pause the current screen*/ 
            system("cls"); /*Clear the current screen*/   
        }
        if(m=='b'||m=='B'){/*Check if m=b or B*/ 
            system("cls"); /*Clear the current screen*/ 
            printf("How many seats do you need (1–4):");
            scanf("%d",&h);
            if(h>=1&&h<=4){/*Check h*/
                switch(h){
                    case 1:/*Randomly assign 1 seat*/ 
                        while(1){
                            int a=rand()%9;
                            int n=rand()%9;
                            if(seat[a][n]=='-'){
                                seat[a][n]='@'; 
                                break;
                            }
                        }
                        break;
                    case 2:/*Randomly assign 2 consecutive seats*/ 
                        while(1){
                            int a=rand()%9;
                            int n=rand()%8;
                            if(seat[a][n]=='-'&&seat[a][n+1]=='-'){
                                seat[a][n]='@'; 
                                seat[a][n+1]='@'; 
                                break;
                            }
                        }
                        break;
                    case 3:/*Randomly assign 3 consecutive seats*/ 
                        while(1){
                            int a=rand()%9;
                            int n=rand()%7;
                            if(seat[a][n]=='-'&&seat[a][n+1]=='-'&&seat[a][n+2]=='-'){
                                seat[a][n]='@'; 
                                seat[a][n+1]='@';
                                seat[a][n+2]='@'; 
                                break;
                            }     
                        }
                        break;
                    case 4:
                        int k=rand()%2;/*k is a random modulus of 2*/ 
                        while(k==0){/*Randomly assign 4 consecutive seats*/
                            int a=rand()%9;
                            int n=rand()%6;
                            if(seat[a][n]=='-'&&seat[a][n+1]=='-'&&seat[a][n+2]=='-'&&seat[a][n+3]=='-'){
                                seat[a][n]='@'; 
                                seat[a][n+1]='@';
                                seat[a][n+2]='@';
                                seat[a][n+3]='@'; 
                                break;
                            }     
                        } 
                        while(k==1){/*Randomly assign 4 seats in a 2x2 pattern*/
                            int a=rand()%8;
                            int n=rand()%8;
                            if(seat[a][n]=='-'&&seat[a][n+1]=='-'&&seat[a+1][n]=='-'&&seat[a+1][n+1]=='-'){
                                seat[a][n]='@'; 
                                seat[a][n+1]='@';
                                seat[a+1][n]='@';
                                seat[a+1][n+1]='@'; 
                                break;
                            }     
                        }
                        break;
                }                                                                       
                printf("\\123456789\n"); /*Print out the 9x9 seat map*/ 
                for(int i=0;i<9;i++){
                    printf("%d",9-i);
                    for(int j=0;j<9;j++){
                        printf("%c",seat[i][j]);
                    }
                    printf("\n");
                }
                printf("Are you satisfied (y/n):");
                scanf(" %c",&l);
                if(l=='y')/*Check if l='y'*/ 
                    for(int i=0;i<9;i++){/*Change selected seats to reserved*/
                        for(int j=0;j<9;j++){
                            if(seat[i][j]=='@')
                                seat[i][j]='*';
                        }
                    } 
                if(l=='n')/*Check if l='n'*/ 
                    for(int i=0;i<9;i++){/*Change selected seats back to available*/
                        for(int j=0;j<9;j++){
                            if(seat[i][j]=='@')
                                seat[i][j]='-';
                        }
                    } 
                system("pause"); /*Pause the current screen*/ 
                system("cls"); /*Clear the current screen*/     
            }    
        }
        if(m=='c'||m=='C'){/*Check if m=c or C*/ 
            system("cls"); /*Clear the current screen*/ 
            char seats[7];
            int x, y;
             printf("\\123456789\n"); /*Print out the 9x9 seat map*/ 
            for (int i = 0; i < 9; i++) {
                printf("%d", 9 - i);
                for (int j = 0; j < 9; j++) {  
                    printf("%c", seat[i][j]);
                }
                printf("\n");
            }
            while (1) {/*Manually choose seats, and mark the selected seats as @*/
                printf("Please enter seat (row-column), or enter 0-0 to finish(Please press Enter once): ");
                scanf("%s",seats);
                if (sscanf(seats,"%d-%d",&x,&y)!=2||x < 0 || x > 9 || y < 0 || y > 9) {
                    printf("Invalid format, please re-enter.\n");
                    continue;
                }
                if (x == 0 && y == 0) break; 

                int a = 9 - x;
                int n = y - 1;
                if (seat[a][n] == '-') {
                    seat[a][n] = '@';
                } else {
                    printf("This seat is already taken, please choose another one.\n");
                }
            }
            printf("\\123456789\n"); /*Print out the 9x9 seat map*/ 
            for (int i = 0; i < 9; i++) {
                printf("%d", 9 - i);
                for (int j = 0; j < 9; j++) {
                    printf("%c", seat[i][j]);
                }
                printf("\n");
            }
            for(int i=0;i<9;i++){/*Change selected seats to reserved*/
                for(int j=0;j<9;j++){
                    if(seat[i][j]=='@')
                        seat[i][j]='*';
                }
            } 
            system("pause"); /*Pause the current screen*/ 
            system("cls"); /*Clear the current screen*/ 
        } 
        if(m=='d'||m=='D'){ /*Check if m=d or D*/
            system("cls"); /*Clear the current screen*/  
            printf("continue? (y/n):");
            scanf(" %C",&l);
            while(l!='Y'&&l!='y'&&l!='n'&&l!='N'){ /*Check l*/ 
                printf("Invalid input, please try again.\n");
                printf("continue? (y/n):");
                scanf(" %C",&l);
            }
            if(l=='y'||l=='Y'){
                system("cls"); /*Clear the current screen*/ 
            }
            if(l=='n'||l=='N')
                return 0;
        }
    }
}
/*這次作業讓我更熟悉陣列搭配 for 迴圈的使用方式，也是我第一次在程式中運用隨機亂數
和 sscanf，我學會了如何用亂數產生不同的輸入情境，也了解了 sscanf 如何將字串轉成數
值資料，透過實作我更清楚地看到邏輯結構在程式中的重要性，也培養了解決問題的能力。*/

