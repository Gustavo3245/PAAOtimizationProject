# Variáveis
CC = gcc
CFLAGS = -Wall -Wextra -g
# Lista de objetos (arquivos .o que serão gerados)
OBJ = main.o eft.o sjf.o
# Nome do executável final
TARGET = organizador_aulas

# 1. Regra principal: Liga os objetos para criar o executável
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# 2. Compilação do main.o (depende do types.h)
main.o: main.c types.h
	$(CC) $(CFLAGS) -c main.c

# 3. Compilação do algoritmo EFT
eft.o: eft.c types.h
	$(CC) $(CFLAGS) -c eft.c

# 4. Compilação do algoritmo SJF
sjf.o: sjf.c types.h
	$(CC) $(CFLAGS) -c sjf.c

# Limpeza dos arquivos temporários
clean:
	rm -f *.o $(TARGET)

# Atalho para compilar e rodar
run: $(TARGET)
	./$(TARGET)
