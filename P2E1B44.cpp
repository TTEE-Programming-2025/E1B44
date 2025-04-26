#include<stdio.h>
#include<stdlib.h>
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
	printf("       \\_________/_/  \n");/*以上是個人風格畫面*/ 
	system("pause");/*停止當前畫面*/ 
	system("cls");/*清除當前畫面*/ 
    int password,n=0; /*密碼輸入和判斷*/ 
  do{
  printf("輸入密碼:");
  scanf("%d",&password);
  n++;
  if(password==2025)
  break;
  if(n<=2)
  printf("還剩餘%d次\n",(3-n));
  if(n==3){
  printf("錯誤三次不能輸入了");
  return 0;}
  }while(n<3);
  system("cls");/*清除當前畫面*/ 
  for(;;){/*主選單*/ 
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("(                        )\n");
	printf("(      a.直角三角形      )\n");
	printf("(                        )\n");
	printf("(      b.顯示乘法表      )\n");
	printf("(                        )\n");
	printf("(      c.結束            )\n");
	printf("(                        )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	int h,a,n; 
	char m,j,k,l;
	printf("請輸入個英文字母:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){/*判斷m=a或A*/ 
    system("cls");/*清除當前畫面*/ 
    printf("輸入a-n其中一個字母:");
    scanf(" %c",&k); 
    while(k<'a'||k>'n') {/*判斷k*/ 
    printf("請重新輸入\n");
    printf("輸入a-n其中一個字母:");
    scanf(" %c",&k);
}
     if(k>='a'&&k<='n'){
     /*直角三角形*/ 
     for (int i = k; i >= 'a'; i--) {/*印出幾行*/ 
     	for(int l=i-1;l>='a';l--){/*每行的空格*/ 
     		printf(" ");
		 }
                    for (j = i; j <= k; j++) {/*每行的字母*/
                        printf("%c", j);
                    }
                    printf("\n");
                }
                system("pause");/*停止當前畫面*/ 
                system("cls");/*清除當前畫面*/ 
            }
}
		if(m=='b'||m=='B'){/*判斷m=b或B*/
			system("cls");/*清除當前畫面*/ 
    printf("輸入1-9其中一個數字:");
    scanf(" %d",&h); 
    while(h>9||h<1) {/*判斷h*/ 
    printf("請重新輸入\n");
    printf("輸入1-9其中一個數字:");
    scanf(" %d",&h);
            }
            if(h<=9&&h>=1){
            /*九九乘法表*/
        	for(a=1;a<=h;a++){/*每一列要乘的第一個數字*/
        		for(n=1;n<=h;n++)/*每一行的第二個數字*/
        	   printf(" %d*%d=%2d",n,a,n*a);{
        	   printf("\n");
			}	
        }
        	system("pause");/*停止當前畫面*/ 
        	system("cls");/*清除當前畫面*/ 
		}
        }
        if(m=='C'||m=='c'){/*判斷m=c或C*/
        	system("cls");/*清除當前畫面*/ 
        	printf("continue? (y/n):");
        	scanf(" %C",&l);
        	while(l!='Y'&&l!='y'&&l!='n'&&l!='N'){/*判斷l*/ 
        	printf("錯誤訊息重新輸入\n");
        	printf("continue? (y/n):");
        	scanf(" %C",&l);
        }if(l=='y'||l=='Y'){
          system("cls");/*清除當前畫面*/ 
      }
      if(l=='n'||l=='N')
      return 0;
        }
        
}

}
/* 這次的程式作業讓我對for迴圈有了更深的了解。第一次使用到for的無窮迴圈，讓我學到要注意終止條件的重要性，
另外，我也發現原來印出空格這種小細節，也可以用for迴圈來完成，覺得很新鮮，這次作業也讓我再次複習了while迴
圈的使用方式，對迴圈整體的掌握更加熟悉了。*/ 

  
