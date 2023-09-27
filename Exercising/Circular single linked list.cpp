#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)


	struct nyjateke{
		
		int e_dhena;
		struct nyjateke* tjetri;
		
	};
	
	//krijon nyje
	struct nyjateke*KrijimiIListesRrethore(int data){
		struct nyjateke*temp;
		
		temp=(struct nyjateke*)malloc(sizeof(struct nyjateke));
		temp->e_dhena=data;
		temp->tjetri=temp;
		
		return temp;		
	}
	//shton nyje ne fillim te listes
	struct nyjateke*ShtimNeFillim(struct nyjateke* bishti, int data){
		struct nyjateke* tmp=(struct nyjateke*)malloc(sizeof(struct nyjateke));
		
		tmp->e_dhena=data;
		tmp->tjetri=bishti->tjetri;
		bishti->tjetri=tmp;
		
		return bishti;
	}
	//shton nyje ne fund te listes
	struct nyjateke*ShtimNeFund(struct nyjateke* bishti, int data){
		struct nyjateke* tmp=(struct nyjateke*)malloc(sizeof(struct nyjateke));
		tmp->e_dhena=data;
		tmp->tjetri=NULL;

		
		tmp->tjetri=bishti->tjetri;
		bishti->tjetri=tmp;
		bishti=bishti->tjetri;
		
		return bishti;
	}
	//shton nyje pas pozicionit
	struct nyjateke*ShtoPasPozicionit(struct nyjateke* bishti, int data,int pozicioni){
		struct nyjateke* tmp=(struct nyjateke*)malloc(sizeof(struct nyjateke));
		
		tmp->e_dhena=data;
		tmp->tjetri=NULL;
		
		struct nyjateke* sh=bishti->tjetri;
		
		
		while(pozicioni>1){
			sh=sh->tjetri;
			pozicioni--;
		}
		
		tmp->tjetri=sh->tjetri;
		sh->tjetri=tmp;
		
		if(sh==bishti){
			bishti=bishti->tjetri;
		}
	
		return bishti;
	}
	
	//krijimi i nje liste rrethore te lidhur teke 
	struct nyjateke* KrijimiINjeListeTeTere(struct nyjateke*bishti ){
		int n,i,e_dhenee;
		
		printf("Vendosni numrin e nyjeve qe doni te krijoni!");
		scanf("%d",&n);
		
		if(n==0) return bishti;
		
		printf("Vendos elementin e nyjes 1 ! : ");
		scanf("%d",&e_dhenee);
		
		bishti=KrijimiIListesRrethore(e_dhenee);
		
		for(i=1;i<n;i++){
			printf("Vendos elementin e nyjes %d ! : ",i+1);
			scanf("%d",&e_dhenee);
			bishti=ShtimNeFund(bishti, e_dhenee);
		}
		
		return bishti;
		
	}
	
	//fshirja e nyjes ne fillim
	
	struct nyjateke *FshirjaENyjesSePare(struct nyjateke* bishti){
		
		if(bishti==NULL) {
		return bishti;
		}
		
		if(bishti->tjetri==bishti){
			free(bishti);
			bishti=NULL;
			return bishti;
		}
		struct nyjateke* tmp=bishti->tjetri;
		
		bishti->tjetri=tmp->tjetri;
		free(tmp);
		tmp=NULL;
		
		return bishti;
	}
	
	//fshirja e nyjes ne fund 
	struct nyjateke *FshirjaENyjesSeFundit(struct nyjateke* bishti){
		
		if(bishti==NULL) {
		return bishti;
		}
		
		if(bishti->tjetri==bishti){
			free(bishti);
			bishti=NULL;
			return bishti;
		}
		struct nyjateke* tmp=bishti->tjetri;
		
		while(tmp->tjetri!=bishti){
			tmp=tmp->tjetri;
		}
		tmp->tjetri=bishti->tjetri;
		free(bishti);
		bishti=tmp;
		
		
		return bishti;
	}
	//fshirja e nyjes me pozicion
		struct nyjateke *FshirjaENyjesMePozicion(struct nyjateke* bishti,int pozicioni){
		
		if(bishti==NULL) {
		return bishti;
		}
		
		if(bishti->tjetri==bishti){
			free(bishti);
			bishti=NULL;
			return bishti;
		}
		struct nyjateke* tmp=bishti->tjetri;
		
		while(pozicioni>2){
			tmp=tmp->tjetri;
			pozicioni--;
		}
		
		struct nyjateke* tmp2=tmp->tjetri;
		tmp->tjetri=tmp2->tjetri;
		
		if(tmp2==bishti){
			bishti=tmp;
		}
		free(tmp2);
		tmp2=NULL;
		
		
		return bishti;
	}
	
	//numerimi i nyjeve 
	void Numerimi(struct nyjateke* bishti){
		struct nyjateke* sh=bishti->tjetri;
		int numri=0;
		
		if(bishti==NULL){
			printf("\nNe liste ka 0 nyje");
		}
		
		if(sh==bishti){
			printf("\nKa 1 nyje ne liste!");
		}
		
		else{
		
		while(sh!=bishti){
			numri++;
			sh=sh->tjetri;
		}
		numri++;
		printf("\nNe liste ka %d nyje!",numri);
	
	}
	
	}
	
		//kerkimi i elementit
	
	int Kerkimi(struct nyjateke *bishti,int elementi){
		
		struct nyjateke* tmp=bishti->tjetri;
		int indeksi=0;
		
		if(bishti==NULL){
			return -2;
		}
		
		do{	if(tmp->e_dhena==elementi){
			return indeksi;
		}
		indeksi++;
		tmp=tmp->tjetri;
		
		}while(tmp!=bishti->tjetri);
		
		return -1;
	}
		
	
	//printon nyje
	void printi(struct nyjateke *bishti){
		if(bishti==NULL){
			printf("Nuk ka nyje ne liste!");
		}
		else{
		struct nyjateke*p=bishti->tjetri;
		
		do{
			printf("%d \t",p->e_dhena);
			p=p->tjetri;
		}while(p!=bishti->tjetri);
	}
		
	}
	
	int main (void){
		
		int v=40;
		int i,elementi;
		
		struct nyjateke*bishti=NULL;
	
		bishti=KrijimiIListesRrethore(v);
		
		bishti=ShtimNeFillim( bishti, v+1);
		
		bishti=ShtimNeFund(bishti, v+2);
		
		bishti=ShtoPasPozicionit(bishti, v+3, 2);
		
		printf("Vendos elementin per kerkim!");
		scanf("%d",&elementi);
		
		i=Kerkimi(bishti,elementi);
		
		if(i>=0)
		printf("Elementi %d gjendet ne liste ne pozicionin %d!\n",elementi,i+1);
		else if(i==-2)
		printf("Lista eshte boshe!\n");
		else 
		printf("Nuk u gjet elementi!\n");
			
	//	bishti=KrijimiINjeListeTeTere(bishti);
		
		printf("Lista e krijuar eshte: ");
		
		printi(bishti);
		
		bishti=FshirjaENyjesSePare(bishti);
		
		printf("\nLista pas fshrirjes se nyjes se pare eshte: ");
		
		printi(bishti);
		
		bishti=FshirjaENyjesSeFundit(bishti);
		
		printf("\nLista pas fshirjes se nyjes se fundit eshte: ");
		
		printi(bishti);
		
		bishti=FshirjaENyjesMePozicion( bishti,2);
		
		printf("\nLista pas fshirjes se nyjes me pozicion 2 eshte: ");
		
		printi(bishti);
		
		Numerimi( bishti);

		return 0;
		
	}
