/* Alan Trevino
October 16, 2013
Tree order program.

Pseudo code!!! =D
1.) Welcome and ask for name.
2.) How many trees?
3.) How tall? (Give selection)
4.) User chooses, calculate cost of delivery
5.) Ask if selection is alright.
	6B.) If not okay, restart
6.) Ask if he wants his trees planted.
	7.B.) If no, end program with delivery cost. 
7.) If yes, recalculate cost, display cost and finish.


*/


#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
using namespace std;

//declare
string first, second, choice2, deliv_Answer, plant_Answer, extra, v_Vendetta, confirm;
//double tree_one, tree_two, tree_three, tree_four, d_per_tree, del_plant, max_deliv, subtotal, total, total2, tax;
double del_plant, total, total2, subtotal;
int tree_amount;
char choice1;

//Assign
double tree_one = 39.00,       // >3 feet
		tree_two = 69.00,       // 3 to 5 feet
		tree_three = 99.00,    // 6 to 8 feet
		tree_four = 199.00,   // over 8 feet
		d_per_tree = 20.00,     // price per tree under
		max_deliv = 100.00,     // Max price for Delivery.
		tax = 1.0825;           //Tax for Texas


void drugs()
{
    cout<< "Give me a second...\n\n\n";
    Sleep(1000);
    system ("cls");
    cout<< "Remember remember the Fifth of November";
    cout<< "\nGunpowder, treason and plot.";
    cout<< "\nI know of no reason why gunpowder, treason";
    cout<< "\nShould ever be . . . \n\n\n";
    Sleep(5000);
    cout<< "Finish it.\n";
    cin>> v_Vendetta;
    
    //HADUOKEN!!!!!!
    if (v_Vendetta != "forgot")
        {
            cout<< "Thank you! Come again!!!";
            Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
    
    //Congrats. You passed.
    if (v_Vendetta == "forgot"){
        cout<< "We sell drugs here every other \nThursday and Tuesday.";
        system("pause");
        Sleep(400);
        cout<< " But never in the same week.";
        Sleep(400);
		cout<< "\nIf you are interested in that \n";
        cout<< "come back later.";
        Sleep(800);
        cout<< "\n. ";
        Sleep(800);
        cout<< ". ";
        Sleep(800);
        cout<< ". \n";
        cout<< "Please quit.";
        system("pause");
        }
}








/**********************************
 *******TREE ONE CALCULATION*******
 ***********************************/
void tree_One()
{
	
	system("cls");
    //REPEAT IF NO CONFIRMATON
    while (confirm != "yes" && confirm != "Yes" && confirm != "y" && confirm != "Y")
    {
        cout<< "Alrighty then! You want the trees that are under 3 feet tall.\n";
        cout<< "These trees cost $39.00 per tree.\n";
        cout<< "How many do you need?\n";
        cin>> tree_amount;
        
        Sleep(500);
        cout<< "\n. ";
        Sleep(300);
        cout<< ". ";
        Sleep(300);
        cout<< ". \n\n";
        Sleep(300);
    
        cout<< "So, you want " << tree_amount << " trees under 3 feet tall?\n";
        cin>> confirm;
        
        cout<< "\nYou sure?\n";
        cin>> confirm;
    }
    
    system ("cls");
    cout<< "Perfect, let me calculate everything.\n";
    
    //calculate
    subtotal=tree_one*tree_amount;
    total=subtotal*tax;
    
    Sleep(500);
    cout<< "\n. ";
	Sleep(300);
	cout<< ". ";
	Sleep(300);
	cout<< ". \n";
	Sleep(300);
	cout<< "Alright, here is the total so far...\n\n\n";
	Sleep(300);
    
    //**********************************CALCULATION
    cout<<"\nTree cost                  $" <<tree_one;
    cout<<"\nAmount of Trees             " <<tree_amount;
    cout<<"\n                           _________";
    cout<<"\n\nSubtotal                   $" <<subtotal;
    cout<<"\nTax                        $" <<tax;
    cout<<"\n                           _________";
    cout<<"\nTotal                      $" <<total;
    
    
    //***********************************************DELIVERY
    cout<< "\n\nWould you like for us to deliver your order?\n";
    cin>> deliv_Answer;
    
    //Self haduoken?!?!?!???
    if (deliv_Answer == "No" || deliv_Answer == "no")
    {
        cout<< "\n\nThank you for shopping with us.\n";
        cout<< "We hope you have a wonderful day!\n";
        Sleep(500);
       	cout<< "\n. ";
        Sleep(500);
    	cout<< ". ";
       	Sleep(500);
		cout<< ". \n";
   	    cout<< "Please quit.";
        system("pause");
	}
    
    if(deliv_Answer=="yes"||deliv_Answer=="Yes")
    {
        system("cls");
		Sleep(500);
        cout<< "Great we will deliver these for you.\n\n";
        
        if (tree_amount >=5)
        {
        	system("cls");
            cout<< "Because you are ordering more than 5 trees,\n";
            cout<< "deliver cost will be $100.00 flat.\n";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n\n";
            Sleep(300);
            cout<< "Alright, here is the total for your delivery.\n\n";
            Sleep(300);
            
            subtotal=tree_one*tree_amount;		//How much each tree costs
            total2=subtotal+max_deliv;				//tree cost with delivery
            total=total2*tax;					//total with tax 
            
            //************************************CALCULATION WITH MAX DELIVERY
            cout<<"\nTree cost                  $" <<tree_one;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<max_deliv;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        if (tree_amount <=5)
        {
            system("cls");
			cout<< "\nBecause you are ordering under 5 trees,\n";
            cout<< "delivery cost will be $20.00 per tree.";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "\nAlright, here is the total for your delivery\n";
            Sleep(300);
            
            subtotal=tree_one*tree_amount;
            total2=subtotal+d_per_tree;
            total=subtotal*tax;
            
            //*******************CALCULATION WITH MAX DELIVERY*****************
            cout<<"\nTree cost                  $" <<tree_one;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        
    }
    
        cout<< "\n\nWould you like for us to plant your order as well?\n";
        cin>> plant_Answer;
        
        //FINISH THEM!!!!
        if(plant_Answer=="no"||plant_Answer=="No")
        {
        	Sleep(500);
        	cout<< "\nAlright, than just pay when you are ready.\n";
        	cout<< "Thank you for choosing Green Fields Landscaping.\n\n";
        	Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
        
        
        
        //*********************************************PLANT
        if(plant_Answer=="yes"||plant_Answer=="Yes")
        {
            Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            
        	system("cls");
        	Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "Alright. Let me begin to calculate the cost of everything.\n\n";
            
            
            
            
            subtotal=tree_one*tree_amount;		//How much each tree costs
            total2=subtotal*1.50;					//tree cost with delivery & Planting
            total=total2*tax;					//total with tax 
            
            
            
            //*******************CALCULATION WITH DELIVERY AND PLANTING*****************
            cout<<"\nTree cost                  $" <<tree_one;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery & Planting        $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
            
            
            cout<<"\n\nThis is your final total. Please pay us promptly to enjoy your new trees.\n";
            cout<<"Thank you for choosing Green Fields Landscaping!";
            Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
}









/**********************************
 *******TREE TWO CALCULATION*******
 ***********************************/

void tree_Two()
{
	
	system ("cls");
    //REPEAT IF NO CONFIRMATON
    while (confirm != "yes" && confirm != "Yes" && confirm != "y" && confirm != "Y")
    {
        cout<< "Alrighty then! You want the trees that are 3 to 5 feet tall.\n";
        cout<< "These trees cost $69.00 per tree.\n";
        cout<< "How many do you need?\n";
        cin>> tree_amount;
        
        Sleep(500);
        cout<< "\n. ";
        Sleep(300);
        cout<< ". ";
        Sleep(300);
        cout<< ". \n\n";
        Sleep(300);
    
        cout<< "So, you want " << tree_amount << "trees 3 to 5 feet tall?\n";
        cin>> confirm;
        
        cout<< "\nYou sure?\n";
        cin>> confirm;
    }
    
    system ("cls");
    cout<< "Perfect, let me calculate everything.\n";
    
    //calculate
    subtotal=tree_two*tree_amount;
    total=subtotal*tax;
    
    Sleep(500);
    cout<< "\n. ";
	Sleep(300);
	cout<< ". ";
	Sleep(300);
	cout<< ". \n";
	Sleep(300);
	cout<< "Alright, here is the total so far...\n";
	Sleep(300);
    
    //**********************************CALCULATION
    cout<<"\nTree cost                  $" <<tree_two;
    cout<<"\nAmount of Trees             " <<tree_amount;
    cout<<"\n                           _________";
    cout<<"\n\nSubtotal                 $" <<subtotal;
    cout<<"\nTax                        $" <<tax;
    cout<<"\n                           _________";
    cout<<"\nTotal                      $" <<total;
    
    
    //***********************************************DELIVERY
    cout<< "\nWould you like for us to deliver your order?";
    cin>> deliv_Answer;
    
    //Self haduoken?!?!?!???
    if (deliv_Answer == "No" || deliv_Answer == "no")
    {
        cout<< "\n\nThank you for shopping with us.\n";
        cout<< "We hope you have a wonderful day!\n";
        Sleep(500);
        cout<< "\n. ";
	    Sleep(500);
	    cout<< ". ";
       	Sleep(500);
        cout<< ". \n";
   	    cout<< "Please quit.";
       	system("pause");}
    
    if(deliv_Answer=="yes"||deliv_Answer=="Yes")
    {
        Sleep(500);
        cout<< "Great we will deliver these for you.\n\n";
        
        if (tree_amount >=5)
        {
        	system("cls");
            cout<< "Because you are ordering more than 5 trees,\n";
            cout<< "deliver cost will be $100.00 flat.\n\n";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n\n";
            Sleep(300);
            cout<< "Alright, here is the total for your delivery.\n\n";
            Sleep(300);
            
            subtotal=tree_two*tree_amount;		//How much each tree costs
            total2=subtotal+max_deliv;				//tree cost with delivery
            total=total2*tax;					//total with tax 
            
            //************************************CALCULATION WITH MAX DELIVERY
            cout<<"\nTree cost                  $" <<tree_two;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<max_deliv;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        if (tree_amount <=5)
        {
            system("cls");
			cout<< "\nBecause you are ordering under 5 trees,\n";
            cout<< "delivery cost will be $20.00 per tree.";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "\nAlright, here is the total for your delivery\n";
            Sleep(300);
            
            subtotal=tree_two*tree_amount;
            total2=subtotal+d_per_tree;
            total=subtotal*tax;
            
            //*******************CALCULATION WITH MAX DELIVERY*****************
            cout<<"\nTree cost                  $" <<tree_two;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        
    }
    
        cout<< "Would you like for us to plant your order as well?";
        cin>> plant_Answer;
        
        //FINISH THEM!!!!
        if(plant_Answer=="No"||plant_Answer=="No")
        {
        	Sleep(500);
        	cout<< "Alright, than just pay when you are ready.\n";
        	cout<< "Thank you for choosing Green Fields Landscaping.\n\n";
        	Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
        
        
        
        //*********************************************PLANT
        if(plant_Answer=="yes"||plant_Answer=="Yes")
        {
            Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            
        	system("cls");
        	Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "Alright. Let me begin to calculate the cost of everything.\n";
            
            
            
            
            subtotal=tree_two*tree_amount;		//How much each tree costs
            total2=subtotal*1.50;				//tree cost with delivery & Planting
            total=total2*tax;					//total with tax 
            
            
            
            //*******************CALCULATION WITH DELIVERY AND PLANTING*****************
            cout<<"\nTree cost                  $" <<tree_two;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery & Planting        $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
            
            
            cout<<"\n\nThis is your final total. Please pay us promptly to" <<"\nenjoy your new trees.\n";
            cout<<"Thank you for choosing Green Fields Landscaping!";
            Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
}










/************************************
 *******TREE THREE CALCULATION*******
 *************************************/
void tree_Three()
{
	
	system ("cls");
    //REPEAT IF NO CONFIRMATON
    while (confirm != "yes" && confirm != "Yes" && confirm != "y" && confirm != "Y")
    {
        cout<< "Alrighty then! You want the trees that are 6 to 8 feet tall.\n";
        cout<< "These trees cost $99.00 per tree.\n";
        cout<< "How many do you need?\n";
        cin>> tree_amount;
        
        Sleep(500);
        cout<< "\n. ";
        Sleep(300);
        cout<< ". ";
        Sleep(300);
        cout<< ". \n\n";
        Sleep(300);
    
        cout<< "So, you want " << tree_amount << " trees that are 6 to 8 feet tall?\n";
        cin>> confirm;
        
        cout<< "\nYou sure?\n";
        cin>> confirm;
    }
    
    system ("cls");
    cout<< "Perfect, let me calculate everything.\n";
    
    //calculate
    subtotal=tree_three*tree_amount;
    total=subtotal*tax;
    
    Sleep(500);
    cout<< "\n. ";
	Sleep(300);
	cout<< ". ";
	Sleep(300);
	cout<< ". \n";
	Sleep(300);
	cout<< "Alright, here is the total so far...\n\n\n";
	Sleep(300);
    
    //**********************************CALCULATION
    cout<<"\nTree cost			$" <<tree_three;
    cout<<"\nAmount of Trees			" <<tree_amount;
    cout<<"\n				___________";
    cout<<"\n\nSubtotal			$" <<subtotal;
    cout<<"\nTax				$" <<tax;
    cout<<"\n				___________";
    cout<<"\nTotal				$" <<total;
	
    
    //***********************************************DELIVERY
    cout<< "\n\nWould you like for us to deliver your order?\n";
    cin>> deliv_Answer;
    
    
    
    if(deliv_Answer=="yes" || deliv_Answer=="Yes")
    {
        Sleep(500);
        cout<< "Great we will deliver these for you.\n\n";
        
        //********************MAX DELIVERY*********************
        if (tree_amount >=5)
        {
        	system("cls");
            cout<< "Because you are ordering more than 5 trees,\n";
            cout<< "deliver cost will be $100.00 flat.\n\n";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n\n";
            Sleep(300);
            cout<< "Alright, here is the total for your delivery\n.";
            Sleep(300);
            
            subtotal=tree_three*tree_amount;		//How much each tree costs
            total2=subtotal+max_deliv;				//tree cost with delivery
            total=total2*tax;					//total with tax 
            
            //************************************CALCULATION WITH MAX DELIVERY
            cout<<"\nTree cost                  $" <<tree_three;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<max_deliv;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        
        //*********************************REGULAR DELIVERY!***************************
        if (tree_amount <=5)
        {
        	system("cls");
			cout<< "\nBecause you are ordering under 5 trees,\n";
            cout<< "delivery cost will be $20.00 per tree.";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "\nAlright, here is the total for your delivery\n";
            Sleep(300);
            
            subtotal=tree_three*tree_amount;
            total2=subtotal+d_per_tree;
            total=subtotal*tax;
            
            //*******************CALCULATION WITH MAX DELIVERY*****************
            cout<<"\nTree cost                  $" <<tree_three;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        
    }
    
    //Self haduoken?!?!?!???
    if (deliv_Answer == "no" || deliv_Answer == "No")
    {
        cout<< "\n\nThank you for shopping with us.\n";
        cout<< "We hope you have a wonderful day!\n";
		Sleep(500);
       	cout<< "\n. ";
        Sleep(500);
   	    cout<< ". ";
       	Sleep(500);
        cout<< ". \n";
   	    cout<< "Please quit.";
       	system("pause");}
    
        cout<< "\nWould you like for us to plant your order as well?";
        cin>> plant_Answer;
        
        //FINISH THEM!!!!
        if(plant_Answer!="yes"||plant_Answer!="Yes")
        {
        	Sleep(500);
        	cout<< "Alright, than just pay when you are ready.\n";
        	cout<< "Thank you for choosing Green Fields Landscaping.\n\n";
        	Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
        
        
        
        //*********************************************PLANT
        if(plant_Answer=="yes"||plant_Answer=="Yes")
        {
            Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            
        	system("cls");
        	Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "Alright. Let me begin to calculate the cost of everything.\n\n";
            
            
            
            
            subtotal=tree_three*tree_amount;		//How much each tree costs
            total2=subtotal*1.5;					//tree cost with delivery & Planting
            total=total2*tax;						//total with tax 
            
            
            
            //*******************CALCULATION WITH DELIVERY AND PLANTING*****************
            cout<<"\nTree cost                  $" <<tree_three;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery & Planting        $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
            
            
            cout<<"\n\nThis is your final total. Please pay us promptly to" <<"\nenjoy your new trees.\n";
            cout<<"Thank you for choosing Green Fields Landscaping!";\
            Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
		}
}









/***********************************
 *******TREE FOUR CALCULATION*******
 ************************************/
void tree_Four()
{
	
	system ("cls");
    //REPEAT IF NO CONFIRMATON
    while (confirm != "yes" && confirm != "Yes" && confirm != "y" && confirm != "Y")
    {
        cout<< "Alrighty then! You want the trees that are over 8 feet tall.\n";
        cout<< "These trees cost $199.00 per tree.\n";
        cout<< "How many do you need?\n";
        cin>> tree_amount;
        
        Sleep(500);
        cout<< "\n. ";
        Sleep(300);
        cout<< ". ";
        Sleep(300);
        cout<< ". \n\n";
        Sleep(300);
    
        cout<< "So, you want " << tree_amount << " trees over 8 feet tall?\n";
        cin>> confirm;
        
        
        cout<< "\nYou sure?\n";
        cin>> confirm;
    }
    
    system ("cls");
    cout<< "Perfect, let me calculate everything.\n";
    
    //calculate
    subtotal=tree_four*tree_amount;
    total=subtotal*tax;
    
    Sleep(500);
    cout<< "\n. ";
	Sleep(300);
	cout<< ". ";
	Sleep(300);
	cout<< ". \n";
	Sleep(300);
	cout<< "Alright, here is the total so far...\n\n\n";
	Sleep(300);
    
    //**********************************CALCULATION
    cout<<"\nTree cost                  $" <<tree_four;
    cout<<"\nAmount of Trees             " <<tree_amount;
    cout<<"\n                           _________";
    cout<<"\n\nSubtotal                   $" <<subtotal;
    cout<<"\nTax                        $" <<tax;
    cout<<"\n                           _________";
    cout<<"\nTotal                      $" <<total;
    
    
    //***********************************************DELIVERY
    cout<< "\n\nWould you like for us to deliver your order?\n";
    cin>> deliv_Answer;
    
    //Self haduoken?!?!?!???
    if (deliv_Answer == "no" || deliv_Answer == "No")
    {
        cout<< "\n\nThank you for shopping with us.\n";
        cout<< "We hope you have a wonderful day!\n";
        Sleep(500);
       	cout<< "\n. ";
        Sleep(500);
   	    cout<< ". ";
       	Sleep(500);
        cout<< ". \n";
   	    cout<< "Please quit.";
       	system("pause");}
       	system("pause");
    
    if(deliv_Answer=="yes"||deliv_Answer=="Yes")
    {
    	system("cls");
        Sleep(500);
        cout<< "\n\nGreat we will deliver these for you.\n\n";
        
        if (tree_amount >=5)
        {
            cout<< "Because you are ordering more than 5 trees,\n";
            cout<< "deliver cost will be $100.00 flat.\n\n";
            Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "Alright, here is the total for your delivery.";
            Sleep(300);
            
            subtotal=tree_four*tree_amount;		//How much each tree costs
            total2=subtotal+max_deliv;				//tree cost with delivery
            total=total2*tax;					//Total with tax 
            
            //************************************CALCULATION WITH MAX DELIVERY
            cout<<"\nTree cost                  $" <<tree_four;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<max_deliv;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        if (tree_amount <=5)
        {
            system("cls");
			cout<< "\nBecause you are ordering under 5 trees,\n";
            cout<< "delivery cost will be $20.00 per tree.";
            Sleep(500);
            cout<< "\n\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "\nAlright, here is the total for your delivery\n";
            Sleep(300);
            
            subtotal=tree_four*tree_amount;
            total2=subtotal+d_per_tree;
            total=subtotal*tax;
            
            //*******************CALCULATION WITH MAX DELIVERY*****************
            cout<<"\nTree cost                  $" <<tree_four;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery                   $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
        }
        
        
    }
    
        cout<< "\n\nWould you like for us to plant your order as well?\n";
        cin>> plant_Answer;
        
        //FINISH THEM!!!!
        if(plant_Answer!="yes" && plant_Answer!="Yes")
        {
        	system("cls");
        	Sleep(500);
        	cout<< "Alright, than just pay when you are ready.\n";
        	cout<< "Thank you for choosing Green Fields Landscaping.\n\n";
        	Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");
        }
        
        
        
        //*********************************************PLANT
        if(plant_Answer=="yes" || plant_Answer=="Yes")
        {
            Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            
        	system("cls");
        	Sleep(500);
            cout<< "\n. ";
            Sleep(300);
            cout<< ". ";
            Sleep(300);
            cout<< ". \n";
            Sleep(300);
            cout<< "Alright. Let me begin to calculate the cost of everything.\n\n";
            
            
            
            
            subtotal=tree_four*tree_amount;		//How much each tree costs
            total2=subtotal*1.50;				//tree cost with delivery & Planting
            total=total2*tax;					//total with tax 
            
            
            
            //*******************CALCULATION WITH DELIVERY AND PLANTING*****************
            cout<<"\nTree cost                  $" <<tree_four;
            cout<<"\nAmount of Trees             " <<tree_amount;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<subtotal;
            cout<<"\nDelivery & Planting        $" <<d_per_tree;
            cout<<"\n                           _________";
            cout<<"\nSubtotal                   $" <<total2;
            cout<<"\nTax                        $" <<tax;
            cout<<"\n                           _________";
            cout<<"\nTotal                      $" <<total;
            
            
            cout<<"\n\nThis is your final total. Please pay us promptly to" <<"\nenjoy your new trees.\n";
            cout<<"Thank you for choosing Green Fields Landscaping!";
			Sleep(500);
        	cout<< "\n. ";
	        Sleep(500);
    	    cout<< ". ";
        	Sleep(500);
	        cout<< ". \n";
    	    cout<< "Please quit.";
        	system("pause");   
        }
}







/*************************
*******FULL PROGRAM*******
***************************/
int main()
{

    //BEGINING
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*\n";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"H";
    Sleep(50);
    cout<<"e";
    Sleep(50);
    cout<<"l";
    Sleep(50);
    cout<<"l";
    Sleep(50);
    cout<<"o";
    Sleep(50);
    cout<<"!";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*\n";
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*";
    Sleep(50);
    cout<<"*\n\n";

    
    
	Sleep (500);
	cout<< "I hope you are having a good day. What is your name?\n";
	cin>> first;
    
    if (first=="V" || first=="Guy" || first=="guy" || first=="v" || first=="Faux" || first=="faux" || first == " ")
    {
        drugs();
        return 0;
    }
    
    Sleep (300);
	cout<< "\nHello " <<first << ", are you ready to choose between the trees we offer?\n";
	cin>> second;
	system ("cls");
    
    //If not ready.
    if (second == "no" && second == "No" && second != "Yes" && second != "yes")
        {
            cout<< "Well, please open this program when you are ready\n";
            cout<< "Thank you, come again";
            
            return 0;
        }
    
	system("cls");
	Sleep (500);
	
	//HADUOKEN!!!!!
	if (first == "no" || first == "No" || first == "n" || first == "N")
		{cout<< "Alright, then please visit this program at a later time when you are completely sure.\n";
		cout<< first<<", I hope you have a wonderful day."; 
		return 0;}
		
	cout<< "\nPerfect! Well, these are the trees we have to offer " <<first <<":\n";
	Sleep(500);
	cout<< "A...........smaller than 3 feet tall.\n";
	Sleep(300);
	cout<< "B...........3 to 5 feet tall.\n";
	Sleep(300);
	cout<< "C...........6 to 8 feet tall.\n";
	Sleep(300);
    cout<< "Or\n";
    Sleep(300);
	cout<< "D...........greater than 8 feet tall.\n";
	Sleep(300);
	
	cout<< "\nWhat kind of tree would you like?\n";
    cout<< "Please make sure to make your selection as diplayed.\nThanks!\n";
	cin>> choice1;
	
    
    system("cls");
    Sleep(500);
	//First choice
	switch(choice1)
		{
			case 'A': tree_One();
						break;
			case 'B': tree_Two();
						break;
			case 'C': tree_Three();
						break;
            case 'D': tree_Four();
                        break;
			default: cout<< "Please select a tree using the letters A, B, C, or D \nusing Capitol letters. \n ";
		}
	
    //First choice AGAIN
    while (choice1 != 'A' && choice1 != 'B' && choice1 != 'C' && choice1 != 'D')
        {
        cout<< "\nThese are the trees we have to offer " <<first <<":\n";
            Sleep(500);
            cout<< "A...........smaller than 3 feet tall.\n";
            Sleep(300);
            cout<< "B...........3 to 5 feet tall.\n";
            Sleep(300);
            cout<< "C...........6 to 8 feet tall.\n";
            Sleep(300);
            cout<< "Or\n";
            Sleep(300);
            cout<< "D...........greater than 8 feet tall.\n";
            Sleep(300);
            
        cout<< "\nWhat kind of tree would you like?\n";
        cin>> choice1;
        
        switch(choice1){
            case 'A': tree_One();
                break;
            case 'B': tree_Two();
                break;
            case 'C': tree_Three();
                break;
            case 'D': tree_Four();
                break;
            default: cout<< "Please select a tree using the letters A, B, C, or D using Capitol letters. \n ";}
        Sleep(1000);
        system("cls");
		}
	//end
	return 0;}
