// #include "stdio.h"
// #include "stdlib.h"
// //task1
// struct student {
//     char ism[30];
//     int age;
//     int price;
// };
// int main() {
//     int a;
//     printf("Talabalar sonini kiriting: ");
//     scanf("%d", &a);
//
//     struct student *students = (struct student*)malloc(a * sizeof(struct student));
//
//     for (int i = 0; i < a; i++) {
//         printf("Talabaning ismi:\n");
//         scanf("%s", students[i].ism);
//         printf("Talabaning yoshi:\n");
//         scanf("%d", &students[i].age);
//         printf("Talabaning bahosi:\n");
//         scanf("%d", &students[i].price);
//     }
//
//     FILE *s;
//     s = fopen("student.txt", "w");
//     if (s == NULL) {
//         printf("Fayl ochilmadi\n");
//         return 1;
//     }
//     printf("\n");
//     for (int i = 0; i < a; i++) {
//         fprintf(s, "ismi %s \nyoshi %d \nbahosi %d \n", students[i].ism, students[i].age, students[i].price);
//     }
//     fclose(s);
//
//     s = fopen("student.txt", "r");
//     if (s == NULL) {
//         printf("Faylni ochib bo'lmadi\n");
//         return 1;
//     }
//     char n;
//     while((n = fgetc(s)) != EOF) {
//         printf("%c", n);
//     }
//     fclose(s);
//     free(students);
// }

//  #include "stdio.h"
//  #include "stdlib.h"
// //task2
//  struct omborxona {
//      char name[30];
//      int miqdor;
//      float price;
//  };
//  int main() {
//      int a;
//      printf("Mahsulotlar sonini kiriting: ");
//      scanf("%d", &a);
//
//      struct omborxona *omborxona = (struct omborxona*)malloc(a * sizeof(struct omborxona));
//
//      for (int i = 0; i < a; i++) {
//          printf("Mahsulot nomi:\n");
//          scanf("%s", omborxona[i].name);
//          printf("Mahsulot miqdori:\n");
//          scanf("%d", &omborxona[i].miqdor);
//          printf("Mahsulot narxi:\n");
//          scanf("%f", &omborxona[i].price);
//      }
//
//      FILE *in;
//      in = fopen("inventory.txt", "w");
//      if (in == NULL) {
//          printf("Fayl ochilmadi\n");
//          return 1;
//      }
//      printf("\n");
//
//      for (int i = 0; i < a; i++) {
//          float umumiy_qiymat = omborxona[i].miqdor * omborxona[i].price;
//          fprintf(in, "Nomi: %s \nMiqdori: %d \nNarxi: %.2f \nUmumiy qiymati: %.2f\n\n",
//                  omborxona[i].name, omborxona[i].miqdor, omborxona[i].price, umumiy_qiymat);
//      }
//
//      fclose(in);
//      in = fopen("inventory.txt", "r");
//      if (in == NULL) {
//          printf("Faylni ochib bo'lmadi\n");
//          return 1;
//      }
//
//      char n;
//      while((n = fgetc(in)) != EOF) {
//          printf("%c", n);
//      }
//
//      fclose(in);
//      free(omborxona);
//  }

// #include "stdio.h"
// #include "stdlib.h"
// //task3
// struct Book {
//     char nom[50];
//     char muallif[50];
//     float narx;
//     int sotilgan_nusxalar;
// };
//
// int main() {
//     int a;
//     printf("Kitoblar sonini kiriting: ");
//     scanf("%d", &a);
//
//     struct Book *kitoblar = (struct Book*)malloc(a * sizeof(struct Book));
//
//     for (int i = 0; i < a; i++) {
//         printf("Kitob nomini kiriting: ");
//         scanf("%s", kitoblar[i].nom);
//         printf("Muallif nomini kiriting: ");
//         scanf("%s", kitoblar[i].muallif);
//         printf("Kitob narxini kiriting: ");
//         scanf("%f", &kitoblar[i].narx);
//         printf("Sotilgan nusxalar sonini kiriting: ");
//         scanf("%d", &kitoblar[i].sotilgan_nusxalar);
//     }
//
//     FILE *file = fopen("booksales.txt", "w");
//     if (file == NULL) {
//         printf("Fayl ochilmadi\n");
//         free(kitoblar);
//         return 1;
//     }
//
//     for (int i = 0; i < a; i++) {
//         fprintf(file, "Kitob nomi: %s\n", kitoblar[i].nom);
//         fprintf(file, "Muallif: %s\n", kitoblar[i].muallif);
//         fprintf(file, "Narxi: %.2f\n", kitoblar[i].narx);
//         fprintf(file, "Sotilgan nusxalar: %d\n\n", kitoblar[i].sotilgan_nusxalar);
//     }
//     fclose(file);
//
//     file = fopen("booksales.txt", "r");
//     if (file == NULL) {
//         printf("Faylni ochib bo'lmadi\n");
//         free(kitoblar);
//         return 1;
//     }
//
//     printf("\n100 dan ortiq sotilgan kitoblar:\n");
//     for (int i = 0; i < a; i++) {
//         if (kitoblar[i].sotilgan_nusxalar > 100) {
//             printf("Kitob nomi: %s\n", kitoblar[i].nom);
//             printf("Muallif: %s\n", kitoblar[i].muallif);
//             printf("Narxi: %.2f\n", kitoblar[i].narx);
//             printf("Sotilgan nusxalar: %d\n\n", kitoblar[i].sotilgan_nusxalar);
//         }
//     }
//
//     fclose(file);
//     free(kitoblar);
// }

