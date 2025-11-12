# --- Variáveis ---

# Compilador que queremos usar (GNU C Compiler)
CC = gcc

# Flags do compilador:
# -Wall: Mostra todas as advertências (warnings)
# -g:    Inclui informações de debug (para usar com gdb)
# -std=c11: Usa o padrão C de 2011
CFLAGS = -Wall -Wextra -g -std=c11

# Nome do programa executável que queremos criar
TARGET = calculadora

# Lista de todos os arquivos fonte .c
# A função $(wildcard *.c) pega todos os arquivos que terminam em .c
SRCS = $(wildcard *.c)

# Lista de arquivos objeto .o
# Isso transforma "main.c soma.c" em "main.o soma.o"
OBJS = $(SRCS:.c=.o)

# --- Regras ---

# Regra principal (default): o que fazer quando você digita "make"
# Ela depende que o $(TARGET) seja construído
all: $(TARGET)

# Regra de Linkagem: Como criar o executável final
# Depende de todos os arquivos objeto (.o)
# Se qualquer .o mudar, esta regra é executada
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regra de Compilação: Como criar um arquivo .o a partir de um .c
# Esta é uma regra de padrão. $< é o arquivo .c, $@ é o nome do .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regra de Limpeza: O que fazer quando você digita "make clean"
# Remove todos os arquivos gerados (objetos e o executável)
clean:
	rm -f $(TARGET) $(OBJS)