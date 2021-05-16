#include <iostream>

using namespace std;

//Shows the highest value among the 4 pairs of values entered.
void getMaxValue(double v1,double v2,double v3,double v4)
{
    printf("---Max Value---\n");
    double temp;
	double list[]={v1,v2,v3,v4};
	//sorting the entered number from smallest to largest
	for(int i=0;i<3;i++) 
		for(int j=0;j<3;j++) 
		{ 
		if(list[j]>list[j+1]) 
		{ 
		    temp=list[j]; 
	    	list[j]=list[j+1]; 
		    list[j+1]=temp; 
		} 
	}
	cout<<list[3];
    printf("\n");
    
}

//Shows the smallest value between 4 integers entered
void getMinValue(int i1,int i2,int i3,int i4)
{
    printf("---Min Value---\n");
    int temp;
	int list[]={i1,i2,i3,i4};
	//Sorting the entered number from smallest to largest
	for(int i=0;i<3;i++) 
		for(int j=0;j<3;j++) 
		{ 
		if(list[j]>list[j+1]) 
		{ 
		    temp=list[j]; 
	    	list[j]=list[j+1]; 
		    list[j+1]=temp; 
		} 
	}
	cout<<list[0];
	printf("\n");
}

//Prints a table on the screen according to the number of rows and columns entered
void createArray(int row,int column){
    printf("---Rox x Column---\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++)
        {
            //Assigns random numbers between 0-100
            cout<<rand() % 100;
            printf(" ");
        }
        //for line separation
        printf("\n");
	} 
}
//Creates an array with random numbers according to the number of strings entered, and displays odd numbers between this array.
void getOddNumbers(int size)
{
    printf("---Odd numbers---\n");
    int list[size];
    //We fill the integer array
    for(int i =0; i<size;i++)
    {
        //Assigns random numbers between 0-100
        list[i]=rand() % 100;
    }
    
  
    
    //Find odd numbers
    for(int i =0; i<size;i++)
    {
        //If the mod value of 2 is 1, the number is odd
        switch(list[i] % 2)
        {
        case 0:
            continue;
            break;
        case 1:
            cout<<list[i];printf(" ");
            break;
        default:
            continue;
            break;
        }
    }
}

//Test function
void startAllFunction(){
    getMaxValue(10.0,20.0,30.0,40.0);
    getMinValue(10,20,30,40);
    createArray(3,5);
    getOddNumbers(20);
}

int main()
{
    startAllFunction();
    return 0;
}