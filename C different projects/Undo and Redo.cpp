#include <stdio.h>
#include <stdlib.h>
				struct nyje{
					int vlera;
					struct nyje* tjetri;
					
				};
				
				const int maksimumiInyjeve=4;
				int nr=0;
				
				int EshtePlot(){
					if(nr==maksimumiInyjeve){
						return 1;
					}
					return 0;
				}
				
				void pushKryesori(struct nyje** iSipermi,int VleraPush){
					struct nyje* ptr=(struct nyje*)malloc(sizeof(struct nyje));
					
					if(EshtePlot()==1){
						printf("FULL!");
						return;
					}
					
					ptr->vlera=VleraPush;
					ptr->tjetri=NULL;
					
					ptr->tjetri=*iSipermi;
					*iSipermi=ptr;
					nr++;
				}
				
				int EshteBosh(){
					if(nr==0){
						return 1;
					}
					return 0;
				}
				
				int UNDO(struct nyje** iSipermi){
					struct nyje* zhdukes= *iSipermi;
					
					if(EshteBosh()==1){
						printf("Nuk ka cfare te fshihet!");
						exit(1);
					}
					
					int vlerarikthyer=zhdukes->vlera;
					*iSipermi=zhdukes->tjetri;
					free(zhdukes);
					zhdukes=NULL;
					nr--;
					return vlerarikthyer;
					
				}
				
				void pushRekordi(struct nyje** iSipermi,int VleraPush){
					struct nyje* ptr=(struct nyje*)malloc(sizeof(struct nyje));

					
					ptr->vlera=VleraPush;
					ptr->tjetri=NULL;
					
					ptr->tjetri=*iSipermi;
					*iSipermi=ptr;
					
				}
				
				void print(struct nyje * iSiperm){
					struct nyje* shetites=iSiperm;
					while(shetites){
						printf("%d\n",shetites->vlera);
						shetites=shetites->tjetri;
					}
				}
				
				void REDO(struct nyje**iSipermiIRekordit,struct nyje**iSipermiIKryesorit){
					
					if(EshtePlot()==1){
						printf("FULL!");
						return;
					}
					struct nyje* MarrNgaRekordi=*iSipermiIRekordit;
					int a=MarrNgaRekordi->vlera;
					*iSipermiIRekordit=MarrNgaRekordi->tjetri;
					free(MarrNgaRekordi);
					MarrNgaRekordi=NULL;
					
					pushKryesori(iSipermiIKryesorit,a);
				}
				
				int main(){
					struct nyje*iSipermiIKryesorit=NULL;	
					struct nyje*iSipermiIRekordit=NULL;
				
					int a;
				char pergjigje;
			do{
			
			printf("\n1.\tShto ne liste.\n2.\tCtrl+Z.\n3.\tCtrl+Y.\n4.\tPRINTO.\n5.\tEXIT");
			
			printf("\n\nZgjidhni:");
			int n;
			scanf("%d",&n);
			
				switch (n){
					case 1:
							system("cls");
							int data;
							printf("Vendos numrin! :");
							scanf("%d",&data);
							pushKryesori(&iSipermiIKryesorit, data);
							break;
					case 2:
							system("cls");
							a=UNDO(&iSipermiIKryesorit);
							pushRekordi(&iSipermiIRekordit,a);
							break;
					case 3:
							system("cls");
							REDO(&iSipermiIRekordit,&iSipermiIKryesorit);
							break;
					case 4:
							system("cls");
							print(iSipermiIKryesorit);
							break;
					case 5:
							exit(1);
					default:
							printf("Zgjidhni nje alternative!");
							break;
				}
					printf("\nDoni te kryeni perseri veprime me Menu?(P/J)");
					scanf("%c",&pergjigje);
					pergjigje=getchar();
					system("cls");
			}while((pergjigje=='P')||(pergjigje=='p'));
					
					
					return 0;
				}
				
				
