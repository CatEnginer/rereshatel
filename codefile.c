// <Решатель 3000-универсальный><Лето 2017><ЯП-С>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "./physicf.c"
#include "./algebraf.c"
#include "./lessons.c"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>






//здесь царство функций!



//здесь покоятся переменные-обыкновенные
int choosescience;
int choosefunc, choosethm;




 



//здесь функции с выбором темы
int physic(){
    


	printf("Что будем решать ?\n");
		printf("1.Плотность\n");
		printf("2.Сила тяжести\n");
		printf("3.Сила Архимеда\n");
		printf("4.Работа\n");
		printf("5.Мощность\n");
		printf("6.Кинетическая энергия\n");
		printf("7.Потенциальная энергия\n");
			scanf("%d", &choosethm);
			switch( choosethm ){
				case 1:
					phc1();
				break;
				case 2:
					phc2();
				break;
				case 3:
					phc3();
				break;
				case 4:
					phc4();
				break;
				case 5:
					phc5();
				break;
				case 6:
					phc6();
				break;
				case 7:
					phc7();
				break;
			}
			return 0;
}



int algebra(){
	printf("Ну что ж,вперед к алгебре !\n");
	printf("Что решаем ?\n");
	printf("1.ФСУ\n");
	printf("2.Ждите...\n");
	scanf("%d", &chsal);
	if(chsal == 1)
	{
	printf("Какую формулу ?\n");
	printf("1.Разность квадратов\n");
	printf("2.Квадрат разности\n");
	printf("3.Квадрат суммы\n");
	printf("4.Куб суммы\n");
	printf("5.Куб разности\n");
	printf("6.Сумма кубов\n");
	printf("7.Разность кубов\n");
	scanf("%d", &chsalgeb);
	switch( chsalgeb ){
		case 1:
		alg1();
		break;
	
		case 2:
		alg2();
		break;
	
		case 3:
		alg3();
		break;
		
		case 4:
		alg4();
		break;
		
		
		case 5:
		alg5();
		break;
		
		case 6:
		alg6();
		break;
		
		case 7:
		alg7();
        break; 
         	
		default:
		printf("Проект опенсосрс сам добавь:)");
		break;
	
	}
	}
	else if(chsal == 2)
	{
			printf("Скоро добавим !");
	}
	return 0;
}







int kakulator(void)
{
    float a, b;
    char oper;
    printf ("Ваш пример...\n");
    scanf ("%f %c %f", &a, &oper, &b);
 
if (b == 0)
		printf ("Ha 0 делить нельзя\n");
	else if ( oper == '+')
		printf ("%.2f\n", a + b);
	else if ( oper == '-')
        printf ("%.2f\n", a - b);
	else if ( oper == '*')
        printf ("%.2f\n", a * b);
	else if ( oper == '/')
        printf ("%.2f\n", a / b);
	return 0;
}








//здесь запуск программы!
int main()
{


	printf("Привет! Я калькулятор-учебник по техническим предметам...\n");
	printf("Выбери:\n 1.Калькулятор \n 2.Учебник\n 3.Обычный калькулятор\n");
		scanf("%d", &choosefunc);
		if(choosefunc==1){
	printf("Я могу посчитать много чего.Выбери:\n");      //здесь юзерверь выбирает,что ему необходимо решить... 
		printf("1.Физика\n");
		printf("2.Алгебра\n");
		scanf("%d", &choosescience);
		switch( choosescience )
{   //предоставим ему выбор...
			case 1:
				physic(); //выведем выбор темы в отдельные функции
			break;
			case 2:
				algebra();
			break;	
			default:
				printf("Неправильно введены данные!");
			break;
}					
}
else if ( choosefunc == 2 ){
		lessons();
}

else
{
	kakulator();
	
	return 0;
	
	}



}
















