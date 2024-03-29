# C-Programming

/INTRODUCTION 

	The C language is a structured, modular, compiled, general-purpose
	language traditionally used for systems programming.

	VOLUME I: USER'S GUIDE

		Ch1:	Before You Begin.
		Ch2:	Getting started.
		Ch3:	Putting It All Together - Compiling and Running Your Program
		Ch4: 	Debugging Your Program 
		Ch5:	C Integrated Development Enviroment
		Ch6:	Programming in C
		Ch7:	More Programming in C
		Ch8: 	C's Video Function
		Ch9:	Notes for Turbo Pascal Programming
		Ch10:	Inteferfacing C with Turbo Prolog
		Ch11:	C Language Reference
		Ch12:	Advanced Programming in C

	VOLUME II: C'S REFERENCE GUIDE

		Ch1:	Using C Library Routines
		Ch2:	The C Library
		
		Appendix A:	The C Interactive Editor
		Appendix B:	Compiler Error Messages
		Appendix C:	Command-Line Options
		Appendix D:	C Utilities
		Appendix E:	Language Syntax Summary
		Appendix F:	Customizing C
		Appendix G;	MicroCalc

	TYPOGRAPHIC CONVENTION


		Monospace Type		Anything you must type(such as a command-line options or switches)
		
		[]			Square Brackets DOS Command lines enclose optional input or data.

		<>			Angle Brackets	DoS Command lines enclose optional input or data.

		Boldface		Function names and Structure names are shown in boldface when they
					appear in text.

		Italics 		Indicate Variable names.

		Keycaps			Indicate a key in your keyboard.

/CHAPTER 1:	BEFORE YOU BEGIN


	- THE README FILE

	- THE HELPME!. DOC FILE

	- INSTALLING C ON YOUR SYSTEM
	
		8087/80287
	
	- IF YOU ARE INSTALLING C ON A FLOPPY-DISK OR CD

	- RUNNING INSTALL

		INSTALL

		1. Insert the distribution disk labeled Installation Disk in Drive A.
		2. Type A: amd press Enter.
		3. Type INSTALL and press ENter.

	- SETTING UP C ON A LAPTOP SYSTEM

		MODE BW80

	- MICROCALC

	- PROGRAMMING LEARNING C

	- EXPERIENCED C PROGRAMMERS

	- TURBO PASCAL PROGRAMMERS

	- TURBO PROLOG PROGRAMMERS

