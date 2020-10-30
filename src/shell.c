#include "../include/shell.h"
string ver = "1.0.2"; 
string license = "Licensed under the GNU General Public License v3.0";

void launch_shell(int n)
{		
	string ch = (string) malloc(200); // util.h
	int counter = 0;
	do	
	{

			print("[");
			print(int_to_string(n));
			print("] kernel> ");
		    ch = readStr(); //memory_copy(readStr(), ch,100);
		    if(strEql(ch,"cmd"))
		    {
		            print("\nNew shell has been opened.\n");
					launch_shell(n+1);
		    }
		    else if(strEql(ch,"clear"))
		    {
		            clearScreen();
		    }
		    else if(strEql(ch,"sum"))
		    {
		    	sum();
		    }
		    else if(strEql(ch,"shutdown"))
		    {	
				print("\n");
		    	print("\nShutting down, WinOS. \n");
				print("Thanks for using the WinOS Open Source Operating System\n");
				print("You can now close your computer. \n");
				print("\n");
		    }
		    else if(strEql(ch,"echo"))
		    {
		    	echo();
		    }
		    else if(strEql(ch,"sort"))
		    {
		    	sort();
		    }
		    else if(strEql(ch,"fibonaci"))
		    {
		    	fibonaci();
		    }
		    else if(strEql(ch,"gcd"))
		    {
		    	gcd();
		    }
		    else if(strEql(ch,"help"))
		    {
		    	help();
		    }
		    else if(strEql(ch,"color"))
		    {
		    	set_background_color();
		    }
		    else if(strEql(ch,"multiply"))
		    {
		    	multiply();
		    }
			else if(strEql(ch,"divide"))
		    {
		    	divide();
		    }
			else if(strEql(ch,"minus"))
		    {
		    	minus();
		    }
			else if(strEql(ch,"about"))
		    {
		    	about();
		    }
			else if(strEql(ch,"exit"))
		    {
		    	print("\nShell Closed.\n");
				launch_shell(n-1);
		    }
			else if(strEql(ch,"game")) {
				game();
			}
		    	else if(strEql(ch,"github")) {
		   		github();
			}
			else if(strEql(ch,"compile")) {
				compile();
			}
			else if(strEql(ch,"kernel")) {
				kernel();
			}

		    else
		    {
		            print("\nBad command, please do 'help' for commands\n");
		            print("");
		    } 
	} while (!strEql(ch,"shutdown"));
}

