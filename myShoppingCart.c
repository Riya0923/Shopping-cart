#include<stdio.h>
int n,app=100,ban=100,ora=100,gua=100,pap=100;
void menu();
void menu()
{
  printf("\nHere are the availability of items:-\n 1.Apple (Quantity=%d)\n 2.Banana (Quantity=%d)\n 3.Oranges (Quantity=%d)\n 4.Guava (Quantity=%d)\n 5.Papaya (Quantity=%d)\n",app,ban,ora,gua,pap);
    printf("Menu:\n1.Add to the cart\n2.Update the added item in the cart\n3.View all the items in the cart\n4.Delete item from the cart\n5.Empty the cart\n6.Exit\n\nPlease select any no. from the menu to move further: ");
    scanf("%d",&n);
}
void main()
{
	int update=0,apple=0,banana=0,oranges=0,guava=0,papaya=0,a=0,b=0,o=0,g=0,p=0,quan,num,no,q,id,up=0,qa=0,qb=0,qo=0,qg=0,qp=0;
	char c,one,two,three,four,five,six,first;
	printf("***WELCOME TO MY SHOPPING CART***");
	printf("\nWrite M to move towards the MENU:\n");
	scanf("%c",&c);

	if(c=='M' || c=='m')
	
	{
		menu();
	    while(n!=6)
        {
              if(n==1)
	          {
	    	        	printf("\nHere are the availability of items:-\n 1.Apple (Quantity=%d)\n 2.Banana (Quantity=%d)\n 3.Oranges (Quantity=%d)\n 4.Guava (Quantity=%d)\n 5.Papaya (Quantity=%d)\n",app,ban,ora,gua,pap);
                        printf("\nPlease choose the serial no. of any item you want to add to your cart(one at a time): ");
                        scanf("%d",&num);
                        if(num<=5 && num>=1)
                        {
                            printf("\nQuantity: ");
                            scanf("%d",&quan);
                            if(quan<=100 && quan>=1)
                            {
                               if(num==1)
                                {
                                  if(app>quan)
                                  {
                                       app=app-quan;
                                       apple=apple+quan;
                                       if(a==0)
                                         update++;
                                       a++;
                                       printf("\nYour item has been successfully added to the cart!\n");
                                  }
                                  else
                                    printf("Oopss! The quantity of item exceeded our storage!\n");
                                }
                               else if(num==2)
                                {
                                   if(ban>quan)
                                   {
                                       ban=ban-quan;
                                       banana=banana+quan;
                                       if(b==0)
                                         update++;
                                       b++;
                                       printf("\nYour item has been successfully added to the cart!\n");
                                   }
                                   else
                                    printf("Oopss! The quantity of item exceeded our storage!\n");
                                }
                               else if(num==3)
                                {
                                    if(ora>quan)
                                    {
                                       ora=ora-quan;
                                        oranges=oranges+quan;
                                        if(o==0)
                                          update++;
                                        o++;
                                        printf("\nYour item has been successfully added to the cart!\n");
                                    }
                                    else
                                     printf("Oopss! The quantity of item exceeded our storage!\n");
                                }
                               else if(num==4)
                                {
                                   if(gua>quan)
                                   {
                                       gua=gua-quan;
                                       guava=guava+quan;
                                       if(g==0)
                                         update++;
                                       g++;
                                       printf("\nYour item has been successfully added to the cart!\n");
                                   }
                                   else
                                    printf("Oopss! The quantity of item exceeded our storage!\n");
                                }
                               else if(num==5)
                                {
                                  if(pap>quan)
                                  {
                                       pap=pap-quan;
                                       papaya=papaya+quan;
                                       if(p==0)
                                         update++;
                                       p++;
                                       printf("\nYour item has been successfully added to the cart!\n");
                                  }
                                  else
                                    printf("Oopss! The quantity of item exceeded our storage!\n");
                                }
                                
                                
                            }
                            else
                            {
                                printf("\nInvalid Quantity!\n");
                                
                            }
                        }
                        else
                        {
                            printf("\nInvalid serial no.!\n");
                            
                        }
		       }
               else if(n==2)
               {
                   
                   if(update==0)
                   {
                       printf("\nYour cart is Empty!\n");
                   }
                  else
                   {
                       printf("\nYou have %d item in your cart.",update);
                       if(a!=0)
                         printf("\n1.Apple (Quantity = %d)",apple);
                       if(b!=0)
                         printf("\n2.Banana (Quantity = %d)",banana);
                       if(o!=0)
                         printf("\n3.Orange (Quantity = %d)",oranges);
                       if(g!=0)
                         printf("\n4.Guava (Quantity = %d)",guava);
                       if(p!=0)
                         printf("\n5.Papaya (Quantity = %d)",papaya);   
      
                       printf("\nPlease enter the ID of the item to update in your cart(1 item at a time):\t");
                       scanf("%d",&first); 
                       
                            
        
                            if(first==1)
                            {
                            	printf("Updating by:\n1. Reducing the amount\n2. Increasing the amount\n");
                            	scanf("%d",&up);
                            	if(up==1)
                            	{	
                            	      printf("\nEnter the quantity by which you want to reduce the amount of apples:\t");
                                      scanf("%d",&qa);
                                      
                            		if(app>qa)
                                    {
                                     apple=apple-qa;
                                     app=app+qa;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered to reduce is greater than the amount of apples in your cart!\n");
								}
								else if(up==2)
								{
									 printf("\nEnter the quantity by which you want to increase the amount of apples:\t");
                                      scanf("%d",&qa);
									
                            		if(app>qa)
                                    {
                                     apple=apple+qa;
                                     app=app-qa;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered exceeded our storage!\n");
								}
								else
								{
									printf("Invalid input!");
								}
                                
                            }
                            else if(first==2)
                            {
                            	printf("Updating by:\n1. Reducing the amount\n2. Increasing the amount\n");
                            	scanf("%d",&up);
                            	if(up==1)
                            	{	
                            	      printf("\nEnter the quantity by which you want to reduce the amount of bananas:\t");
                                      scanf("%d",&qb);
                                      
                            		if(ban>qb)
                                    {
                                     banana=banana-qb;
                                     ban=ban+qb;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered to reduce is greater than the amount of bananas in your cart!\n");
								}
								else if(up==2)
								{
									 printf("\nEnter the quantity by which you want to increase the amount of banans:\t");
                                      scanf("%d",&qb);
									
                            		if(ban>qb)
                                    {
                                     banana=banana+qb;
                                     ban=ban-qb;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered exceeded our storage!\n");
								}
								else
								{
									printf("Invalid input!");
								}
                                
                            }
                            else if(first==3)
                            {
                                
                            	printf("Updating by:\n1. Reducing the amount\n2. Increasing the amount\n");
                            	scanf("%d",&up);
                            	if(up==1)
                            	{	
                            	      printf("\nEnter the quantity by which you want to reduce the amount of Oranges:\t");
                                      scanf("%d",&qo);
                                      
                            		if(ora>qo)
                                    {
                                     oranges=oranges-qo;
                                     ora=ora+qo;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered to reduce is greater than the amount of oranges in your cart!\n");
								}
								else if(up==2)
								{
									 printf("\nEnter the quantity by which you want to increase the amount of oranges:\t");
                                      scanf("%d",&qo);
									
                            		if(ora>qo)
                                    {
                                     oranges=oranges+qo;
                                     ora=ora-qo;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered exceeded our storage!\n");
								}
								else
								{
									printf("Invalid input!");
								}
                                
                            }
                            else if(first==4)
                            {
                               
                            	printf("Updating by:\n1. Reducing the amount\n2. Increasing the amount\n");
                            	scanf("%d",&up);
                            	if(up==1)
                            	{	
                            	      printf("\nEnter the quantity by which you want to reduce the amount of guavas:\t");
                                      scanf("%d",&qg);
                                      
                            		if(gua>qg)
                                    {
                                     guava=guava-qg;
                                     gua=gua+qg;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered to reduce is greater than the amount of guavas in your cart!\n");
								}
								else if(up==2)
								{
									 printf("\nEnter the quantity by which you want to increase the amount of guavas:\t");
                                      scanf("%d",&qg);
									
                            		if(gua>qg)
                                    {
                                     guava=guava+qg;
                                     gua=gua-qg;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered exceeded our storage!\n");
								}
								else
								{
									printf("Invalid input!");
								}
                            
                            }
                            else if(first==5) 
                            {
                               
                            	printf("Updating by:\n1. Reducing the amount\n2. Increasing the amount\n");
                            	scanf("%d",&up);
                            	if(up==1)
                            	{	
                            	      printf("\nEnter the quantity by which you want to reduce the amount of Papayas:\t");
                                      scanf("%d",&qp);
                                      
                            		if(pap>qp)
                                    {
                                     papaya=papaya-qp;
                                     pap=pap+qp;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered to reduce is greater than the amount of papaya in your cart!\n");
								}
								else if(up==2)
								{
									 printf("\nEnter the quantity by which you want to increase the amount of papaya:\t");
                                      scanf("%d",&qp);
									
                            		if(pap>qp)
                                    {
                                     papaya=papaya+qp;
                                     pap=pap-qp;
                                     
                                     printf("\nYour item has been successfully updated!\n");
                                     }
                                     else
                                      printf("Oopss! The quantity you have entered exceeded our storage!\n");
								}
								else
								{
									printf("Invalid input!");
								}
                                
                            }
                           else
                            {
                                 printf("\nInvalid input!\n");
                            }
                    }  
                   
               }
             
              else if(n==3)
               {
                     if(update==0)
                     {
                         printf("\nYour cart is Empty!\n");
                         
                     }
                    else
                     {
               
                         printf("\nYou have %d item in your cart.",update);
                        if(a!=0)
                          printf("\nApple (Quantity = %d)\n",apple);
                        if(b!=0)
                          printf("\nBanana (Quantity = %d)\n",banana);
                        if(o!=0)
                          printf("\nOrange (Quantity = %d)\n",oranges);
                        if(g!=0)
                          printf("\nGuava (Quantity = %d)\n",guava);
                        if(p!=0)
                          printf("\nPapaya (Quantity = %d)\n",papaya); 
        
                          
                     }
               }
              else if(n==4)
               {
               	   if(update==0)
               	   {
               	   	  printf("\nYou cannot Delete any item as Your cart is Empty! \n");
				   }
				   else
				   {
				   
                         printf("\nAre you sure you want to delete items from your cart?\n Type 'Y' for Yes or 'N' for NO.\n");
	    	             scanf("%s",&five);
	    	       
                         if(five=='y' || five=='Y')
                         {
                                   printf("\nYou have %d item in your cart.",update);
                                   if(a!=0)
                                       printf("\n1.Apple (Quantity = %d)",apple);
                                   if(b!=0)
                                       printf("\n2.Banana (Quantity = %d)",banana);
                                   if(o!=0)
                                       printf("\n3.Orange (Quantity = %d)",oranges);
                                   if(g!=0)
                                       printf("\n4.Guava (Quantity = %d)",guava);
                                   if(p!=0)
                                       printf("\n5.Papaya (Quantity = %d)",papaya); 
            
                                   printf("\nPlease enter the ID of the item you want to delete from your cart(One at a time): ");
                                   scanf("%d",&id);
            
                                 if(id==1)
                                 {
                                 	
                                     apple=0;
                                     a=0;
                                     app=100;
                                     update--;
                                 }
                                 else if(id==2)
                                 {
                                     banana=0;
                                     b=0;
                                     ban=100;
                                     update--;
                                 }
                                 else if(id==3)
                                 {
                                     oranges=0;
                                     o=0;
                                     ora=100;
                                     update--;
                                 }
                                 else if(id==4)
                                 {
                                     guava=0;
                                     g=0;
                                     gua=100;
                                     update--;
                                 }
                                 else if(id==5)
                                 {
                                     papaya=0;
                                     p=0;
                                     pap=100;
                                     update--;
                                 }

                                  printf("\nItem has been successfully deleted from your cart!\n");

                                  
                         
                     }
                   else if(five=='N' || five=='n')
                   {
                       printf("We brought you back to our Menu page!\n");
                   }
                   else
                    printf("Invalid input! Please enter 'Y' or 'N'. \n");
              }
                }
                else if(n==5)
                {
                   if(update==0)
                   {
                   	 printf("Your cart is already empty!\n");
				   }
				   else
				   {
				   	 printf("\nAre you sure you want to empty your cart?\n Type 'Y' for Yes or 'N' for NO.\n");
	    	        scanf("%s",&six);
                    if(six=='y' || six=='Y')
                    {
                          update=0;
                          apple=0;
                          a=0;
                          banana=0;
                          b=0;
                          oranges=0;
                          o=0;
                          guava=0;
                          g=0;
                          papaya=0;
                          p=0;
                          
                          app=100;
                          ban=100;
                          gua=100;
                          ora=100;
                          pap=100;
              
                          printf("\nYour cart is Empty now!\n");
                    
                    }
                   else if(six=='N' || six=='n')
                   {
                       printf("We brought you back to our Menu page!\n");
                   }
                   else
                    printf("Invalid input!\n");
				   }
                    
                }   
                menu();     
        }
    }
    else
    {
        printf("Invalid input!\n");
    }
    
}
