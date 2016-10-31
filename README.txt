   _____ _             _     
  / ____| |           | |    
 | |  __| |_   _ _ __ | |__  
 | | |_ | | | | | '_ \| '_ \ 
 | |__| | | |_| | |_) | | | |
  \_____|_|\__, | .__/|_| |_|
            __/ | |          
           |___/|_|          


Welcome to the Glyph interpreter and compiler!!!

DOC

Glyph works with a continous array of 256 uint8 that is used as memory
You can acces only one memory case at the time

+: Add one to the current memory case
-: Substract one to the current memory case
.: Print the content of the memory case as a character
[: Loop while the content of the current memory is not 0
]: End loop, this is where the condition is checked
~: Load the next char into current memory case
<: Go back one memory case
>: Go to the next memory case
=: Go to the memory case number of the next character
?: Load an input into the current memory case
': Same as '?', to be brainfuck compatible
To be continued...

FAQ

I get "'g++' is not recognized as an internal or external command." error. Is it normal?
	Yes, to use the compile function, you will need g++ to compile.
	On Windows: download MinGW at "https://sourceforge.net/projects/mingw/?source=typ_redirect" and be sure to check g++
				Don't forget to add "C:\MinGW\bin" to your path environment variables then reboot
	On Linux: I think you can get it working alone
	On Mac: Too bad...

How to run .gly scripts?
	1. cd your way to glyph install folder (where glyph.exe is)
	2. run "glyph.exe <script.gly>" (where script.gly is your script file)
	2. Tada, you now have ran a script!!!
	
How to run samples?
	1. Follow steps of 'How to run .gly scripts?' but give it a sample's path
	eg. glyph.exe samples\alphabet.gly
	
How to compile a script?
	1. Follow step 1 of 'How to run .gly scripts?'
	2. run "glyph.exe -c <out> <script.gly>" (where script.gly is your script file 
		and out the name of the compiled file)
