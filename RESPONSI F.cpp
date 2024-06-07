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
		Q->item[Q->rear]=data;
		++(Q->count);
		//printQueue(&antrean);
	}
}

void hapus(QUEUE *Q){
// TODO 2 //
	if(Q->count == 0){
		cout << "Antrean Kosong \n";
	}else{
		cout << "Menghapus " << Q->front <<"dari Antrean \n";
		//printQueue(&antrean);
	}
}

void printQueue(QUEUE *Q){
//TODO 3 //
	int i;
	for(i=0;i<4;i++){
		cout << Q->item[i] <<" ";
	}
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
// Insert pasien keempat //
	insert(&antrean,111);

// contoh
// printf("masukan xx\n");
// insert(&abcde, yy);
// printQueue(&12345);

return 0;
}