#include<stdio.h>
int main(){
    //Acc info
    printf("RDA Banking System\n");
    int ac1 = 100;
    int ac2 = 200;
    int ac3 = 300;
    int ac4 = 400;
    int ac5 = 500;
    int ac6 = 600;
    int ac7 = 700;
    int ac8 = 800;
    int ac9 = 900;
    int ac10 = 1000;
    //Process
    int accnum;
    printf("Enter your account number = ");
    scanf("%d",&accnum);
	
	while(accnum>10) {
        printf("Invalid account number!\n");
        printf("Enter you Account number again :");
        scanf("%d",&accnum);
    }
    //Acc 1
    int pass1 = 123;
    int p1;
    if(accnum == 1){
    	printf("Enter your password :");
    	scanf("%d",&p1);
    while(p1 != pass1){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p1);
	}
}
	if(p1 == pass1){
		printf("Access Granted\n");
		printf("Account holder name = Muhammad Younas\n");
        printf("Your Current balance is = %d\n",ac1);
        printf("1.Withdraw \n2.Deposit\n");
        int num;
        scanf("%d", &num);
        while (num>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num);
		}
        if (num == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash;
            scanf("%d",&cash);
            while (cash >100)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : " );
                scanf("%d",&cash);
            }
             if (cash <= 100)
            {
            int total = ac1 - cash;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total);
            }
            return 0;
        } else if (num == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash1;
            scanf("%d",&cash1);
            int total1 = ac1 + cash1;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total1);
            return 0;
        }
	}
    //Acc 2
    int pass2 = 1234;
    int p2;
    if(accnum == 2){
    	printf("Enter your password :");
    	scanf("%d",&p2);
    while(p2 != pass2){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p2);
	}
}
	if(p2 == pass2){
		printf("Access Granted\n");
		printf("Account holder name = Abdul Wahab\n");
        printf("Your Current balance is = %d\n",ac2);
        printf("1.Withdraw \n2.Deposit\n");

        int num2;
        scanf("%d", &num2);
        while (num2>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num2);
		}
        if (num2 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash2;
            scanf("%d",&cash2);
            while (cash2 > 200)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash2);
            }
            if (cash2 <= 200)
            {
                int total2 = ac2 - cash2;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total2);
            }
            return 0;
        } else if (num2 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash02;
            scanf("%d",&cash02);
            int total02 = ac2 + cash02;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total02);
            return 0;
        }
	}
    //Acc 3
    int pass3 = 12345;
    int p3;
    if(accnum == 3){
    	printf("Enter your password :");
    	scanf("%d",&p3);
    while(p3 != pass3){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p3);
	}
}
	if(p3 == pass3){
		printf("Access Granted\n");
		printf("Account holder name = Talha Wali\n");
        printf("Your Current balance is = %d\n",ac3);
        printf("1.Withdraw \n2.Deposit\n");
        int num3;
        scanf("%d", &num3);
        while (num3>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num3);
		}
        if (num3 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash3;
            scanf("%d",&cash3);
            while (cash3 > 300)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash3);
            }
            if (cash3 <= 300)
            {
                int total3 = ac3 - cash3;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total3);
            }
            return 0;
        } else if (num3 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash03;
            scanf("%d",&cash03);
            int total03 = ac3 + cash03;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total03);
            return 0;
        }
	}
    //Acc 4
    int pass4 = 123456;
    int p4;
    if(accnum == 4){
    	printf("Enter your password :");
    	scanf("%d",&p4);
    while(p4 != pass4){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p4);
	}
}
	if(p4 == pass4){
		printf("Access Granted\n");
		printf("Account holder name = Muzammil Ahmed\n");
        printf("Your Current balance is = %d\n",ac4);
        printf("1.Withdraw \n2.Deposit\n");

        int num4;
        scanf("%d", &num4);
        while (num4>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num4);
		}
        if (num4 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash4;
            scanf("%d",&cash4);
            while (cash4 >400)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash4);
            }
            if (cash4 <= 400)
            {
            int total4 = ac4 - cash4;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total4);
            }
            return 0;
        } else if (num4 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash04;
            scanf("%d",&cash04);
            int total04 = ac4 + cash04;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total04);
            return 0;
        }
	}
    //Acc 5
    int pass5 = 1234567;
    int p5;
    if(accnum == 5){
    	printf("Enter your password :");
    	scanf("%d",&p5);
    while(p5 != pass5){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p5);
	}
}
	if(p5 == pass5){
		printf("Access Granted\n");
		printf("Account holder name = Sufiyan Akhtar\n");
        printf("Your Current balance is = %d\n",ac5);
        printf("1.Withdraw \n2.Deposit\n");
        int num5;
        scanf("%d", &num5);
        while (num5>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num5);
		}
        if (num5 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash5;
            scanf("%d",&cash5);
            while (cash5 >500)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash5);
            }
            if (cash5 <= 500)
            {
                int total5 = ac5 - cash5;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total5);
            }
            return 0;
        } else if (num5 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash05;
            scanf("%d",&cash05);
            int total05 = ac5 + cash05;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total05);
            return 0;
        }
	}
    //Acc 6
    int pass6 = 12345678;
    int p6;
    if(accnum == 6){
    	printf("Enter your password :");
    	scanf("%d",&p6);
    while(p6 != pass6){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p6);
	}
}
	if(p6 == pass6){
		printf("Access Granted\n");
		printf("Account holder name = Hammad Ali\n");
        printf("Your Current balance is = %d\n",ac6);
        printf("1.Withdraw \n2.Deposit\n");

        int num6;
        scanf("%d", &num6);
        while (num6>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num6);
		}
        if (num6 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash6;
            scanf("%d",&cash6);
            while (cash6 > 600)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash6);
            }
            if (cash6 <= 600)
            {
            int total6 = ac6 - cash6;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = ");
            printf("%d",total6);
            }
            return 0;
        } else if (num6 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash06;
            scanf("%d",&cash06);
            int total06 = ac6 + cash06;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total06);
            return 0;
        }
	}
    //Acc 7
    int pass7 = 123456789;
    int p7;
    if(accnum == 7){
    	printf("Enter your password :");
    	scanf("%d",&p7);
    while(p7 != pass7){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p7);
	}
}
	if(p7 == pass7){
		printf("Access Granted\n");
		printf("Account holder name = Muhammad Faisal\n");
        printf("Your Current balance is = %d\n",ac7);
        printf("1.Withdraw \n2.Deposit\n");
        int num7;
        scanf("%d", &num7);
        while (num7>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num7);
		}
        if (num7 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash7;
            scanf("%d",&cash7);
            while (cash7 >700)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash7);
            }
            if (cash7 <= 700)
            {
            int total7 = ac7 - cash7;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total7);
            }
            return 0;
        } else if (num7 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash07;
            scanf("%d",&cash07);
            int total07 = ac7 + cash07;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total07);
            return 0;
        }
	}
    //Acc 8
    int pass8 = 1234567890;
    int p8;
    if(accnum == 8){
    	printf("Enter your password :");
    	scanf("%d",&p8);
    while(p8 != pass8){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p8);
	}
}
	if(p8 == pass8){
		printf("Access Granted\n");
		printf("Account holder name = Danial Ahmed\n");
        printf("Your Current balance is = %d\n",ac8);
        printf("1.Withdraw \n2.Deposit\n");

        int num8;
        scanf("%d", &num8);
        while (num8>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num8);
		}
        if (num8 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash8;
            scanf("%d",&cash8);
            while (cash8 >800)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash8);
            }
            if (cash8 <= 800)
            {
            int total8 = ac8 - cash8;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total8);
            }
            return 0;
        } else if (num8 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash08;
            scanf("%d",&cash08);
            int total08 = ac8 + cash08;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total08);
            return 0;
        }
	}
    //Acc 9
    int pass9 = 12345678910;
    int p9;
    if(accnum == 9){
    	printf("Enter your password :");
    	scanf("%d",&p9);
    while(p9 != pass9){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p9);
	}
}
	if(p9 == pass9){
		printf("Access Granted\n");
		printf("Account holder name = Aqib Shah\n");
        printf("Your Current balance is = %d",ac9);
        printf("1.Withdraw \n2.Deposit\n");
        int num9;
        scanf("%d", &num9);
        while (num9>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num9);
		}
        if (num9 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash9;
            scanf("%d",&cash9);
            while (cash9 >900)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash9);
            }
            if (cash9 <= 900)
            {
            int total9 = ac9 - cash9;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total9);
            }
            return 0;
        } else if (num9 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash09;
            scanf("%d",&cash09);
            int total09 = ac9 + cash09;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total09);
            printf("%d",total09);
            return 0;
        }
	}
    //Acc 10
    int pass10 = 1234567891011;
    int p10;
    if(accnum == 10){
    	printf("Enter your password :");
    	scanf("%d",&p10);
    while(p10 != pass10){
    	printf("Access denied\n");
    	printf("Try again :");
    	scanf("%d",&p10);
	}
}
	if(p10 == pass10){
		printf("Access Granted\n");
		printf("Account holder name = Hamza Khan\n");
        printf("Your Current balance is = %d\n",ac10);
        printf("1.Withdraw \n2.Deposit\n");

        int num10;
        scanf("%d", &num10);
        while (num10>2){
        	printf("Invalid Operation!\n");
        	printf("Try again :");
        	scanf("%d",&num10);
		}
        if (num10 == 1)
        {
            printf("Enter the amount to withdraw = ");
            int cash10;
            scanf("%d",&cash10);
            while (cash10 >1000)
            {
                printf("You don't have enough balance in your account to withdraw.\n");
                printf("Enter the amount again to withdraw : ");
                scanf("%d",&cash10);
            }
            if (cash10 <= 1000)
            {
            int total10 = ac10 - cash10;
            printf("Credit withdrawn successfully\n");
            printf("Your new balance is = %d",total10);
            }
            return 0;
        } else if (num10 == 2)
        {
            printf("Enter the amount to deposit = ");
            int cash010;
            scanf("%d",&cash010);
            int total010 = ac10 + cash010;
            printf("Credit deposited successfully\n");
            printf("Your new balance is = %d",total010);
            return 0;
	}
    return 0;
}
}
