notDefault:
	@echo "No arguments"
compile runme: main.o schedule.o control.o
	@gcc -o runme main.o schedule.o control.o
main.o: main.c
	@gcc -c main.c
schedule.o: schedule.c
	@gcc -c schedule.c
control.o: control.c
	@gcc -c control.c
run: runme
	@./runme
clean:
	rm *.o
	rm runme
