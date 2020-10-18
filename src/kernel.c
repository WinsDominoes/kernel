#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
	isr_install();
	clearScreen();
	print("\n");
	print("Starting WinOS...\n");
	print("\n"); 
	print_colored("------------------------------------------------------\n",2,0);
	print_colored("# WinOS Operating System\n", 14,0); 
	print_colored("# based on github.com/iknowbrain/NIDOS \n",9,0);
	print_colored("# Licensed under the GNU General Public License v3.0\n \n",3,0);
	print_colored("# Modified By Win's Dominoes :D\n",14,0);
	print_colored("------------------------------------------------------\n",2,0);
	print("\n");
    launch_shell(0);    
}
