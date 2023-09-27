#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma pack(1)

struct nyje{
	char emri[15];
	char mbiemri[15];
	char gjinia[9];
	int id;
	int mosha;
	char studimi[9];
	char VitiAkademik[3];
	char dega[15];
	char targa_e_automjetit[8];
	struct nyje* tjetri;
};

struct nyje* KrijimNyje(struct nyje *koka,char emri[],char mbiemri[],char gjinia[], int id, int mosha,char studimi[],char dega[],char VitiAkademik[],char targa_e_automjetit[]){
	
	struct nyje* tmp=(struct nyje*)malloc(sizeof(struct nyje));
	
	strcpy(tmp->emri,emri);
	strcpy(tmp->mbiemri,mbiemri);
	strcpy(tmp->gjinia,gjinia);
	tmp->id=id;
	tmp->mosha=mosha;
	strcpy(tmp->studimi,studimi);
	strcpy(tmp->dega,dega);
	strcpy(tmp->VitiAkademik,VitiAkademik);
	strcpy(tmp->targa_e_automjetit,targa_e_automjetit);
	tmp->tjetri=NULL;
	
	return tmp;
}

struct nyje* ShtoPasNyje(struct nyje* koka){
	
		char emri[15];
		printf("Emri: ");
		scanf("%s",emri);
	
		char mbiemri[15];
		printf("Mbiemri: ");
		scanf("%s",mbiemri);
	
		char gjinia[9];
		printf("Gjinia: ");
		scanf("%s",gjinia);
	
		int id;
		printf("ID: ");
		scanf("%d",&id);
	
		int mosha;
		printf("Mosha: ");
		scanf("%d",&mosha);
	
		char studimi[9];
		printf("Bachelor/Master: ");
		scanf("%s",studimi);
	
		char dega[15];
		printf("Dega: ");
		scanf("%s",dega);
	
		char VitiAkademik[3];
		printf("Viti akademik: ");
		scanf("%s",VitiAkademik);
	
		char targa_e_automjetit[8];
		printf("Targa e automjetit: ");
		scanf("%s",targa_e_automjetit);
	
	
	if(koka==NULL){
		koka=KrijimNyje(koka,emri,mbiemri,gjinia,id,mosha,studimi,dega,VitiAkademik,targa_e_automjetit);
	}
	
	else{
		struct nyje* shetites=koka;
		struct nyje* tmp=KrijimNyje(koka,emri,mbiemri,gjinia,id,mosha,studimi,dega,VitiAkademik,targa_e_automjetit);
		while(shetites->tjetri!=NULL){
			shetites=shetites->tjetri;
		}
		shetites->tjetri=tmp;
		
}
return koka;
}

void FshiNyjeSipasID(struct nyje** koka){
	
	if(*koka==NULL){
		printf("S'ka studente ne liste!\n");
		return;
	}
	
	int id;
	printf("Vendos ID e studentit qe deshironi te fshini!");
	scanf("%d",&id);
	
	struct nyje* shetites= *koka;
	struct nyje* shetites2;
	
	if(shetites->id==id){
		*koka=shetites->tjetri;
		free(shetites);
		printf("Studenti u fshi me sukses!\n");
		return;
	}
	
	while(shetites!=NULL && shetites->id!=id){
		shetites2=shetites;
		shetites=shetites->tjetri;
	}
	
	if(shetites==NULL){
		printf("Nuk u gjet student me kete id! :(\n");
		return;
	}
	
	shetites2->tjetri=shetites->tjetri;
	free(shetites);
	shetites=NULL;
	printf("Studenti u fshi me sukses!\n");
	
	
}

void FshiNyjeSipasEmritMbiemrit(struct nyje** koka){
	
	if(*koka==NULL){
		printf("S'ka studente ne liste!\n");
		return;
	}
	
	char emri1[15];
	char mbiemri1[15];
	printf("Vendos emrin e studentit qe doni te fshini!");
	scanf("%s",emri1);
	printf("Vendos mbiemrin e studentit qe doni te fshini!");
	scanf("%s",mbiemri1);
	
	struct nyje* shetites= *koka;
	struct nyje* shetites2;
	
	int a=strcmp(shetites->emri,emri1);
	int b=strcmp(shetites->mbiemri,mbiemri1);
	
	if((a+b)==0){
		*koka=shetites->tjetri;
		free(shetites);
		printf("Studenti u fshi me sukses!\n");
		return;
	}
	
	int c=1,d=1;
	
	while(shetites!=NULL && ((c+d)!=0)){
		 c=strcmp(shetites->emri,emri1);
		 d=strcmp(shetites->mbiemri,mbiemri1);
				shetites2=shetites;
				shetites=shetites->tjetri;
	}
	
	if(shetites==NULL){
		printf("Nuk u gjet student me kete emer dhe mbiemer! :(\n");
		return;
	}
	
	shetites2->tjetri=shetites->tjetri;
	free(shetites);
	shetites=NULL;
	printf("Studenti u fshi me sukses!\n");
	
	
}