void sum()
{	
	print("\n---------------------");
	print("\n How many numbers: ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	fill_array(arr,n);
	int s = sum_array(arr,n);
	print(" Result: ");
	print(int_to_string(s));
	print("\n");
	print("---------------------\n");
}
void echo()
{	
	print("\n---------------------");
	print("\nInput: "); 
	string str = readStr();
	print("\n");
	print("Output: \n\n"); 
	print(str);
	print("\n\n");
	print("---------------------\n");
}

void game() {
	print("\nMy simple game made with C on my kernel!");
	print("\n");
	print("\nDo you want to start the game?");
	print("\nType (y/N) ");

	string input_intro = readStr();

	if(strEql(input_intro,"y")) {
		print("\nAlright let's start!");
	} else {
		print("\nGoodbye ;(\n");

		launch_shell(0);
	}

	// question 1

	print("\n1. What is the capital of Germany? \nAnswer: ");
	string input_answer_1 = readStr();

	if(strEql(input_answer_1, "berlin")) {
		print("\nGood Job!");
	} else {
		print("\nWrong answer, the correct answer is berlin\n");
	}

	// question 2

	print("\n2. What was the old name of Myanmar \nAnswer: ");
	string input_answer_2 = readStr();

	if(strEql(input_answer_2, "burma")) {
		print("\nNice job!");
	} else {
		print("\nOof that's the wrong answer. It's Burma");
	}

	// question 3
	print("\n3. What year did the COVID-19 started spreading \nAnswer: ");
	string input_answer_3 = readStr();

	if(strEql(input_answer_3, "2020")) {
		print("\nGreat Job! It is 2020\n");
	} else {
		print("\nWrong, it is 2020\n");
	}
}

void sort()
{	
	print("\n---------------------");
	int arr[100];
	print("\n Array size: ");
	int n = str_to_int(readStr());
	print("\n");
	fill_array(arr,n);
	print(" Before sorting:\n");
	print_array(arr,n);
	print("\n Order: (1 for increasing / 0 for decreasing): ");
	int ordre = str_to_int(readStr());
	insertion_sort(arr,n,ordre);
	print("\nAfter sorting:\n");
	print_array(arr,n);
	print("---------------------\n");
}

void fill_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		print("ARR[");
		print(int_to_string(i));
		print("]: ");
		arr[i] = str_to_int(readStr());
		print("\n");
	}
}
void print_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		/*print("ARR[");
		print(int_to_string(i));
		print("]: ");*/
		print(int_to_string(arr[i]));
		print("   ");
	}
	print("\n");
}
void insertion_sort(int arr[],int n,int ordre) //1 is increasing, 0 is descreasing
{
	int i = 0;
	for (i = 1;i<n;i++)
	{
		int aux = arr[i];
		int j = i;
		while((j > 0) && ((aux < arr[j-1]) && ordre ))
		{
			arr[j] = arr[j-1];
			j = j -1;
		}
		arr[j] = aux;
	}
}
int sum_array(int arr[],int n)
{
	int i = 0;
	int s = 0;
	for (i = 0;i<n;i++)
	{
		s += arr[i];
	}
	return s;
}


