all: re vargs date-time

CFLAG = -Wall -Werror

re: regular-expression.cc
	g++ -o $@ $^ $(CFLAG)

vargs: variable-arguments.c
	gcc -o $@ $^ $(CFLAG)

date-time: date-and-time.c
	gcc -o $@ $^ $(CFLAG)

check:
	@echo

distcheck:
	@echo

clean:
	@rm -vf re vargs date-time
