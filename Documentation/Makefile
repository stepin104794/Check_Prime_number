SRC = unity/unity.c\
src/check_prime_number.c\
test/test_check_prime_number.c\
main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = CHECK_PRIME_NUMBER.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html
