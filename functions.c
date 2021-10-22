#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <malloc.h>

#include "functions.h"




////////////////////////////////////////* �� �� ������ ������ *////////////////////////////////////////


double task_1(double x_, double a_, double  c_)
{
   return (sqrt(exp(x_) - pow(cos(pow(x_, 2) * pow(a_, 5)), 4)) + pow(atan(a_ - pow(x_, 5)), 4)) / (exp(1) * sqrt(abs(a_ + x_ * pow(c_, 4))));

}





double task_2(double t_)
{
   //������������� �� ������, ���� �������� �������� ������� ������ ����  
   if (t_ < 0)
   {
      printf("Time can't be less, than a zero");
      exit(EXIT_FAILURE);
   }

   return 3 * pow(t_, 2) - 6 * t_;
}




void task_3(double a_, double b_, double c_)
{

   //��������, �������� �� ������ ��������� ����������(�� ����� �� ����������� � ����)
   if (a_ == 0)
   {
      printf("Error! a < 0.");
      exit(EXIT_FAILURE);
   }

   //������������
   double D = (b_ * b_) - (4 * a_ * c_);

   //��� ������������� ������������� ������ ���
   if (D < 0)
      printf("D < 0. There are no roots.\n");
   else
   {
      if ((int)D > 0)
      {
         printf("%f\n", (-b_ + sqrt(D)) / (2 * a_));
         printf("%f\n", (-b_ - sqrt(D)) / (2 * a_));
      }
      else
         printf("%f\n", (-b_) / (2 * a_));
   }

}



void task_4()
{
   //�����(��������� ����� ������ �����������)
   int rate = 0;
   //����� �����������
   float time = 0;
   //��� ������
   int code = 0;

   printf("Enter the code\n");
   scanf_s("%d", &code);

   printf("Enter the time\n");
   scanf_s("%f", &time);

   switch (code)
   {
   case 48:
      rate = 15;
      break;
   case 44:
      rate = 18;
      break;
   case 46:
      rate = 13;
      break;
   case 45:
      rate = 11;
      break;
   default:
      break;
   }

   printf("Total cost is %f\n", (rate * time / 60));
}



void task_5()
{
   //����� n ���� �����, ���������� � n-��� �������
   int sum = 0;

   //������� ����� ��������
   int x = 0;

   for (int i = 1000; i < 10000; i++)
   {
      x = i;
      sum = 0;
      for (int j = 0; j < 4; j++)
      {
         sum += pow(x % 10, 4);
         x /= 10;
      }

      if (sum == i)
         printf_s("%d ", i);

   }
}

int task_6(char* binary, int n_)
{
   int i = 0;                              //������ �������� �������
   int decimal = 0;
   int j = n_ - 1;                         //������� ������, �� ������� ���������� ������� ������� �������

   while (i < n_)
   {
      decimal += binary[i] * pow(2, j);
      i++;
      j--;
   }

   return decimal;
}

void task_7()
{
   int a = 0;
   int b = 0;

   printf("Enter the length and the height of the matrix\n");
   scanf_s("%d %d", &b, &a);


   //�������� �������
   int** arr = (int**)malloc(b * sizeof(int**));

   //�������� ������������� ������
   if (!arr)
      exit(EXIT_FAILURE);

   for (int i = 0; i < b; ++i)
   {
      arr[i] = (int*)malloc(a * sizeof(int*));

      //� ����� ��������
      if (!arr[i])
         exit(EXIT_FAILURE);
   }



   //���������� ������� ������� �� -10 �� 10
   for (int i = 0; i < a; ++i)
   {
      for (int j = 0; j < b; ++j)
      {
         arr[i][j] = (rand() % 21) - 10;
      }
   }


   //����� ��������������� ������� ��� ����������� 
   for (int i = 0; i < a; ++i)
   {
      for (int j = 0; j < b; ++j)
      {
         printf("%4d", arr[i][j]);
      }
      printf("\n");
   }

   //��������� �� 3 � ������� ����� �� ���������������
   for (int i = 0; i < a; ++i)
   {
      for (int j = 0; j < b; ++j)
      {
         arr[i][j] = -3 * arr[i][j];
      }
   }

   //������� �����, ����� ���� ���� ��������
   printf("\n\n\n\n");

   //����� ���������� � �������
   for (int i = 0; i < a; ++i)
   {
      for (int j = 0; j < b; ++j)
      {
         printf("%4d", arr[i][j]);
      }
      printf("\n");
   }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////