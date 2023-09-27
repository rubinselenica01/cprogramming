#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)


	struct nyjadyshe{
		
		struct nyjadyshe* para;
		int e_dhena;
		struct nyjadyshe* tjetri;
		
	};
	
	
	struct nyjadyshe*KrijimiIListesRrethore(int data){
		struct nyjadyshe*temp;
		
		temp=(struct nyjadyshe*)malloc(sizeof(struct nyjadyshe));
		temp->para=temp;
		temp->e_dhena=data;
		temp->tjetri=temp;
		
		return temp;		
	}
	
	struct nyjadyshe *ShtimNeFillim(struct nyjadyshe* bishti,int data){
		struct nyjadyshe* ERe=KrijimiIListesRrethore(data);
		
		
		if(bishti==NULL){
			return ERe;
		}
		else{
			struct nyjadyshe* temp=bishti->tjetri;
			ERe->tjetri=temp;
			ERe->para=bishti;
			temp->para=ERe;
			bishti->tjetri=ERe;
		}
		return bishti;
	}
	
	struct nyjadyshe* ShtimNeFund(struct nyjadyshe*bishti,int data){
		struct nyjadyshe* ERe=KrijimiIListesRrethore(data);
		
		if(bishti==NULL){
			return ERe;
		}
		else{
			struct nyjadyshe*tmp=bishti->tjetri;
			ERe->tjetri=tmp;
			ERe->para=bishti;
			bishti->tjetri=ERe;
			tmp->para=ERe;
			
			bishti=ERe;
		}
		return bishti;
	}
	
	struct nyjadyshe* ShtimPasPozicionit(struct nyjadyshe*bishti,int data, int pozicioni){
		struct nyjadyshe* ERe=KrijimiIListesRrethore(data);
		
		if(bishti==NULL){
			return ERe;
		}
		
			struct nyjadyshe*temp=bishti->tjetri;
			while(pozicioni>1){
				
				temp=temp->tjetri;
				pozicioni--;
			}
			
			ERe->para=temp;
			ERe->tjetri=temp->tjetri;
			temp->tjetri->para=ERe;
			temp->tjetri=ERe;
			
			if(temp==bishti){
				bishti=bishti->tjetri;
			}
		return bishti;		
	}
	
	struct nyjadyshe* FshirjaENyjesSePare(struct nyjadyshe*bishti){
		
		if(bishti==NULL){
			return bishti;
		}
		struct nyjadyshe *tmp=bishti->tjetri;
		
		if(tmp==bishti){
			free(bishti);
			bishti=NULL;
			return bishti;
		}
		
		bishti->tjetri=tmp->tjetri;
		tmp->tjetri->para=bishti;
		free(tmp);
		tmp=NULL;
		
		return bishti;
	}
	
	struct nyjadyshe* FshirjaENyjesSeFundit(struct nyjadyshe*bishti){
		
		if(bishti==NULL){
			return bishti;
		}
		struct nyjadyshe *tmp=bishti->tjetri;
		
		if(tmp==bishti){
			free(bishti);
			bishti=NULL;
			return bishti;
		}
		
		bishti->para->tjetri=tmp;
		tmp->para=bishti->para;
		free(bishti);
		bishti=tmp->para;
		
		return bishti;
	}
	
	struct nyjadyshe* FshirjaENyjesMePozicion(struct nyjadyshe*bishti,int pozicioni){
		
		if(bishti==NULL){
			return bishti;
		}
		struct nyjadyshe *tmp=bishti->tjetri;
		
		while(pozicioni>1){
			tmp=tmp->tjetri;
			pozicioni--;
		}
		struct nyjadyshe*tmp2=tmp->para;
		
		tmp2->tjetri=tmp->tjetri;
		tmp->tjetri->para=tmp2;
		free(tmp);
		
		if(tmp==bishti)
			bishti=tmp2;
		
		return bishti;
	}
	
	void Printi(struct nyjadyshe*bishti){
		if(bishti==NULL){
			printf("Nuk ka nyje ne liste!");
		}
		else{
			struct nyjadyshe* temp=bishti->tjetri;
			
			do{
				printf("%d\t",temp->e_dhena);
				temp=temp->tjetri;
			}while(temp!=bishti->tjetri);
		}
		
	}
	int main (void){
		
		int v=40;
		
		struct nyjadyshe*bishti=NULL;
		
		bishti=KrijimiIListesRrethore(v);
		
		bishti=ShtimNeFillim(bishti,v+1);
		
		bishti= ShtimNeFund(bishti,v+2);
		
		bishti=ShtimPasPozicionit(bishti,v+3, 2);
		
		printf("Lista para fshirjes: \n");
		
		Printi(bishti);
		
		bishti=FshirjaENyjesSePare(bishti);
		
		bishti=FshirjaENyjesSeFundit(bishti);
		
		bishti=FshirjaENyjesMePozicion(bishti,2);
		
		printf("\nLista pas fshirjes:\n");
		
		Printi(bishti);
		
		
		return 0;
		
	}
