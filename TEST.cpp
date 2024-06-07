#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct{
int count;
int front;
int rear;
int item[4];
} QUEUE;
QUEUE antrean;

void inisialisasi(QUEUE *Q){
Q->count=0;
Q->front=0;
Q->rear=0;
}

int isEmpty(QUEUE *Q){
int hasil=0;
if (Q->count==0){
hasil=1;
}
return hasil;
}

int isFull(QUEUE *Q){
	int hasil=0;
	
	if (Q->count==4){
		hasil=1;
	}
	return hasil;
}

void insert(QUEUE *Q, int data){
// TODO 1 //
	if(Q->count == 4){
		cout << "Antrean Penuh \n";	
	}
	else{
		cout << "Masukan " << data << "\n";
		Q->item[Q->count]=data;
		Q->rear=(Q->rear+=1) % 4;
		++(Q->count);
		//cout << Q->count << "\n";
		
	}
}

void hapus(QUEUE *Q){
// TODO 2 //
	if(Q->count == 0){
		cout << "Antrean Kosong \n";
	}else{
		cout << "Menghapus " << Q->item[Q->front]<<" dari Antrean \n";
		
		Q->front = (Q->front+=1) % 4;
		
		//cout << Q->count << "\n";
	
	}
}

void printQueue(QUEUE *Q){
//TODO 3 //
	cout << "Isi Antrian : ";
	int i;
	for(i=Q->front;i<Q->count;i++){
		cout << Q->item[i] <<" ";
	}
	cout << endl;
}

int main(){
inisialisasi(&antrean);
// Insert pasien pertama //
	insert(&antrean,108);
	printQueue(&antrean);
// Insert pasien kedua //
	insert(&antrean,109);
	printQueue(&antrean);
// Insert pasien ketiga //
	insert(&antrean,110);
	printQueue(&antrean);
// Hapus pasien pertama //
	hapus(&antrean);
	printQueue(&antrean);
// Insert pasien keempat //
	insert(&antrean,111);
	printQueue(&antrean);
	
// Insert pasien kelima 
	insert(&antrean,112);
	printQueue(&antrean);
	
	hapus(&antrean);
	printQueue(&antrean);
// contoh
// printf("masukan xx\n");
// insert(&abcde, yy);
// printQueue(&12345);

return 0;
}