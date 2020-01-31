//File konsep

#include<stdio.h>
#include<string.h>


void aturan(){
    char foo;
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
	
	printf("mengerti?");
    scanf("%s",&foo);
	return;
}

int main(){
    int resp;
    int valid = 1;

    printf("Welcome to GAME OF WIBU!!!\n");
    
    


    while(valid == 1){
        printf("Do you want to view the rules? :\n");
        printf("1. Yes\n2. No\n");
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




    return 0;
}

