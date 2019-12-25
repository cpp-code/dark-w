all: re vargs

CFLAG = -Wall -Werror

re: regular-expression.cc
	g++ -o $@ $^ $(CFLAG)

vargs: variable-arguments.cc
	gcc -o $@ $^ $(CFLAG)

check:
	@echo

distcheck:
	@echo

clean:
	@rm -vf re vargs
