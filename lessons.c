#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
int chooseless;
int chsalgeb;
int chsal, choosethm;

int lessons(){
	
	printf("Вас приветствует учебник \n");
	printf("Данный раздел содержит множество различных уроков\n");
	printf("Я могу показать много чего.Выбери:\n");      //здесь юзерверь выбирает,что ему необходимо решить... 
		printf("1.Физика\n");
		printf("2.Алгебра\n");
		printf("3.Геометрия\n");
		scanf("%d", &chooseless);
		switch( chooseless ){   //предоставим ему выбор...
			case 1:
				printf("Что будем узнавать ?\n");
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
					printf("Плот­ность ве­ще­ства – это от­но­ше­ние массы ве­ще­ства к за­ни­ма­е­мо­му им объ­ё­му\n. Обо­зна­ча­ет­ся плот­ность ма­лень­кой гре­че­ской бук­вой .\n");
					printf("Формула p(Читается,как Ро)=m:V\n");
				break;
				case 2:
					printf("Сила, с ко­то­рой тело дей­ству­ет на опору или рас­тя­ги­ва­ет под­вес, на­зы­ва­ет­ся весом тела.\n");
					printf("Формула:m * g(ускорение свободного падения)\n");
				break;
				case 3:
					printf("Сила с которой,жидкость или газ выталкивает погружонное тело - Архимедова сила\n");
					printf("Формула:p(Ро) * g(Ускорение св.падения) * V\n");
				break;
				case 4:
					printf("Работа,есть перемещение тела под действием прелогаемой силы\n");
					printf("Формула:Сила * расстояние\n");
				break;
				case 5:
					printf("Мощность,есть скорость выполнения работы\n");
					printf("Формула:Сила : время\n");
				break;
				case 6:
					printf("Кинетическая энергия:вид энергии использующейся при выполнении любых действий\n");
					printf("Формула: Масса : скорость в квадрате и разделенная на два\n");
				break;
				case 7:
					printf("Пoтенциальная энергия - энергия взаимодействия тел\n");
					printf("Формула: Произведение массы,силы,гр.постоянной\n");
				break;
			}
			break;
			case 2:
				printf("Какую формулу ?\n");
	printf("1.Квадрат суммы\n");
	printf("2.Квадрат разности\n");
	printf("3.Разность квадратов\n");
	printf("4.Куб суммы\n");
	printf("5.Куб разности\n");
	printf("6.Сумма кубов\n");
	printf("7.Разность кубов\n");
	scanf("%d", &chsalgeb);
	switch( chsalgeb ){
		case 1:
			printf("Квадрат суммы двух выражений равен квадрату первого выражения плюс удвоенное произведение первого выражения на второе плюс квадрат второго выражения.\n(a + b)2 = a2 + 2ab + b2");
		break;
	
		case 2:
		    printf("Квадрат разности двух выражений равен квадрату первого выражения минус удвоенное произведение первого выражения на второе плюс квадрат второго выражения.\n(a - b)2 = a2 - 2ab + b2\n");
		break;
	
		case 3:
			printf("Разность квадратов двух выражений равна произведению разности этих выражений и их суммы.a2 - b2 = (a -b)*(a+b)\n");
		break;
		
		case 4:
			printf(" Куб суммы двух выражений равен кубу первого выражения плюс утроенное произведение квадрата первого выражения на второе плюс утроенное произведение первого выражения на квадрат второго плюс куб второго выражения.\n(a + b)3 = a3 + 3a2b + 3ab2 + b3\n");
		break;
		
		case 5:
			printf("Куб разности двух выражений равен кубу первого выражения минус утроенное произведение квадрата первого выражения на второе плюс утроенное произведение первого выражения на квадрат второго минус куб второго выражения.\n(a - b)3 = a3 - 3a2b + 3ab2 - b3\n");
		break;
		
		case 6:
			printf("Сумма кубов двух выражений равна произведению суммы первого и второго выражения на неполный квадрат разности этих выражений.\n a3 + b3 = (a + b) (a2 - ab + b2)\n");
		break;
		
		case 7:
			printf("Разность кубов двух выражений равна произведению разности первого и второго выражения на неполный квадрат суммы этих выражений.\n a3 - b3 = (a - b) (a2 + ab + b2)");
        break; 
         	
		default:
		printf("Проект опенсосрс сам добавь:)");
		break;
	
	}
			break;	
			case 3:
				printf("Уроки геометрии\n");
			break;
			default:
				printf("Возможно добавим...\n");
			break;
}
		return 0;
}

