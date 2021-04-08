

all: compiler.l 
	flex compiler.l
	yacc -d -v compiler.y
	gcc lex.yy.c y.tab.c symbols.c assembly.c -o compiler 

debug: compiler.l 
	flex compiler.l
	yacc -d -v compiler.y
	gcc -g lex.yy.c y.tab.c symbols.c assembly.c -o compiler 

test: compiler_debug.l
	flex compiler_debug.l
	gcc lex.yy.c -o compiler_debug

clean: 
	rm -rf compiler_debug compiler y.tab.c lex.yy.c y.tab.h symbols.o assembly.o
