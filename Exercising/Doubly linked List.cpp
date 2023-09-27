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

//vendosje e nyjes ne fillim te listes
struct nyja* VendosjeNeFillimNelisteDyshe(struct nyja*koka,int data){
	struct nyja* temp=(struct nyja*)malloc(sizeof(struct nyja));
	
	temp->para=NULL;
	temp->e_dhena=data;
	temp->tjetri=NULL;
	
	temp->tjetri=koka;
	koka->para=temp;
	
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
};

//vendosje e nyjes pas nje pozicioni te cakuar 

struct nyja* VendosjePasNjePozicioniNeListeDyshe(struct nyja* koka,int pozicioni, int data){
	
	struct nyja* NyjeERe=NULL;
	struct nyja* sh1=koka;
	struct nyja* sh2=NULL;
	
	NyjeERe=VendosjeNeListeDysheBoshe(NyjeERe,data);
	
	while(pozicioni!=1){
		sh1=sh1->tjetri;
		pozicioni--;
	}
	if(sh1->tjetri==NULL){
		sh1->tjetri=NyjeERe;
		NyjeERe->para=sh1;
	}
	else{
	sh2=sh1->tjetri;
	sh1->tjetri=NyjeERe;
	sh2->para=NyjeERe;
	NyjeERe->tjetri=sh2;
	NyjeERe->para=sh1;
}
	
	return koka;
	
}

//vendosja e nyjes para nje pozicioni te caktuar
struct nyja* VendosjeParaNjePozicioniNeListeDyshe(struct nyja* koka,int pozicioni,int data){
	
	struct nyja* NyjeERe=NULL;
	struct nyja* sh1=koka;
	struct nyja* sh2=NULL;
	
	NyjeERe=VendosjeNeListeDysheBoshe(NyjeERe,data);
	
	while(pozicioni>2){
		sh1=sh1->tjetri;
		pozicioni--;
	}	
	
	if(pozicioni==1){
		koka=VendosjeNeListeDysheBoshe(koka,data);
		koka->tjetri=sh1;
		sh1->para=koka;
	}
	else{

	sh2=sh1->tjetri;
	sh1->tjetri=NyjeERe;
	sh2->para=NyjeERe;
	NyjeERe->tjetri=sh2;
	NyjeERe->para=sh1;
}

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

int main(){
	
	struct nyja*koka=NULL;
	struct nyja*shetites;
	int pozicioni=2;
	
	koka=VendosjeNeListeDysheBoshe(koka, 40);
 
	koka=VendosjeNeFillimNelisteDyshe(koka, 50);
	
	koka=VendosjeNeFundNeListeDyshe(koka, 70);
	
	koka=VendosjePasNjePozicioniNeListeDyshe(koka, 2, 35);
	
	koka=VendosjeParaNjePozicioniNeListeDyshe(koka, 1, 20);
	
	Printimi(koka);
	
	return 0;
}
