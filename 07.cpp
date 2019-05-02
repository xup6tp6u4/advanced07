#include<stdio.h>
#include<stdlib.h>

#define MAX 100

int main(void){
	char str[MAX];     
	char w,wm;
	int wn[2]={0,0};  
							 
	int sn=0;          
	int i,j;              
	int sw=1;      
	 
	printf("請輸入小於100的字串:");
	scanf("%s",&str);
	
	for(i=0;i<99;i++){     
		
		if(str[i]=='\0'){
			break;
		}
		sn+=1;
	}
	 
	for(j=0;j<sn-1;j++){                
			if(str[j]==str[j+1]){ 
				sw+=1;     
				wn[1]=sw; 
				w=str[j]; 
				if(wn[1]>wn[0]){  
					wn[0]=wn[1];
					wm=w;
				} 
				continue;
			}
			else{
			 
				sw=1;
				wn[1]=0;
			}	
			
		}
	printf("最長相同的字元為:\n");	
	for(i=0;i<wn[0];i++){
		printf("%c",wm);
	}		
	
	printf("\n");
    return 0;
	system("pause"); 
} 
