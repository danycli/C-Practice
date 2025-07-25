#include<stdio.h>
int main(){
	printf("---WELCOME TO TIC TAC TOE---\n");
	printf("\n");
	char ch;
	char ch1;
	int player=1;
	int move = 0;
	int num = 3;
	char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
	printf("   |   |      \n");
	printf(" %c | %c | %c    \n",a,b,c);
	printf("___|___|____  \n");
	printf("   |   |      \n");
	printf(" %c | %c | %c    \n",d,e,f);
	printf("___|___|____  \n");
	printf("   |   |      \n");
	printf(" %c | %c | %c    \n",g,h,i);
	printf("   |   |      \n");
	
	
	while(player == 1 || player == 2){
		if(move >=8){
			break;
		}
	
		if(player == 1){
			printf("Player 1(X) turn (1-9) :");
	 	scanf(" %c",&ch);
	 }
	 while(ch == ch1 || ch < '1' || ch > '9'){
	 	printf("Invalid Move!\n");
	 	printf("Try Again :");
	 	scanf(" %c",&ch);
	 }
		
			if(ch=='1'){
				a='X';
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",a,b,c);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",d,e,f);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",g,h,i);
				printf("   |   |      \n");
//				break;
			}else{
				if(ch == '2'){
				b='X';
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",a,b,c);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",d,e,f);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",g,h,i);
				printf("   |   |      \n");
					
				}else{
					if(ch == '3'){
					c='X';
					printf("   |   |      \n");
					printf(" %c | %c | %c    \n",a,b,c);
					printf("___|___|____  \n");
					printf("   |   |      \n");
					printf(" %c | %c | %c    \n",d,e,f);
					printf("___|___|____  \n");
					printf("   |   |      \n");
					printf(" %c | %c | %c    \n",g,h,i);
					printf("   |   |      \n");
				
					}else{
						if(ch == '4'){
							d='X';
							printf("   |   |      \n");
							printf(" %c | %c | %c    \n",a,b,c);
							printf("___|___|____  \n");
							printf("   |   |      \n");
							printf(" %c | %c | %c    \n",d,e,f);
							printf("___|___|____  \n");
							printf("   |   |      \n");
							printf(" %c | %c | %c    \n",g,h,i);
							printf("   |   |      \n");
							
						}else{
							if(ch == '5'){
								e='X';
								printf("   |   |      \n");
								printf(" %c | %c | %c    \n",a,b,c);
								printf("___|___|____  \n");
								printf("   |   |      \n");
								printf(" %c | %c | %c    \n",d,e,f);
								printf("___|___|____  \n");
								printf("   |   |      \n");
								printf(" %c | %c | %c    \n",g,h,i);
								printf("   |   |      \n");
								
							}else{
								if(ch == '6'){
									f='X';
									printf("   |   |      \n");
									printf(" %c | %c | %c    \n",a,b,c);
									printf("___|___|____  \n");
									printf("   |   |      \n");
									printf(" %c | %c | %c    \n",d,e,f);
									printf("___|___|____  \n");
									printf("   |   |      \n");
									printf(" %c | %c | %c    \n",g,h,i);
									printf("   |   |      \n");
									
								}else{
									if(ch == '7'){
										g='X';
										printf("   |   |      \n");
										printf(" %c | %c | %c    \n",a,b,c);
										printf("___|___|____  \n");
										printf("   |   |      \n");
										printf(" %c | %c | %c    \n",d,e,f);
										printf("___|___|____  \n");
										printf("   |   |      \n");
										printf(" %c | %c | %c    \n",g,h,i);
										printf("   |   |      \n");
										
									}else{
										if(ch == '8'){
											h='X';
											printf("   |   |      \n");
											printf(" %c | %c | %c    \n",a,b,c);
											printf("___|___|____  \n");
											printf("   |   |      \n");
											printf(" %c | %c | %c    \n",d,e,f);
											printf("___|___|____  \n");
											printf("   |   |      \n");
											printf(" %c | %c | %c    \n",g,h,i);
											printf("   |   |      \n");
											
										}else{
											if(ch == '9'){
												i='X';
												printf("   |   |      \n");
												printf(" %c | %c | %c    \n",a,b,c);
												printf("___|___|____  \n");
												printf("   |   |      \n");
												printf(" %c | %c | %c    \n",d,e,f);
												printf("___|___|____  \n");
												printf("   |   |      \n");
												printf(" %c | %c | %c    \n",g,h,i);
												printf("   |   |      \n");
											}
										}
									}
								}
							}
						}
					}
				}
				move ++;
			}
			if(a == b && a == c && b == c && a == 'X' && b == 'X' && c == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(d == e && e == f && f == d && d == 'X' && e == 'X' && f == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(g == h && h == i && i == g && g == 'X' && h == 'X' && i == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(a == d && d == g && g == a && a == 'X' && d == 'X' && g == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(b == e && e == h && h == b && b == 'X' && e == 'X' && h == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(c == f && f == i && i == c && c == 'X' && f == 'X' && i == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(a == e && e == i && i == a && a == 'X' && e == 'X' && i == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
	}else{
		if(c == e && e == g && g == c && c == 'X' && e == 'X' && g == 'X'){
		printf("---Player 1 Wins---");
		num = 2;
		break;
									}
		
		player ++;
		
		if(player == 2){
			if(move >=8){
			break;
		}
	
			printf("Player 2(0) turn (1-9) :");
			scanf(" %c",&ch1);
		}
		
		
		while(ch1 == ch || ch1 <'0' || ch1>'9'){
			printf("Invalid Move!\n");
			printf("Try Again :");
			scanf(" %c",&ch1);
		}
	 while(ch < '1' || ch > '9'){
	 	printf("Invalid Move!\n");
	 	printf("Try Again :");
	 	scanf(" %c",&ch);
	 }
		
			if(ch1=='1'){
				a='O';
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",a,b,c);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",d,e,f);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",g,h,i);
				printf("   |   |      \n");
//				break;
			}else{
				if(ch1 == '2'){
				b='O';
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",a,b,c);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",d,e,f);
				printf("___|___|____  \n");
				printf("   |   |      \n");
				printf(" %c | %c | %c    \n",g,h,i);
				printf("   |   |      \n");
					
				}else{
					if(ch1 == '3'){
					c='O';
					printf("   |   |      \n");
					printf(" %c | %c | %c    \n",a,b,c);
					printf("___|___|____  \n");
					printf("   |   |      \n");
					printf(" %c | %c | %c    \n",d,e,f);
					printf("___|___|____  \n");
					printf("   |   |      \n");
					printf(" %c | %c | %c    \n",g,h,i);
					printf("   |   |      \n");
				
					}else{
						if(ch1 == '4'){
							d='0';
							printf("   |   |      \n");
							printf(" %c | %c | %c    \n",a,b,c);
							printf("___|___|____  \n");
							printf("   |   |      \n");
							printf(" %c | %c | %c    \n",d,e,f);
							printf("___|___|____  \n");
							printf("   |   |      \n");
							printf(" %c | %c | %c    \n",g,h,i);
							printf("   |   |      \n");
							
						}else{
							if(ch1 == '5'){
								e='O';
								printf("   |   |      \n");
								printf(" %c | %c | %c    \n",a,b,c);
								printf("___|___|____  \n");
								printf("   |   |      \n");
								printf(" %c | %c | %c    \n",d,e,f);
								printf("___|___|____  \n");
								printf("   |   |      \n");
								printf(" %c | %c | %c    \n",g,h,i);
								printf("   |   |      \n");
								
							}else{
								if(ch1 == '6'){
									f='O';
									printf("   |   |      \n");
									printf(" %c | %c | %c    \n",a,b,c);
									printf("___|___|____  \n");
									printf("   |   |      \n");
									printf(" %c | %c | %c    \n",d,e,f);
									printf("___|___|____  \n");
									printf("   |   |      \n");
									printf(" %c | %c | %c    \n",g,h,i);
									printf("   |   |      \n");
									
								}else{
									if(ch1 == '7'){
										g='O';
										printf("   |   |      \n");
										printf(" %c | %c | %c    \n",a,b,c);
										printf("___|___|____  \n");
										printf("   |   |      \n");
										printf(" %c | %c | %c    \n",d,e,f);
										printf("___|___|____  \n");
										printf("   |   |      \n");
										printf(" %c | %c | %c    \n",g,h,i);
										printf("   |   |      \n");
										
									}else{
										if(ch1 == '8'){
											h='O';
											printf("   |   |      \n");
											printf(" %c | %c | %c    \n",a,b,c);
											printf("___|___|____  \n");
											printf("   |   |      \n");
											printf(" %c | %c | %c    \n",d,e,f);
											printf("___|___|____  \n");
											printf("   |   |      \n");
											printf(" %c | %c | %c    \n",g,h,i);
											printf("   |   |      \n");
											
										}else{
											if(ch1 == '9'){
												i='O';
												printf("   |   |      \n");
												printf(" %c | %c | %c    \n",a,b,c);
												printf("___|___|____  \n");
												printf("   |   |      \n");
												printf(" %c | %c | %c    \n",d,e,f);
												printf("___|___|____  \n");
												printf("   |   |      \n");
												printf(" %c | %c | %c    \n",g,h,i);
												printf("   |   |      \n");
											}
										}
									}
								}
							}
						}
					}
				}
				move ++;
			}
			player --;						
									
	if(a == b && a == c && b == c && a == 'O' && b == 'O' && c == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(d == e && e == f && f == d && d == 'O' && e == 'O' && f == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(g == h && h == i && i == g && g == 'O' && h == 'O' && i == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(a == d && d == g && g == a && a == 'O' && d == 'O' && g == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(b == e && e == h && h == b && b == 'O' && e == 'O' && h == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(c == f && f == i && i == c && c == 'O' && f == 'O' && i == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(a == e && e == i && i == a && a == 'O' && e == 'O' && i == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}else{
		if(c == e && e == g && g == c && c == 'O' && e == 'O' && g == 'O'){
		printf("---Player 2 Wins---");
		num = 4;
		break;
	}
							
									
									}
								}
							}
						}
					}
				}
			}
		}
									
									
								}
							}
						}
					}
				}
			}
		}
	
	if(num%2!=0){
		printf("It's a draw.....");
	}
		
}
