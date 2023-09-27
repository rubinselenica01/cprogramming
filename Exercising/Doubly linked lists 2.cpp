#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

struct nyja{//nyja e listes se lidhur dyshe
		struct nyja*para;
		int e_dhena;
		struct nyja*tjetri;
};

//vendosja e nyjes ne liste boshe

struct nyja* VendosjeNeListeDysheBoshe(struct nyja*koka,int data){
	
	struct nyja*temp=(struct nyja*)malloc(sizeof(struct nyja));
	
	temp->para=NULL;
	temp->e_dhena=data;
	temp->tjetri=NULL;
	
	koka=temp;
	
	return koka;	 
}

// vendosja e nyjes ne fund te listes 

struct nyja* VendosjeNeFundNeListeDyshe(struct nyja*koka,int data){
	
	struct nyja* temp=(struct nyja*)malloc(sizeof(struct nyja));
	
	temp->para=NULL;
	temp->e_dhena=data;
	temp->tjetri=NULL;
	
	struct nyja*tp=koka;
	
	while(tp->tjetri!=NULL){
		tp=tp->tjetri;
	}
	
	tp->tjetri=temp;
	temp->para=tp;

	return koka;
}
//krijimi i nje liste dyshe te lidhur 
struct nyja* KrijimiINjeListeTeTereTeLidhurDyshe(struct nyja*koka){
	int n,vlera,i;
	printf("Vendosni numrin e nyjeve qe doni te krijoni!");
	scanf("%d",&n);
	
	if(n==0){
		return koka;
	}
	printf("Vendos vleren e elementit 1: ");
	scanf("%d",&vlera);
	koka=VendosjeNeListeDysheBoshe(koka,vlera);
	
	for(i=1;i<n;i++){
		printf("Vendos vleren e elementit %d: ",i+1);
		scanf("%d",&vlera);
		koka=VendosjeNeFundNeListeDyshe(koka, vlera);
	}
	return koka;
}

//fshirja e nyjes se pare
struct nyja* FshirjaENyjesSePare(struct nyja* koka){
	
	struct nyja* shetites=koka;
	
	koka=koka->tjetri;
	koka->para=NULL;
	free(shetites);
	shetites=NULL;
	
	return koka;
	
}
//fshirja e nyjes se pare metoda 2

struct nyja* FshirjaENyjesSePare2(struct nyja* koka){
	
	koka=koka->tjetri;
	free(koka->para);
	koka->para=NULL;
	
	return koka;
	
}

//fshirja e elementit te fundit te listes dyshe

struct nyja *FshirjaENyjesSeFundit(struct nyja *koka){
	struct nyja*shetites=koka;
	struct nyja*shetites2;
	
	while(shetites->tjetri!=NULL){
		shetites=shetites->tjetri;
	}
	
	shetites2=shetites->para;
	shetites2->tjetri=NULL;
	free(shetites);
	shetites=NULL;
	
	
	return koka;
	
}

//fshirja e nyjes me pozicion

struct nyja* FshirjaENyjesMePozicion(struct nyja*koka, int pozicioni){
	
	struct nyja* sh1=koka;
	struct nyja* sh2;
	
	if(pozicioni==1){
		koka=FshirjaENyjesSePare2( koka);
		return koka;
	}
	
	while(pozicioni>1){
		sh1=sh1->tjetri;
		pozicioni--;
		
	}
	if(sh1->tjetri==NULL){
		koka=FshirjaENyjesSeFundit(koka);
	}
	
	else{
		sh2=sh1->para;
		sh2->tjetri=sh1->tjetri;
		sh1->tjetri->para=sh2;
		free(sh1);
		sh1=NULL;
	}
		return koka;
}
	
//reverse lista
struct nyja* ReverseListaDyshe(struct nyja* koka){
	struct nyja* sh1=koka;
	struct nyja* sh2=sh1->tjetri;
	
	sh1->tjetri=NULL;
	sh1->para=sh2;
	
	while(sh2!=NULL){
		sh2->para=sh2->tjetri;
		sh2->tjetri=sh1;
		sh1=sh2;
		sh2=sh2->para;
	}
	koka=sh1;
	
	return koka;
	
}
	


  	//printimi i te dhenave
  	void Printimi(struct nyja *koka){
  		struct nyja*shetites=koka;
  		
  		while(shetites!=NULL){
		printf("%d\t",shetites->e_dhena);
		shetites=shetites->tjetri;
	}
  		
	  }

int main (void){
	struct nyja* koka=NULL;
	struct nyja*shetites;
	
	koka=KrijimiINjeListeTeTereTeLidhurDyshe(koka);
	
	koka=FshirjaENyjesSePare2( koka);
	
	koka=FshirjaENyjesSeFundit(koka);
	
	koka=FshirjaENyjesMePozicion(koka, 2);
	
	koka=ReverseListaDyshe( koka);
	
	Printimi(koka);	
	
	
	return 0;
	
	
}
