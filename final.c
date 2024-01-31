#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void reverse(char string[]){
    int length = strlen(string);
    for(int i = length ; i >= 0 ; i--){
        printf("%c", string[i]);
    }
}

float addition(float number1, float number2){
    return number1 + number2;
}

int factorial(int number){
    if(number < 2){
        return 1;
    }
    else{
        return number * factorial(number - 1);
    }
}

int main(){

    system("cls");

    /*//Bir int pointer oluşturun ve 
    //bu pointer'ın değerini 5 olarak atayın. 
    //Daha sonra bu pointer'ın değerini 
    //kullanarak ekrana "Pointer Değeri: 5" 
    //yazdıran bir C programı yazın.
    
    
    int *ptr;
    int number = 5;
    ptr = &number;

    printf("Address of value --> %d\n", ptr);
    printf("Value --> %d", *ptr);*/

    /*//Kullanıcıdan bir kelime girişi yapmasını isteyen bir program yazın. 
    //Ardından bu kelimeyi tersten yazdıran bir fonksiyon oluşturun ve bu 
    //fonksiyonu kullanarak tersten yazılmış kelimeyi ekrana yazdırın.

    char string[20];
    scanf("%s", string);

    printf("You typed %s", string);

    printf("\nReverse ");
    reverse(string);*/

    /*//İki parametre alan bir toplama fonksiyonu yazın. 
    //Bu fonksiyon, iki sayıyı toplamalı ve sonucu geri döndürmelidir. 
    //Programınızda bu fonksiyonu kullanarak iki sayının toplamını ekrana yazdırın.

    float number1, number2;

    printf("Enter two number: ");
    scanf("%f %f", &number1, &number2);

    printf("%.2f", addition(number1, number2));*/

    /*//Faktöriyel hesaplayan bir recursive fonksiyon yazın. 
    //Kullanıcıdan bir sayı girişi alın ve bu sayının faktöriyelini hesaplamak için yazdığınız 
    //recursive fonksiyonu kullanarak sonucu ekrana yazdırın.
    

    int number;
    printf("Enter a integer number: ");
    scanf("%d", &number);

    printf("%d! = %d", number, factorial(number));*/

    /*
    //Bir dizi oluşturun ve bu diziyi kullanarak aşağıdaki görevleri yerine getiren bir program yazın:
    //Diziye 5 eleman okutun.
    //Dizinin elemanlarını küçükten büyüğe sıralayın.
    //Sıralanmış diziyi ekrana yazdırın.
    

    int arr[5];

    for(int i = 0 ; i < 5 ; i++){
        printf("Enter %d. elemen: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int temp;

    for(int i = 0 ; i < 5 ; i++){
        for(int j = i + 1 ; j < 5 ; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", arr[i]);
    }*/
    return 0;
}