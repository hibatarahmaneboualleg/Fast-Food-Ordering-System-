#include<stdio.h>
#include<string.h>
int main()
{
	int show_menu,food_choice,order_exit,salad_size,pizza_size,tacos_size,students_senior,pizza_ingredients,tacos_ingredients,pizza_quantity,tacos_quantity,salad_quantity;
	float pizza_price,raw_tottal,tacos_price,salad_price,tottal_nodiscount,final_tottal;
	char code_promo[5];
	pizza_price = 0;
	tacos_price = 0;
	salad_price = 0;
	raw_tottal = 0;
	tacos_quantity = 0;
	pizza_quantity = 0;
	salad_quantity = 0;
	printf("good morning how we can help you?");
	printf("\n press 1 to show menu \n");
	scanf(" %d",&show_menu);
	switch(show_menu) {
	case 1: {
		printf("\n type 1 to order \n type 2 to show the bill \n");
		scanf("%d",&order_exit);
		while(order_exit != 1 && order_exit != 2) {
			printf("\n please enter a valid number : ");
			scanf("%d",&order_exit);
		}
		while(order_exit < 2) {
			printf("\n menu: \n 1-Pizza \n 2-Tacos \n 3-Salad \n");
			if(order_exit<2) {
				{
					tacos_price = 0;
					tacos_quantity = 0;
					pizza_quantity = 0;
					salad_price = 0;
					pizza_price = 0;
					salad_quantity = 0;
					scanf("%d",&food_choice);
					switch(food_choice) {
					case 1:
						printf("choose a size :\n 1-M. 250 DA \n 2-L. 350 DA \n 3-XL. 400 DA \n");
						scanf("%d",&pizza_size);
						if(pizza_size == 1) {
							pizza_price = 250;
						}
						else if(pizza_size == 2) {
							pizza_price = 350;
						}
						else if(pizza_size == 3) {
							pizza_price = 400;
						}
						else {
							while(pizza_size != 1 && pizza_size != 2 && pizza_size != 3) {
								printf("this is not a valid choice try again ");
								scanf("%d",&pizza_size);
								if(pizza_size == 1) {
									pizza_price = 250;
								}
								else if(pizza_size == 2) {
									pizza_price = 350;
								}
								else if(pizza_size == 3) {
									pizza_price = 400;
								}
							}
						}
						printf("\n how many you want to order :");
						scanf("%d",&pizza_quantity);
						while(pizza_quantity <= 0) {
							printf("\n try again sorry:");
							scanf("%d",&pizza_quantity);
						}
						switch(pizza_size) {
						case 1:
							printf("you've ordered a %d Pizza size M \n",pizza_quantity);
							break;
						case 2:
							printf("you've ordered a %d Pizza size L \n",pizza_quantity);
							break;
						case 3:
							printf("you've ordered a %d Pizza size XL \n",pizza_quantity);
							break;
						}
						printf("\n which ingredients you want in : \n 1-cheese \n 2-tuna \n 3-beef \n 4-chiken \n");
						scanf("%d",&pizza_ingredients);
						while(pizza_ingredients != 1 && pizza_ingredients != 2 && pizza_ingredients != 3 && pizza_ingredients != 4) {
							printf("\n enter a valid choice : ");
							scanf("%d",&pizza_ingredients);
						}
						break;
					case 2:
						printf("choose a size :\n 1-M. 200 DA \n 2-L. 300 DA \n 3-XL. 350 DA \n");
						scanf("%d",&tacos_size);
						if(tacos_size == 1) {
							tacos_price = 200;
						}
						else if(tacos_size == 2) {
							tacos_price = 300;
						}
						else if(tacos_size == 3) {
							tacos_price = 350;
						}
						else {
							while(tacos_size != 1 && tacos_size != 2 && tacos_size != 3) {
								printf("this is not a valid choice try again ");
								scanf("%d",&tacos_size);
								if(tacos_size == 1) {
									tacos_price = 200;
								}
								else if(tacos_size == 2) {
									tacos_price = 300;
								}
								else if(tacos_size == 3) {
									tacos_price = 350;
								}
							}
						}
						printf("\n how many you want to order :");
						scanf("%d",&tacos_quantity);
						while(tacos_quantity <= 0) {
							printf("\n try again sorry:");
							scanf("%d",&tacos_quantity);
						}
						switch(tacos_size) {
						case 1:
							printf("you've ordered a %d Tacos size M \n",tacos_quantity);
							break;
						case 2:
							printf("you've ordered a %d Tacos size L \n",tacos_quantity);
							break;
						case 3:
							printf("you've ordered a %d Tacos size XL \n",tacos_quantity);
							break;
						}
						printf("\n which ingredients you want in : \n 1-cheese \n 2-tuna \n 3-beef \n 4-chiken \n");
						scanf("%d",&tacos_ingredients);
						while(tacos_ingredients != 1 && tacos_ingredients != 2 && tacos_ingredients != 3 && tacos_ingredients != 4) {
							printf("\n enter a valid choice : ");
							scanf("%d",&tacos_ingredients);
						}
						break;
					case 3:
						printf("choose a size :\n 1-M. 100 DA \n 2-L. 200 DA \n 3-XL. 250 DA \n");
						scanf("%d",&salad_size);
						if(salad_size == 1) {
							salad_price = 100;
						}
						else if(salad_size == 2) {
							salad_price = 200;
						}
						else if(salad_size == 3) {
							salad_price = 250;
						}
						else {
							while(salad_size != 1 && salad_size != 2 && salad_size != 3) {
								printf("this is not a valid choice try again ");
								scanf("%d",&salad_size);
								if(salad_size == 1) {
									salad_price = 100;
								}
								else if(salad_size == 2) {
									salad_price = 200;
								}
								else if(salad_size == 3) {
									salad_price = 250;
								}
							}
						}
						printf("\n how many you want to order :");
						scanf("%d",&salad_quantity);
						while(salad_quantity <= 0) {
							printf("\n try again sorry:");
							scanf("%d",&salad_quantity);
						}
						switch(salad_size) {
						case 1:
							printf("you've ordered a %d Salad size M \n",salad_quantity);
							break;
						case 2:
							printf("you've ordered a %d Salad size L \n",salad_quantity);
							break;
						case 3:
							printf("you've ordered a %d Salad size XL \n",salad_quantity);
							break;
						}
						break;
					default:
						printf("sorry this is not available");
						break;
					}
					raw_tottal += (tacos_price*tacos_quantity)+(salad_price*salad_quantity)+(pizza_price*pizza_quantity);
				}
			}
			else {
				printf("invalid choice");
			}
			printf("\n type 1 to order \n type 2 to show the bill \n");
			scanf("%d",&order_exit);
		}
	}
	printf("\n your total without tax : %f DA \n",raw_tottal);
	printf("\n the tax is : 19%  \n");
	tottal_nodiscount=raw_tottal+raw_tottal*0.19;
	printf("\n your total with tax : %f DA \n",tottal_nodiscount);
	printf("\n if you are senior type 1 if you are student type 2 if not press any other number \n");
	scanf("%d",&students_senior);
	printf("\n if you have discount code press 1 or press any other number to continue \n");
	scanf("%d",&order_exit);
	while(order_exit == 1) {
		printf("\n you have a discount code enter it here :\n");
		scanf("%s",&code_promo);
		if(strcmp(code_promo,"free")) {
			printf("code is invalid want to try again? if yes press 1 or press any other number to continue ");
			scanf("%d",&order_exit);
		}
		else {
			printf("the code is valid you have 10% ,discount");
			tottal_nodiscount=tottal_nodiscount-tottal_nodiscount*0.1;
			order_exit = 2;
		}
	}
	if(students_senior == 2) {
		final_tottal=tottal_nodiscount-tottal_nodiscount*0.3;
		printf("\n your total to pay is : %f DA \n",final_tottal);
	}
	else if(students_senior == 1) {
		final_tottal=tottal_nodiscount-tottal_nodiscount*0.25;
		printf("\n your total to pay is : %f DA \n",final_tottal);
	}
	else {
		printf("\n your total with tax : %f DA \n",tottal_nodiscount);
	}
	break;
	default:
		printf("invalid choice");
		break;
	}
}


