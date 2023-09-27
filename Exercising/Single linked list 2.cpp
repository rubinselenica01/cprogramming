#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
//Shtimi i nyjeve te reja duke ulur kompleksitetin e kohes.

		struct nyje{
			int data;
			struct nyje *link;
		};
		
		struct nyje* shto_ne_fund(struct nyje*shetites,int data){
			
			struct nyje*temporar=(struct nyje*)malloc(sizeof(struct nyje));
			temporar->data=data;
			temporar->link=NULL;
			
			shetites->link=temporar;
			return temporar;
			// ne funksion krijohet nje nyje e re duke alokuar memorie tek pointeri temporar
			//pointerit shetites i caktohet adresa e pointerit temporar
		}
		
		
		struct nyje* ReverseListaELidhur(struct nyje*koka){
			
			struct nyje* tjetri=NULL;
			struct nyje* paraardhesi=NULL;
			
			while(koka!=NULL){
				
				tjetri=koka->link;   //1.I jep 1 pointeri adresen e nyjes pasardhese.
				koka->link=paraardhesi;//2.I cakton vlere pjeses link.
				paraardhesi=koka;		//3. Ruan adresen e kokes tek paraardhesi.
				koka=tjetri;			//4.Koka merr adresen e tjetrit;
			}
			koka=paraardhesi;   //Koka merr adresen e te fundit, e cila tani eshte kthyer e para
			return koka;	
		}
		//fshirja e nyjes se pare te listes se lidhur duke perdorur funksionin free()
		struct nyje* FshirjaENyjesSePare(struct nyje*koka){
				if(koka==NULL){
					printf("Listes nuk mundet t'i hiqet elementi i pare sepse eshte boshe!");
				}
				else{
						struct nyje* ptr=koka;
						koka=koka->link;
						free(ptr);
						ptr=NULL;
				}
				return koka;
			
		}
		void FshirjaENyjesSeFundit(struct nyje*koka){//duke perdorur 2 pointera shetites
			if(koka==NULL){
				printf("Lista e lidhur eshte bosh!");
			}
			else if(koka->link==NULL){
				free(koka);
				koka=NULL;
			}
			else{
			struct nyje* temp1=koka;
			struct nyje* temp2=koka;
			while(temp1->link!=NULL){
				temp2=temp1;
				temp1=temp1->link;
			}
			temp2->link=NULL;
			free(temp1);
			temp1=NULL;
		}	
		}
		
		void FshirjaENyjesSeFundit2(struct nyje*koka){ //duke perdorur vetem 1 pointer shetites
			if(koka==NULL){
				printf("Lista e lidhur eshte aktualisht bosh!");
			}
			else if(koka->link==NULL){
				free(koka);
				koka=NULL;
			}
			else{
				struct nyje*temp1=koka;
				while(temp1->link->link!=NULL){
					temp1=temp1->link;
				}
				free(temp1->link);
				temp1->link=NULL;
						}
		}
		
		void FshirjaENyjesMePozicion(struct nyje**koka,int pozicioni){
			struct nyje *ptr=*koka;
			struct nyje *ptr1=*koka;
			
			if(*koka==NULL){
				printf("Lista eshte boshe!");
			}
			else if(pozicioni==1){
				*koka=ptr->link;
				free(ptr);
				ptr=NULL;
			}
			else{
			while(pozicioni!=1){
				ptr1=ptr;
				ptr=ptr->link;
				pozicioni--;
			}
			ptr1->link=ptr->link;
			free(ptr);
			ptr=NULL;
		}
		}
		
		struct nyje* FshirjeEGjitheListes(struct nyje*koka){
			struct nyje*ptr=koka;
			
			while(ptr!=NULL){
				ptr=ptr->link;
				free(koka);
				koka=ptr;
			}
			return koka;
		}
		
		void rirenditje(struct nyje*koka){ //ndryshon vendet e cifteve 1-2,3-4...me njeri tjetrin.
			struct nyje*p,*q;
			int temp;
			if(!koka||!koka->link) return;
			p=koka; 
			q=koka->link;
			while(q){
				temp=p->data;
				p->data=q->data;
				q->data=temp;
				p=q->link;
				q=p?p->link:0;
			}
		}
		//vendosje e nje nyje me element ne rendin rrites, duke marre parasysh se lista eshte e renditur
		struct nyje*Vendosje(struct nyje* koka,int data){
			struct nyje *temp;
			struct nyje* ERe= (struct nyje*)malloc(sizeof(struct nyje));
			ERe->data=data;
			ERe->link=NULL;
			
			int celes=data;
			
			if((koka==NULL)||(celes<koka->data)){
				ERe->link=koka;
				koka=ERe;
			}
			
			else{
				temp=koka;
				while((temp->link!=NULL)&&(temp->link->data<celes)){
					temp=temp->link;
				}
				ERe->link=temp->link;
				temp->link=ERe;
			}
			return koka;
		}
		
		int main(void){
			
			struct nyje*koka=(struct nyje*)malloc(sizeof(struct nyje));
			koka->data=56;
			koka->link=NULL;
			
			struct nyje *shetites=koka;
			
			shetites=shto_ne_fund(shetites,45);
			shetites=shto_ne_fund(shetites,54);
			shetites=shto_ne_fund(shetites,454);
			shetites=shto_ne_fund(shetites,455);
			shetites=shto_ne_fund(shetites,4455);
			shetites=shto_ne_fund(shetites,4455);
			
			shetites=koka;

			while(shetites!=NULL){
				printf("%d\t",shetites->data);
				shetites=shetites->link;
			}
			
			int count=0;
			
			shetites=koka;
			
			while(shetites!=NULL){
				count++;
				shetites=shetites->link;
			}
			
			printf("\nLista e lidhur ka %d nyje!\n",count);
			
			koka=FshirjaENyjesSePare(koka);
			
			shetites=koka;
			
			while(shetites!=NULL){
				printf("%d\t",shetites->data);
				shetites=shetites->link;
			}
			
			count=0;
			shetites=koka;
			
			while(shetites!=NULL){
				count++;
				shetites=shetites->link;
			}
			
			printf("\nLista e lidhur pas fshirjes se nyjes se pare ka %d nyje!\n",count);
			
			
			FshirjaENyjesSeFundit(koka);
			
			shetites=koka;
			
			while(shetites!=NULL){
				printf("%d\t",shetites->data);
				shetites=shetites->link;
			}
			
			count=0;
			shetites=koka;
			
			while(shetites!=NULL){
				count++;
				shetites=shetites->link;
			}
			
			printf("\nLista e lidhur pas fshirjes se nyjes se fundit ka %d nyje!\n",count);
			
			FshirjaENyjesSeFundit2(koka);
			
			shetites=koka;
			
			while(shetites!=NULL){
				printf("%d\t",shetites->data);
				shetites=shetites->link;
			}
			
			count=0;
			shetites=koka;
			
			while(shetites!=NULL){
				count++;
				shetites=shetites->link;
			}
			
			printf("\nLista e lidhur pas fshirjes se nyjes se fundit perseri ka %d nyje!",count);
			
			
			int pozicioni;
			printf("\nVendos pozicionin e nyjes qe doni te fshihet!");
			scanf("%d",&pozicioni);
			
			FshirjaENyjesMePozicion(&koka,pozicioni);
			
			shetites=koka;
			
			while(shetites!=NULL){
				printf("%d\t",shetites->data);
				shetites=shetites->link;
			}
			
			count=0;
			shetites=koka;
			
			while(shetites!=NULL){
				count++;
				shetites=shetites->link;
			}
			
			printf("\nLista e lidhur pas fshirjes se nyjes se fundit perseri ka %d nyje!",count);
			
			koka=FshirjeEGjitheListes(koka);
			if(koka==NULL){
				printf("\nLista u fshi me sukses!");
			}
			return 0;
		}
