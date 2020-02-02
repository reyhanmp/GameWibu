//File konsep

#include<stdio.h>
#include<string.h>  


void aturan(){
    int foo;
    printf("SELAMAT DATANG DI THE KERAMBIRS MUDA!\n\n");
	printf("==CARA MAIN==\n");
	printf("1. Kamu adalah seorang jomblo ambis yang berorientasi untuk mengumpulkan uang sebanyak-banyaknya\n");
	printf("2. Kamu harus menjaga agar dirimu tetap hidup dengan cara memenuhi segala macam kebutuhanmu\n");
	printf("3. Kamu memiliki sebuah status yang berisi: happiness, social, hygiene, food, health, dan money\n");
	printf("4. Setiap aktifitas yang kamu lakukan akan mempengaruhi statusmu\n");
	printf("5. Karaktermu akan 'mati' ketika status health = 0\n");
	printf("6. Kamu akan menang jika sebelum 'mati' kamu memenuhi minimal satu dari kriteria ini: \n");
	printf("  - Memperoleh uang lebih dari 100 Dollar \n");
	printf("  - Hidup bahagia dan banyak teman \n");
	
	printf("\n");
	
	printf("mengerti? (TEKAN ENTER UNTUK LANJUT)");
    scanf("%C",&foo);
	scanf("%C",&foo);
	printf("\n");
	return;
}

void batas(){
    printf("\n=====================================\n");
    return;
}

void aktivitas(){
	printf("KAMU MAU NGAPAIN? (pilih 1-5)\n");
	printf("1.MAKAN\n2.NONGKRONG\n3.KEGIATAN AKADEMIK\n4.HIBURAN\n5.KEGIATAN EKONOMI\n6.KEBUTUHAN BIOLOGIS\n\n");
	return;
}

void subaktivitas(int pilihan){
	if( pilihan==1){
		//1.makan
		printf("==MAKAN==\n1.MAKAN DI TEPI JALAN\n2.MAKAN DI RESTORAN MAHAL\n3.MAKAN IND*MIE\n4.MAKAN SALAD\n");
	}
	if( pilihan==2){
		//2.nongkrong
		printf("==NONGKRONG==\n1.NONGKRONG DI CAFE\n2.NONGKRONG DI PERPUS\n3.NONGKRONG DI TAMAN\n4.NONGKRONG BERSAMA BILLIE EYELID\n");
	}
	if( pilihan==3){
		//3.kegiatan akademik
		printf("==KEGIATAN AKADEMIK==\n1.BELAJAR SAMA TEMAN IMBA\n2.BELAJAR BERSAMA PACAR\n3.MEMBACA BUKU BRADY\n4.MENYOGOK DOSEN\n");
	}
	if( pilihan==4){
		//4.hiburan
		printf("==HIBURAN==\n1.BERMAIN GAME ONLINE\n2.BERMAIN KE KOSAN TEMAN\n3.BERMAIN KE KARNAVAL BERSAMA PACAR\n3.MENONTON ANIME BARU\n4.MENDENGAR MUSIK BILLIE EYELID\n");
	}
	if( pilihan==5){
		//5.kegiatan ekonomi
		printf("==KEGIATAN EKONOMI==\n1.DANUSAN DONAT\n2.MEMINTA DUIT KE ORTU\n3.BERJUDI\n4.KERJA MAGANG\n");
	}
	if( pilihan==6){
		//6.kebutuhan biologis
		printf("==KEBUTUHAN BIOLOGIS==\n1.KE TOILET\n2.MANDI\n3.TIDUR\n4.MENANGIS");
	}
	return;
}


int main(){
	//database status
	//indexing:  0happiness, 1social, 2hygiene, 3food, 4health, 5 money, 6 grades 
	int makan[4][7] = {{0,0,-1,3,-1,-1,0},
			   {3,0,0,2,0,-5,0},
			   {1,0,0,2,-1,-1,-1},
			   {-1,0,0,2,-1,0}};
	int nongkrong[4][7] = {{3,2,0,1,0,-3,-1},
			   {-1,-2,0,-1,0,0,2},
			   {3,1,-1,0,1,0,-1},
			   {5,1,0,-1,-1,-4,-1}};
	int akademik[4][7] = {{-1,0,0,0,-2,0,3},
			   {-1,-1,-1,0,-1,-1,-1},
			   {-1,-2,0,-1,-1,0,4},
			   {-1,0,0,-2,0,-6,5}};
	int hiburan[4][7] = {{3,2,-1,-1,-1,0,-1},
			   {2,1,-1,-1,-1,-1},
			   {3,3,-1,-1,-1,-4,-3},
			   {4,-1,-1,-1,-1,0,-2}};
	int ekonomi[4][7] = {{2,2,0,-2,-1,10,-1},
			   {3,0,0,0,0,15,0},
			   {-1,2,-1,-3,10,-2},
			   {1,2,0,-1,-1,10,2}};
	int biologis[4][7] = {{0,0,2,0,2,0,0},
			   {0,0,1,0,0,0,0},
			   {0,0,5,-1,0,0,-1},
			   {0,0,-1,0,0,0,1}}
	;
	
	//end database status
		
	
	int resp;
	int valid = 1;
	char nama[10];
	int respgender;
	
	printf("Welcome to GAME OF WIBU!!!\n");
	
	while(valid == 1){
		printf("Do you want to view the rules? :\n");
		printf("1. Yes\n2. No\n \n");
		scanf("%d", &resp);
		if (resp == 1)
		{
		    aturan();
		    valid = 0;
		}
		else if (resp == 2)
		{
		    valid = 0;
		}
		else
		{
		    printf("Input tidak valid!!!\n");
		}
    }

    printf("Sesi Pembuatan Karakter!!!\n");
    printf("Sape antum? : ");
    scanf("%s", &nama);
    printf("Jenis kelamin?\n1. Cowo\n2. Cewe\n3. Others \n");
    scanf("%d", &respgender);

    printf("Hello %s\n", &nama);
    printf("Selamat memulai kehidupan ambismu\n");
    batas();

	return 0;
}

