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
	printf("      (  �����v  )   \n");
	printf("       \\________/  �s \n");
	printf("       /        \\ / / \n");
	printf("      ( �{�]�@�~ )/ /  \n");
	printf("       \\_________/_/  \n");/*�H�W�O�ӤH����e��*/ 
	system("pause");/*�����e�e��*/ 
	system("cls");/*�M����e�e��*/ 
    int password,n=0; /*�K�X��J�M�P�_*/ 
  do{
  printf("��J�K�X:");
  scanf("%d",&password);
  n++;
  if(password==2025)
  break;
  if(n<=2)
  printf("�ٳѾl%d��\n",(3-n));
  if(n==3){
  printf("���~�T�������J�F");
  return 0;}
  }while(n<3);
  system("cls");/*�M����e�e��*/ 
  for(;;){/*�D���*/ 
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("(                        )\n");
	printf("(      a.�����T����      )\n");
	printf("(                        )\n");
	printf("(      b.��ܭ��k��      )\n");
	printf("(                        )\n");
	printf("(      c.����            )\n");
	printf("(                        )\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	int h,a,n; 
	char m,j,k,l;
	printf("�п�J�ӭ^��r��:");
	scanf(" %c",&m);
	if(m=='a'||m=='A'){/*�P�_m=a��A*/ 
    system("cls");/*�M����e�e��*/ 
    printf("��Ja-n�䤤�@�Ӧr��:");
    scanf(" %c",&k); 
    while(k<'a'||k>'n') {/*�P�_k*/ 
    printf("�Э��s��J\n");
    printf("��Ja-n�䤤�@�Ӧr��:");
    scanf(" %c",&k);
}
     if(k>='a'&&k<='n'){
     /*�����T����*/ 
     for (int i = k; i >= 'a'; i--) {/*�L�X�X��*/ 
     	for(int l=i-1;l>='a';l--){/*�C�檺�Ů�*/ 
     		printf(" ");
		 }
                    for (j = i; j <= k; j++) {/*�C�檺�r��*/
                        printf("%c", j);
                    }
                    printf("\n");
                }
                system("pause");/*�����e�e��*/ 
                system("cls");/*�M����e�e��*/ 
            }
}
		if(m=='b'||m=='B'){/*�P�_m=b��B*/
			system("cls");/*�M����e�e��*/ 
    printf("��J1-9�䤤�@�ӼƦr:");
    scanf(" %d",&h); 
    while(h>9||h<1) {/*�P�_h*/ 
    printf("�Э��s��J\n");
    printf("��J1-9�䤤�@�ӼƦr:");
    scanf(" %d",&h);
            }
            if(h<=9&&h>=1){
            /*�E�E���k��*/
        	for(a=1;a<=h;a++){/*�C�@�C�n�����Ĥ@�ӼƦr*/
        		for(n=1;n<=h;n++)/*�C�@�檺�ĤG�ӼƦr*/
        	   printf(" %d*%d=%2d",n,a,n*a);{
        	   printf("\n");
			}	
        }
        	system("pause");/*�����e�e��*/ 
        	system("cls");/*�M����e�e��*/ 
		}
        }
        if(m=='C'||m=='c'){/*�P�_m=c��C*/
        	system("cls");/*�M����e�e��*/ 
        	printf("continue? (y/n):");
        	scanf(" %C",&l);
        	while(l!='Y'&&l!='y'&&l!='n'&&l!='N'){/*�P�_l*/ 
        	printf("���~�T�����s��J\n");
        	printf("continue? (y/n):");
        	scanf(" %C",&l);
        }if(l=='y'||l=='Y'){
          system("cls");/*�M����e�e��*/ 
      }
      if(l=='n'||l=='N')
      return 0;
        }
        
}

}
/* �o�����{���@�~���ڹ�for�j�馳�F��`���F�ѡC�Ĥ@���ϥΨ�for���L�a�j��A���ھǨ�n�`�N�פ���󪺭��n�ʡA
�t�~�A�ڤ]�o�{��ӦL�X�Ů�o�ؤp�Ӹ`�A�]�i�H��for�j��ӧ����Aı�o�ܷs�A�A�o���@�~�]���ڦA���ƲߤFwhile�j
�骺�ϥΤ覡�A��j����骺�x����[���x�F�C*/ 

  