void PrintimTek(struct nyje *shetites){
			printf("Emri: %s\n",shetites->emri);
			printf("Mbiemri: %s\n",shetites->mbiemri);
			printf("Gjinia: %s\n",shetites->gjinia);
			printf("ID: %d\n",shetites->id);
			printf("Mosha: %d vjec\n",shetites->mosha);
			printf("Bachelor/Master: %s\n",shetites->studimi);
			printf("Dega: %s\n",shetites->dega);
			printf("Viti akademik: %s\n",shetites->VitiAkademik);
			printf("Targa e automjetit: %s\n\n",shetites->targa_e_automjetit);
}

void AfishimSipasEmrit(struct nyje*koka){
	
	if(koka==NULL){
			printf("Lista e nxenesve eshte bosh!\n\n");
			return;
						}			
	struct nyje* shetites=koka;
	char emri1[15];
	printf("Vendosni emrin per kerkim:");
	scanf("%s",emri1);
	
	while(shetites!=NULL){
		int c=strcmp(shetites->emri,emri1);
		if(c==0){
			PrintimTek(shetites);
				
			}
			shetites=shetites->tjetri;	
		}
	
	
	}

void KerkimSipasEmritMbiemrit(struct nyje*koka){
	
	if(koka==NULL){
			printf("Lista e nxenesve eshte bosh!\n\n");
			return;
						}			
	struct nyje* shetites=koka;
	char emri1[15];
	printf("Vendosni emrin per kerkim:");
	scanf("%s",emri1);
	char mbiemri1[15];
	printf("Vendosni mbiemrin per kerkim:");
	scanf("%s",mbiemri1);
	
	while(shetites!=NULL){
		int c=strcmp(shetites->emri,emri1);
		int b=strcmp(shetites->mbiemri,mbiemri1);
		if((c+b)==0){
			PrintimTek(shetites);
				
			}
			shetites=shetites->tjetri;	
		}
	
	
	}
	
void KerkimSipasID(struct nyje*koka){
	
		if(koka==NULL){
					printf("Lista e nxenesve eshte bosh!\n\n");
					return;
								}
	int id;
	printf("Vendosni ID per kerkim:");
	scanf("%d",&id);					
	struct nyje* shetites=koka;

	while(shetites!=NULL){
		if(shetites->id==id){
				PrintimTek(shetites);
			}
			shetites=shetites->tjetri;
		}
	}
	
void KerkimSipasTarges(struct nyje*koka){
	
		if(koka==NULL){
					printf("Lista e nxenesve eshte bosh!\n\n");
					return;
								}
	char targa[8];
	printf("Vendosni ID per kerkim:");
	scanf("%s",&targa);					
	struct nyje* shetites=koka;

	while(shetites!=NULL){
		int c=strcmp(shetites->targa_e_automjetit,targa);
		if(c==0){
				PrintimTek(shetites);
			}
			shetites=shetites->tjetri;
		}
	}

void AfishimSipasGjinise(struct nyje*koka){
	if(koka==NULL){
			printf("Lista e nxenesve eshte bosh!\n\n");
			return;
					}
								
	struct nyje* shetites=koka;
	char gjinia[15];
	printf("Vendosni gjinine e nxenesve qe doni te afishoni:");
	scanf("%s",gjinia);
	printf("Studentet e gjinise : %s :\n",gjinia);
	
	while(shetites!=NULL){
		int c=strcmp(shetites->gjinia,gjinia);
		if(c==0){
			PrintimTek(shetites);
			}
			shetites=shetites->tjetri;	
		}
	
}

void AfishimSipasDeges(struct nyje* koka){
			if(koka==NULL){
					printf("Lista e nxenesve eshte bosh!\n\n");
					return;
								}
								
	struct nyje* shetites=koka;
	char dega[20];
	printf("Vendosni degen e nxenesve qe doni te afishoni:");
	scanf("%s",dega);
	printf("Studentet e deges : %s :\n",dega);
	
	while(shetites!=NULL){
		int c=strcmp(shetites->dega,dega);
		if(c==0){
			PrintimTek(shetites);
			}
			shetites=shetites->tjetri;	
		}
	}

	void AfishimSipasVititAkademik(struct nyje*koka){
	
		if(koka==NULL){
					printf("Lista e nxenesve eshte bosh!\n\n");
					return;
								}
	char VitiAkademik[3];
	printf("Vendosni vitin per kerkim:");
	scanf("%s",&VitiAkademik);					
	struct nyje* shetites=koka;

	while(shetites!=NULL){
		int c=strcmp(shetites->VitiAkademik,VitiAkademik);
		if(c==0){
				PrintimTek(shetites);
			}
			shetites=shetites->tjetri;
		}
	}

