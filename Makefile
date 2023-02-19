probar:ProBar.c  Main.c
	@gcc ProBar.c Main.c -o probar


.PHONY:clean
clean:
	@rm -f probar