/CHAPTER 2:	GETTING STARTED

	PROGRAM.C: Building and Running a Single-File Program
	
		STEP 1: LOAD TC

			0x6E	Specify the directory with TC in it by using DOS PATH command.

			0x6E	Type the path name to directory

				\TURBOC\TC.

		STEP 2: Choose the Working Diectory 

			Choose the drive and directory that contain the program.c, the source
			file you want to load.
			
		STEP 3: Set Up Your Working Environment

			C:\TURBOC\INCLUDE;C:\TURBOC\INCLUDE\SYS

			and press ENTER.

		STEP 4: Load the Source File into the Editor

				/* Hello.c -- Hello, World */
				#include <stdio.h>

					main(){
	
 					printf("Hello, World\n");

				}



			tc program /cmyconfig


		STEP 5: Build the Executable File

			When you build a program, you first comple the source code to create a 
			object file(a machine code file with an .OBJ extention). Then you send the
			object file to the linker to be converted to an executable file with a
			.EXE extension. The linker copies into your object file certain necessary
			subroutines from the standard run-time library files.

		STEP 6: Run the Program

				hello, world

	What Have you Accomplished?

		HELLO C	  104	29-11-21
		HELLO OBJ 458	29-11-21
		HELLO EXE 8884	29-11-21


	EDITING YOUR PROGRAM

		#include <stdio.h>

		main(){
			char name[150];
			printf("What's your name?\");
			scanf("%s",name);
			printf("Hello, %s\n",name);
		}

	If You Did Something Wrong

		An Error

		A mistake in your program that prevents C from compiling it to make object code.

	Sending Your Output to a Printer


		#include <stdio.h>

		main (){

			fprintf(stdprn, "Hello, World\n");
		}

	Writing Your Second C Program

		#include <stdio.h>

		main(){
			int a,b,sum;	
			printf("Enter two numbers: ");
			scanf("%d %d", &a, &b);
			sum = a + b;
			printf("The sum is %d \n",sum);
		}
		
			- replace the line defining name with one defining other variables
			  (a,b and sum, all integer)
		
			- changed the message in the printf statement

			- changed the format string and variable list in the scanf statement

			- added the assigment statement sum = a + b;

			- changed the format string and argument list in the final printf statement

	Writing to Disk

			sum.c

	Running SUM.C
			
			Enter two numbers:
			
/CHAPTER 3 : Putting It All Together - Compiling and Running Your Program

		Building Files in TC, Revisited

		1. Set directory options so the compiler and linker know where to find and store things.
		2. Load the program you want to build into the C Editor.
		3. Build the executable program file.

		DEBUGGING your PROGRAM 

		Finding and fixing errors in your programs during compile-time and run-time levels.		
		
		Catching Syntax Errors: THe Error-Tracking Feature


		#include <stdio.h>

		main(){

 			printf("Hello, World\n");

		}

		THE MESSAGE WINDOW 

		CORRECTING A SYNTAX ERROR

		Catching Run-Time Errors: The Integrated Debugger

		PROJECTS: USING MULITIPLE SOURCE PROGRAMS

			#include <stdio.h>

			main(int argc, char *argv[]);
			{
				char *s;
	
				if (argc 1)
					s= argv[1];

				else
					s="the universe";

					printf("%s %s.\n", GetString(),s);
	
			}		


			char ss [] = "The restuarant at the end of ";

				char *GetString(void){

					return ss;
			}

			mymain
			myfuncs


		Building a Multi-Source File Program

			(Run/Run)

		Error Tracking Revisited


			MYMAIN.C
			MYFUNCS.C

		Stopping a Make
			
			Project-Make 

			Ctrl-Break

			Project/ Break Make On menu toggle.
			
		Syntax Errors in Multiple Source Files

			To demostrate errors in multiple files, set
			Project/ Break Make On to Fatal Errors.
				
			Alt-P

		Keeping and Getting Rid of Messages

			Keep Messages toggle int the Options/Environment menu.
			
			Project/Remove Messages.
			Project/Clear Project 

		The Power of Project-Make


			MYMAIN.OBJ	is dependent on MYMAIN.C
			MYFUNCS.OBJ	is dependent on MYFUNCS.C
			MYPROG.EXE	is dependent on MYMAIN.OBJ, MYFUNCS.OBJ, and 
					MYPROG.PRJ


		Explicit Dependencies

			MYMAIN.C (MYFUNCS.H)
			MYFUNCS	 (MYFUNCS.H)

			MYMAIN.C (MYFUNCS.H, YOURS.H, OTHER.H)

		Autodependency Checking

			Project/Auto Dependencies switch in the integrated enviroment.
			
			
		What? More Makes Features?	
	
			- You can specify external object and library files to be
				linked into your project

			- You can override the standard startup files and libraries

		External Object and Library Files	

			MYMAIN   (MYFUNCS.H)
			MYFUNCS  (MYFUNCS.H)
			SPECIAL.OBJ
			OTHER.LIB

		Overriding the Standard Files

			To override the startup file, you must place a file called
			C0x.OBJ as the first name in your project file-
			where x stands for any DOS name
			
			Ex

				C0MINE.OBJ

			What's critical is that the name starts with "C0"

		Compiling and Linking from a Command Line


			-c option at the command line


		The TCC Command Line

			tcc [option option option ...] filename filename ...

		Options on the Command Line


			filename 	compile filename.c
			filename.c 	compile filename.c
			filename.xyz	compile filename.xyz
			filename.obj	include as object at link time
			filename.lib	include as library at link time
			filename.asm	invoke TASM to assemble to .OBJ

		The Executable File

			The executable program is given that first file name with
			the .EXE extension.

		Some Sample Command Lines

			DOS Command Line:

			tcc -IB:\include -LB:\lib -etest start.c body.obj end
 
			· The include directory is B:\INCLUDE 				(-IB:\include)
			· The libraries are in the B:\LIB directory 			(-LB:\lib)
			· The executable result should be placed in a file called 	TEST.EXE(-etest)

			· A source file called START.C to be compiled
			· An object file called BODY.OBJ to be included at link time
			· Another source file called END.C to be compiled

			tcc -IB:\include -LB:\lib2 -mm -C -K s1 s2.c z.asm mylib.lib

			· The include directory is B:\INCLUDE 		(-IB:\include)
			· The libraries are in the B:\LIB2 directory 	(-LB:\lib2)
			· Use the Medium memory model 			(-mm)
			· Allow nested comments				(-C)
			· Make chars unsigned				(-K)
			
			· The source files called S1.C and S2.C are to be compiled
			· The file Z.ASM to be assembled 		(Using TASM)
			· The executable file will be named S1.EXE
			· The library file MYLIB.LIB is to be linked in at link time.

		The TURBOC.CFG File

		The TCCONFIG.EXE Conversion Utility for Configuration Files

			TCCONFIG SourceFile [DestinationFile]

			TCCONFIG automatically determines the direction of the conversion:


		The MAKE Utility 
			
			MAKE utility a more powerful version of Project Make, permits you
			to describe source and object file dependencies.The MAKE utility 
			evaluates those dependencies to ensure that files are correctly
			compiled and linked.

		BUILTINS.MAK

			BUILTINS.MAK is an optional file in which you can store MAKE 
			macros and rules to use again and again.

		Running C Programs from the DOS Command Line

		Moving Ahead with C

/CHAPTER 4 DEBUGGING YOUR PROGRAM 

		A program almost always contains numerous bugs - errors in design and coding -
		that must be identified and fixed. Finding and fixing a programs bugs is called
		debugging.


		How the Integrated Debugger Works

		rptr-> imagep[nptr+0x80]

		· display the value of a variable or expression
		· set up a list of expressions in a special window and observe how their values changes.
		· change the value of a variable
		· clear existing breakpoints or set new ones
		· run the program one line at a point
		· edit files, recompile and relink the program, or use any other feature of C menu system.
		· make the program continue running until it encounters another breakpoint.



		Type Steps in the Debugging Process


								-----------------
							       | Write or modify |
							       | prograg	 |	
								-----------------
									|
			 ----------------->-----------------------------|
			|		  |				|
			|		  |				|
			|	    -----------				|
			|	   |  Fix bugs |	         ---------------
			|	    -----------			|     Make	|
			|		  ^			| (compile and  |
			|		  |			| link) program |
			|		  |			 ---------------		  
			|		  |				|
			|		  |				|
			|		  |  				|
			|		  |			     /     \
			|		  |			    /       \	
			|		  |    			   /Compiler \
			|		  |		Yes    	  /  and/or   \
			|		  |			 /linker errors\
			|		   ----------------------\             /
			|					  \ 	      /
    			|						|
			|						| No 
			|					  --------------
			|					 | Set ir change|
			|					 | breakpoints  |
			|					  --------------
			|						|
			|						|
			|					  -------------
			|					 | Run Program |
			|					  -------------	
			|						|
     			|						|
			|		 			    /       \	
			|		   			   /	     \
			|		  			  / Run - time\
			|		    ----	NO	 /  Errors     \
			|		   |Stop|----------------\             /
			|		    ----		  \ 	      /
			|						|
			|						| Yes
			---------					|
		       | Fix bugs|		      		   -------------
			---------				  |Debug Program|
								   -------------
6/12/21			
		Setting and Using a Breakpoint

			When we observe a malfunction, you can run through the first part of main
			and stop when you reach the suspicious part. To accomplish this you must set
			a breakpoint on the line where you want to stop.

			while( fgets ( ....	
		
		Using Ctrl-Break

			You can have an "instant" breakpoint during execution: Ctrl-Break.		

					Ctrl-Break


		Stepping Over Functions Calls
			
			Warning! Tracing into or stepping over a call to the library function
			longjmp will not stop at the next line.



		Evaluating an Expression

			Debug/Evaluate.

				1. The Evaluate field: Here you enter the expressaion you want to evaluate
				   and possibly modify.

				2. The Result field: Here the debugger displays the expression's value.
	
				3. The New Value field: Here you enter the new value you want the
				   expression to have(optional).

					The debugger should display

					To be or not to be: that is the question. \n

				\n represents a newline character.

		The nextword and wordlen Functions

			nextword: A function that locates the next word in a string.

			wordlen : This function determines the length of the word.


		Stop and Think


			+=i


		What You've Accomplished

		
			· ensured that the Debug/Source Debugging and 0/C/C/OBJ Debug
			  information toggles are set to On

			· selected Compile/Build All to prepare WORDCNT for debugging

			· Used editor comands to move the cursor to the suspcious part
			  of WORDCNT; selected Break/Watch/Toggle Breakpoint to set a 
			  breakpoint there; selected Run/Run to Run WORDCNT up to the 
			  breakpoint

			· Used Run/User Screen or its hot key Alt-F5 to inspect your 
			  program output on the User Screen.

			· Selected Run/Step Over to run the statements in main, one line
			  at a time.

			· Selected Debug/Evaluate to display the values of several variables

			· thought about the bug you found, and concluded that it explains
			  WORDCNT's observed misbehavior and so warrants immediate correction


		The Default Expression in the Evaluate Window

			if( linebfr[i-1] != '\n')

		Changing the Value if an Evaluated Expression

			· function calls

			· defined or type-defined symbols or macros (*wordptr == 0x20 is OK;
			  *wordptr == SPACE is not OK, since SPACE is defined)

			· local or static variables not in the scope of the function being
			  executed, unless they are fully qualified.


		Qualifying Variable Name

			· To examine static variables in another module, use:
			
			· .<module name>.<variable name>

			· To examine local variables in a global function, use:
		
			· .<function name>.<variable name>

			· To examine local variables in a static function, use:

			· .<module name>.<function name>.<variable name>

			To watch the local variable b in function main use:

				main.b
	
			To watch the local variable c in function myfunc use:

				myfunc.c

			To watch the local variable d in the static function localfunc ,use:

				.module2.localfunc.d

			To watch the static variable e in MODULE2, use

				.module2.e

		Format Specifiers

			list: { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100}

			list[5],3: 60,70,80


			Debugging Format Specification
______________________________________________________________________________________________________________________

			Character		Function

______________________________________________________________________________________________________________________
			
			C			Character. Shows special display character for control
			
			S			String. Shows control characters
			
			D			Decimal. All integers are displayed in decimal.

			H or X			Hexadecimal. All integers values are diplayed in
						hexadecimal with the 0x prefix.
						
			F<n>			Floating-point. n is an integer between 3 and 18 specifing
						the number of significant digits to display.

			M			Memory dump. Displays a memory dump, starting with the 
						address of the indicated expression.
			
			P			Pointer. Displays pointers in seg:ofs format with addition 	
						information about the address pointed to.


			___________________________________________________________________________________

			Memory Region 		Evaluate Message
			
			___________________________________________________________________________________

			0000:0000 - 0000:03FF	Interrupt vector table
			0000:0400 - 0000:04FF	BIOS data area
			0000:0500 - Turbo C 	MSDOS/TSR's
			Turbo C - User Program PSP Turbo C
			User Program PSP 		User Process PSP
			User Program - top of RAM	Naming of a static user
							Variable if its address
							falls inside the variable's
							allocated memory; otherwise 
							nothing
			A000:0000 - AFFF:FFFF	EGA Video RAM
			B000:0000 - B7FF:FFFF  	Monochrome Display RAM
			B800:0000 - BFFF:FFFF 	Color Display RAM
			C000:0000 - EFFF:FFFF	EMS Pages/Adaptor BIOS ROM's
			F000:0000 - FFFF:FFFF	BIOS ROM's
			___________________________________________________________________________________			

			R			Struture/Union. Displays field names as well as values,
						such as {X:1, Y:10, Z:5}, Affects only structures and unions.
__________________________________________________________________________________________________________________

			Priority and Defaults in Format Specifier Classes			

			___________________________________________________________________________________

			Type 		Specifiers in Order		Default
					of Priority
			___________________________________________________________________________________

			char		CSHD				S
			unsigned char	CSHD				S
			int		HDC*S*				D
			unsigned int	HDC*S*				D
			long		HDC*S*				D
			unsigned long 	HDC*S*				D
			char ptr	CSPH				S
			other ptr	PH				P
			enum		HDC*S*				D( followed by member name)
			float		Fn				F7
			double		Fn				F15
			long double	Fn				F18
			arrray of char	CSHD				S
			other array	elements enclosed in braces{} and separated by commas
			structure	R				______

			* character type format specifiers will be accepted only for values
			  that fall within the appropriate range( -128 to 127 for signed types and 0
								to 255 for unsigned type).
__________________________________________________________________________________________________________________
	
			6/12/21						
			___________________________________________________________________________________

			Evaluate 		Result
					
			___________________________________________________________________________________

			list			{ 0, 10, 20, 30, 40}
			list[2],3		20, 30, 40
			list[2],3x		0x14, 0x1E, 0x28
			list,m			00 00 0A 00 00 14 00 1E 00 28 00
			ptr			DS:0198
			ptr,p			DS:0198 [_list]
			*ptr,3			0, 10, 20
			client			[ 5000, "Nxumalo\0\0\0\0\0"}
			client,r		{ account:5000, name:"Nxumalo\0\0\0\0\0" }
			___________________________________________________________________________________


		Fixing the Bug

			To fix the bug, all you need to do is change the & to &&.
			
			Run/Run

		What You've Accomplished.

			You have cancelled your first debugging  session with Run/Program Reset
			or it's hot key, Ctrl-F2.

		More about Breakpoints	
			
			· leave the integrated enviroment
			· delete the lines they are set on in the source file
			· clear them all by choosing Break/Watch/Clear All Breakpoints

			However C will lose track of its breakpoints in two cases:

			· If you edit a file that contains breakpoints, then abandon(fail to save) the
			  edited version of the file

			· If you edit a file and then continue the current debugging session, or start a new 
			  session without recompiling and relinking.

		Editing and Deleting Watch Expressions

			Home, End, Up Arrow and Down Arrow Keys

			Break/Watch/Edit Watch (or press Enter)

			Watch/Delete Watch
			
			Press F6 to activate Edit Window

			Break/Watch/Remove All Watches

			Press F6 to reactivate Edit Window

		Zooming and Switching Windows

			· When the Edit window is active, the fiel loaded just before the current file is reloaded.

			· If the Watch Window or Message Window is active, pressing Alt-F6 toggles between the 
			  Watch editor and the Message tracking window.

		Finding the Definition of a Function

			Debug/Find Function

			Debug/Source Debugging and O/C/C/OBJ Debug Information toggles set to On.
	
			Debug/Find Function
	
					