void PrintimNyjesh(struct nyje* koka){
	struct nyje* shetites=koka;
	
	if(shetites==NULL){
		printf("Nuk ka nxenes ne lise!\n");
		
	}
	else{
	
	printf("LISTA E STUDENTEVE:\n\n");
	while(shetites!=NULL){
		PrintimTek(shetites);
		shetites=shetites->tjetri;
	}
	}
}

int main (){
	
	struct nyje* koka=NULL;
	char pergjigje;
	do{
	
	printf("***************************************FAKULTETI I SHKENCAVE TE NATYRES***********************************************\n");
	int zgjedhja;
	printf("\t\t\t\t\t\tMIRE SE ERDHET!\nMENU:\n\n1.\tShto nxenes.\n2.\tKerko nxenes.\n3.\tAfisho nxenes.\n4.\tFshi nxenes.\n5.\tEXIT.\n\n");
	printf("Beni zgjedhjen tuaj:");
	scanf("%d",&zgjedhja);
	system("cls");
			
			switch(zgjedhja){
				case 1: 
						int nr;
						printf("***************************************FAKULTETI I SHKENCAVE TE NATYRES***********************************************\n");
						printf("Vendos numrin e studenteve:");
						scanf("%d",&nr);
	
	
						for(int i=1;i<=nr;i++){
										
								koka=ShtoPasNyje(koka);
													}
						break;
				case 2:
						printf("***************************************FAKULTETI I SHKENCAVE TE NATYRES***********************************************\n");
						printf("\n\n\n1.\tKerko sipas ID.\n2.\tKerko sipas emrit dhe mbiemrit.\n3.\tKerko sipas targes.\n\n");
						int nr1;
						printf("Vendosni zgjedhjen tuaj:");
						scanf("%d",&nr1);
								
								switch(nr1){
											
									case 1:
											system("cls");
											KerkimSipasID(koka);
											break;
									case 2:
											system("cls");
											KerkimSipasEmritMbiemrit(koka);
											break;
									case 3:
											system("cls");
											KerkimSipasTarges(koka);
											break;
									default:
											printf("Ju lutem zgjidhni nje alternative!\n");
											break;
								}
						break;
				case 3:
						printf("***************************************FAKULTETI I SHKENCAVE TE NATYRES***********************************************\n");
						printf("\n\n\n1.\tAfisho sipas emrit.\n2.\tAfisho sipas gjinise.\n3.\tAfisho sipas deges.\n4.\tAfisho sipas vitit akademik.\n5.\tAfisho te gjithe nxenesit.\n\n");
						int nr2;
						printf("Vendosni zgjedhjen tuaj:");
						scanf("%d",&nr2);
								
								switch(nr2){
											
									case 1:
											system("cls");
											AfishimSipasEmrit(koka);
											break;
									case 2:
											system("cls");
											AfishimSipasGjinise(koka);
											break;
									case 3:
											system("cls");
											AfishimSipasDeges(koka);
											break;
									case 4:
											system("cls");
											AfishimSipasVititAkademik(koka);
											break;	
									case 5:
											system("cls");
											PrintimNyjesh(koka);
											break;
									default:
											printf("Ju lutem zgjidhni nje alternative!\n");
											break;
								}
						break;
				case 4:
						printf("***************************************FAKULTETI I SHKENCAVE TE NATYRES***********************************************\n");
						printf("\n\n\n1.\tFshi nga lista sipas ID.\n2.\tFshi nga lista sipas emrit dhe mbiemrit.\n\n");
						int nr3;
						printf("Vendosni zgjedhjen tuaj:");
						scanf("%d",&nr3);
						
								switch (nr3){
									case 1:
											system("cls");
											FshiNyjeSipasID(&koka);
											break;
									case 2:
											system("cls");
											FshiNyjeSipasEmritMbiemrit(&koka);
											break;							
									default:
											printf("Ju lutem zgjidhni nje alternative!\n");
											break;
								}
						break;
				case 5:
						printf("\n\n\n\n\n\n\t\t\t\t\tFALEMINDERIT QE NA ZGJODHET NE!");
						exit(1);
						
				default: 
						printf("Ju lutem vendosni nje alternative!\n");
						break;
	
					}
					printf("Doni te kryeni perseri veprime me Menu?(P/J)");
					scanf("%c",&pergjigje);
					pergjigje=getchar();
					system("cls");
				}while(pergjigje=='P'||pergjigje=='p');

	printf("\n\n\n\n\n\n\t\t\t\t\tFALEMINDERIT QE NA ZGJODHET NE!");
	
	return 0;
}