void fibonaci()
{	
	print("\n---------Fibonachi---------");
	print("\n How many Elements: ");
	int n = str_to_int(readStr()); 
	print("\n");
	int i = 0;
	for(i =0;i<n;i++)
	{
		print(" Fibo ");
		print(int_to_string(i));
		print(" : ");
		print(int_to_string(fibo(i)));
		print("\n");
	}
	print("---------------------------\n");
	
}
int fibo(int n)
{
	if(n <2)
		return 1;
	else 
		return fibo(n-1) + fibo(n-2);
}
int gcd_couple(int a,int b)
{
	if(b == 0)
		return 1;
	if(a % b ==0) 
		return b;
	else 
		return gcd_couple(b,a % b);
}
void gcd()
{
	print("\n---------GCD---------");
	print("\nHow many numbers: ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	int matrix[n][n];
	fill_array(arr,n);
	for (i = 0;i<n;i++)
	{
		matrix[0][i] = arr[i];
	}
	int j = 0;
	for (i =1;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		{
			matrix[i][j] = gcd_couple(matrix[i-1][j] , matrix[i-1][j+1]);
		}
	}
	print("Result: ");
	print(int_to_string(matrix[n-1][0]));
	print("\n");
	print("---------------------\n");
}
void print_matrix(int matrix[][100],int rows,int cols)
{
	int i =0;
	int j = 0;
	for (i = 0;i<rows;i++)
	{
		for(j =0;j<cols;j++)
		{
			print(int_to_string(matrix[i][j]));
			print("   ");
		}
		print("\n");
	}
}
void set_background_color()
{	
	print("\n--------------------------------------------");
	print("\nCustomize your terminal!");
	print("\nColor codes : ");
	print("\n0 : black");
	print_colored("\n1 : blue",1,0);   // screen.h
	print_colored("\n2 : green",2,0);
	print_colored("\n3 : cyan",3,0);
	print_colored("\n4 : red",4,0);
	print_colored("\n5 : purple",5,0);
	print_colored("\n6 : orange",6,0);
	print_colored("\n7 : grey",7,0);
	print_colored("\n8 : dark grey",8,0);
	print_colored("\n9 : blue light",9,0);
	print_colored("\n10 : green light",10,0);
	print_colored("\n11 : blue lighter",11,0);
	print_colored("\n12 : red light",12,0);
	print_colored("\n13 : rose",13,0);
	print_colored("\n14 : yellow",14,0);
	print_colored("\n15 : white",15,0);
	print("\n--------------------------------------------");
	
	print("\n\n Text color ? : ");
	int text_color = str_to_int(readStr());
	print("\n\n Background color ? : ");
	int bg_color = str_to_int(readStr());
	set_screen_color(text_color,bg_color);
	clearScreen();
}

void multiply()
{
	
	print("\nNum 1 :");
	int num1 = str_to_int(readStr());
	print("\nNum 2 :");
	int num2 = str_to_int(readStr());
	print("\nResult : ");
	print(int_to_string(num1*num2)); // util.h
	print("\n");
	
}


void divide()
{
	print("\nFirst Digit: ");
	int num1 = str_to_int(readStr());
	print("\nSecond Digit: ");
	int num2 = str_to_int(readStr());
	print("\nResult: ");
	print(int_to_string(num1/num2)); // util.h
	print("\n");
}

void minus()
{
	print("\nFirst Digit: ");
	int num1 = str_to_int(readStr());
	print("\nSecond Digit: ");
	int num2 = str_to_int(readStr());
	print("\nResult: ");
	print(int_to_string(num1-num2)); // util.h
	print("\n");
}

void help()
{	
	print("\nWinOS Help, version ");
	print(ver);
	print("\n");
	print(license); 
	print("\n");
	print("\ncmd       - Launch a new recursive Shell");
	print("\nclear     - Clears the screen");
	print("\nsum       - Computes the sum of n numbers");
	print("\necho      - Reprint a given text");
	print("\nsort      - Sorts a given n numbers");
	print("\nfibonaci  - Prints the first n numbers of fibonaci");
	print("\ngcd       - Computes the grand common divider of n given numbers");
	print("\nshutdown  - Quits the current shell");
	print("\ncolor     - Changes the colors of the terminal");
	print("\ndivide    - Computes the quotient of 2 numbers");
	print("\nmultiply  - Computes the product of 2 numbers");
	print("\nminus     - Computes the difference of 2 numbers");
	print("\nabout     - Shows you about the open-source project");
	print("\n\n");
}

void about()
{	
	print("\n----------------------------------------------------------");
	print("\nWin's Open Source Kernel Project");
	print("\nMaintained by: WinsDominoes");
	print("\n");
	print("\nbased on github.com/iknowbrain/NIDOS");
	print("\nVersion: ");
	print(ver);
	print("\n");
	print(license);
	print("\nKernel Source Code: github.com/WinsDominoes/WinOS-Kernel");
	print("\n----------------------------------------------------------");

	print("\n\n");
}

void github() {
	print("\nVisit the github repository at: ");
	print("\nhttps://github.com/WinsDominoes/kernel");
	print("\nThe repo would be updated with the newest release");
	print("\nEvery Week (or less)");
	
	print("\n\n");
}

void compile() {
	print("\n--------------------------------------------------");
	print("\nCompiling the Kernel");
	print("\nOn Debian / Ubuntu Distros: ");
	print("\n1. Clone the repository");
	print("\n'git clone https://github.com/WinsDominoes/kernel'");
	print("\n2. Install the following packages");
	print("\nbuild-essential, xorriso, nasm, qemu (for emulation)and make (if not installed)");
	print("\n3. Compiling the kernel part :D");
	print("\ndo 'make', which will compile the kernel and start up QEMU");
	print("\n3.1 Compiling and make the ISO image");
	print("\ndo 'make build', which will make an iso called 'winos-release.iso'");

	print("\n\n");
}

void kernel() {
	print_colored("\nWin's Simple Kernel, version: ",14,0);
	print_colored(ver,4,0);
	print("\n");
}
