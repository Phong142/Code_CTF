#include <stdio.h>
#include <stdlib.h>

int m=2,n=3;
char a[101][101];
void Nhap(){
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i == 2 && j == 3)
                a[i][j] = 'P';
            else if (i == 4 && j == 7)
                a[i][j] = 'K';
            else if (i == 5 && j == 4)
                a[i][j] = 'k';
            else if (i == 7 && j == 5)
                a[i][j] = 'E';
            else if (i == 1 || i == 7)
                a[i][j] = '=';
            else if (j == 1 || j == 2 || j == 8 || j == 9)
                a[i][j] = '|';
            else
                a[i][j] = '-';
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}
void In(){
    for(int i=1; i<=7; i++){
        for(int j=1; j<=9; j++){
            printf("%c", a[i][j]);
        }
        printf("\n");
    }
}
int main() {
    Nhap();
    int checkwin=0;
    int Ck=0;
    while(checkwin==0){
        system("cls");
        In();
        int u=m;
        int w=n;
        if(m==5 && n==4)
            printf("Dit me thang ngu, hihi\n");
        else if(m==4 && n==7){
            Ck=1;
            printf("May sap win roi\n");
        }
        if(Ck==1 && m==7 && n==5){
            checkwin=1;            
		}
        char x;
        printf("Moi ban nhap buoc di chuyen: ");
        scanf("%c", &x);
        if(x=='S' && Ck==1 && m==6 && n==5){
        	system("cls");
			printf("Win roi con cho");
			break;
		}
        if(x=='D'){
            if(n<7)
            n++;
        }
        else if(x=='S'){
            if(m<6)
            m++;
        }
        else if(x=='A'){
            if(n>3)
            n--;
        }
        else if(x=='W'){
            if(m>2)            
            m--; 
        }                             
        a[u][w]='-';                    
        a[m][n]='P'; 					
    }
}