//  #include "stdio.h"
//  #include "stdlib.h"
// //task4
//  struct Employee {
//      char nom[50];
//      float maosh;
//      int ish_soatlari;
//  };
//
//  int main() {
//      int xodim_soni;
//      printf("Xodimlar sonini kiriting: ");
//      scanf("%d", &xodim_soni);
//
//      struct Employee *xodimlar = (struct Employee*)malloc(xodim_soni * sizeof(struct Employee));
//
//      for (int i = 0; i < xodim_soni; i++) {
//          printf("Xodim ismini kiriting: ");
//          scanf("%s", xodimlar[i].nom);
//          printf("Xodim maoshini kiriting: ");
//          scanf("%f", &xodimlar[i].maosh);
//          printf("Xodim ish soatlarini kiriting: ");
//          scanf("%d", &xodimlar[i].ish_soatlari);
//
//          if (xodimlar[i].ish_soatlari >= 40) {
//              xodimlar[i].maosh += xodimlar[i].maosh * 0.10;
//          }
//      }
//
//      FILE *file = fopen("salaryreport.txt", "w");
//      if (file == NULL) {
//          printf("Fayl ochilmadi\n");
//          free(xodimlar);
//          return 1;
//      }
//      printf("\n");
//      for (int i = 0; i < xodim_soni; i++) {
//          fprintf(file, "Xodim ismi: %s\n", xodimlar[i].nom);
//          fprintf(file, "Yangilangan maosh: %.2f\n", xodimlar[i].maosh);
//          fprintf(file, "Ish soatlari: %d\n\n", xodimlar[i].ish_soatlari);
//      }
//
//      fclose(file);
//
//      file = fopen("salaryreport.txt", "r");
//      if (file == NULL) {
//          printf("Faylni ochib bo'lmadi\n");
//          free(xodimlar);
//          return 1;
//      }
//
//      char ch;
//      while ((ch = fgetc(file)) != EOF) {
//          printf("%c", ch);
//      }
//
//      fclose(file);
//      free(xodimlar);
//  }

// #include "stdio.h"
// #include "stdlib.h"
////task5
// struct Survey {
//     char ism[50];
//     int yosh;
//     int reyting;
// };
//
// int main() {
//     int respondent_soni;
//     printf("Necha javob beruvchi qatnashganini kiriting: ");
//     scanf("%d", &respondent_soni);
//
//     struct Survey *respondentlar = (struct Survey*)malloc(respondent_soni * sizeof(struct Survey));
//
//     for (int i = 0; i < respondent_soni; i++) {
//         printf("Javob beruvchining ismini kiriting: ");
//         scanf("%s", respondentlar[i].ism);
//         printf("Javob beruvchining yoshini kiriting: ");
//         scanf("%d", &respondentlar[i].yosh);
//         printf("Reytingini kiriting (1 dan 5 gacha): ");
//         scanf("%d", &respondentlar[i].reyting);
//
//         if (respondentlar[i].reyting < 1 || respondentlar[i].reyting > 5) {
//             printf("Noto'g'ri reyting kiritildi! 1 dan 5 gacha bo'lgan qiymat kiriting.\n");
//             i--;
//         }
//     }
//
//     FILE *file = fopen("survey.txt", "w");
//     if (file == NULL) {
//         printf("Fayl ochilmadi\n");
//         free(respondentlar);
//         return 1;
//     }
//
//     for (int i = 0; i < respondent_soni; i++) {
//         fprintf(file, "Ism: %s\n", respondentlar[i].ism);
//         fprintf(file, "Yosh: %d\n", respondentlar[i].yosh);
//         fprintf(file, "Reyting: %d\n\n", respondentlar[i].reyting);
//     }
//
//     fclose(file);
//
//     file = fopen("survey.txt", "r");
//     if (file == NULL) {
//         printf("Faylni ochib bo'lmadi\n");
//         free(respondentlar);
//         return 1;
//     }
//
//     int besh_reytingchilar_soni = 0;
//     for (int i = 0; i < respondent_soni; i++) {
//         if (respondentlar[i].reyting == 5) {
//             besh_reytingchilar_soni++;
//         }
//     }
//
//     printf("\n5 reyting bergan javob beruvchilar soni: %d\n", besh_reytingchilar_soni);
//     fclose(file);
//     free(respondentlar);
// }