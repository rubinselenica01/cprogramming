#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

		struct prov{
			int a;
			struct prov *nyje;
		};
		
		void shtimi_i_nyjes_ne_fund(struct prov*koka,int data){ //shton nyje ne fund duke perdorur pointerin koka dhe ciklin shetites
			struct prov *ptr,*temp;
			
			ptr=koka;// i caktohet adresa e nyjes se pare pointerit shetites ptr
			
			temp=(struct prov*)malloc(sizeof(struct prov));
			temp->a=data;
			temp->nyje=NULL;
			
			while(ptr->nyje!=NULL){
					ptr=ptr->nyje;	
			}
			ptr->nyje=temp;//ptr i jepet adresa e nyjes se fundit
			 
		}
		
		void printimi_i_nyjeve(struct prov *koka){		//afishon datat e pointerave
			if(koka==NULL)printf("Lista e lidhur eshte boshe!");
			struct prov *ptr=NULL;
			ptr=koka;
			while(ptr!=NULL){
				printf("%d\t",ptr->a);
				ptr=ptr->nyje;
			}
			
		}
		
		void numerimi_i_nyjeve(struct prov *koka){ //numeron nyjet
			int count=0;
			if(koka==NULL)printf("Lista e lidhur eshte boshe!");
			struct prov *ptr=NULL;
			ptr=koka;
			while(ptr!=NULL){
				count++;
				ptr=ptr->nyje;
			}
			printf("\n%d nyje!",count);
		}
		
		struct prov* ShtoNyjeNeFillim(struct prov*koka,int data){ //shton nyje ne fillim
			struct prov* ptr=(struct prov*)malloc(sizeof(struct prov));
			ptr->a=data;
			ptr->nyje=NULL;
			
			ptr->nyje=koka;
			koka=ptr;
			return koka;
		}
		
		void ShtoNyjeNeFillim2(struct prov**koka,int data){ //shton nyje ne fillim metoda 2
			struct prov* ptr=(struct prov*)malloc(sizeof(struct prov));
			ptr->a=data;
			ptr->nyje=NULL;
			
			ptr->nyje=*koka;
			*koka=ptr;
		}
		
		//shtimi i nje nyje ne pozicion te caktuar
		//1. krijo nje nyje te re
		//2. cakton adresen e nyjes pasardhese tek pjesa e link
		//3. cakton adresen e nyjes qe duhet shtuar tek pjesa link e nyjes paraardhese
		void ShtoNyjeNePozicion(struct prov*koka,int data,int pozicion){
			struct prov* temp1=koka;
			struct prov* temp=(struct prov*)malloc(sizeof(struct prov));
			temp->a=data;
			temp->nyje=NULL;
			
			while(pozicion!=2){ //nese kemi nje liste me n nyje, dhe duhet te shtojme nyjen e re ne pozicionin e kerkuar 
				temp1=temp1->nyje;//atehere cikli while perseritet poz-2 here. 
				pozicion--;
			}
			temp->nyje=temp1->nyje;
			temp1->nyje=temp;
			
		}
		
		
		
		int main(){
			struct prov *koka=(struct prov*)malloc(sizeof(struct prov));
			koka->a=5;
			koka->nyje=NULL;
			
			struct prov *tjetri=(struct prov*)malloc(sizeof(struct prov));
			tjetri->a=6;
			tjetri->nyje=NULL;
			koka->nyje=tjetri;
			
			tjetri=(struct prov*)malloc(sizeof(struct prov));
			tjetri->a=7;
			tjetri->nyje=NULL;
			koka->nyje->nyje=tjetri;
		
			koka=ShtoNyjeNeFillim(koka,10);
			
			ShtoNyjeNeFillim2(&koka, 20);
			
			shtimi_i_nyjes_ne_fund(koka,8);
			
			ShtoNyjeNePozicion(koka,2000,5);
			
			printimi_i_nyjeve(koka);
			
			numerimi_i_nyjeve(koka);
			
			return 0;
			
		}
