CC = gcc-11 -D COMPUTED_GOTO=0
FSANFLAG =# -fsanitize=address -fsanitize=alignment 
OPTFLAG = -g -O3 -flto -fjump-tables -march=native
STDFLAG = -std=c11
CFLAGS = $(STDFLAG) $(FSANFLAG) $(OPTFLAG) -pipe -I./src/include/chaos-pp
FILE_NAMES = error lex mem op core opdef sys

SRCDIR = src
TARGETDIR = target
OBJDIR = $(TARGETDIR)/obj
BINDIR = $(TARGETDIR)/bin
OBJ = $(addprefix $(OBJDIR)/,$(addsuffix .o,$(FILE_NAMES)))

build:
	@if [[ ! -e $(TARGETDIR) ]]; then mkdir $(TARGETDIR); echo created \'$(TARGETDIR)\' directory; fi
	@if [[ ! -e $(OBJDIR)/ ]]; then mkdir $(OBJDIR); echo created \'$(OBJDIR)\' directory; fi
	@if [[ ! -e $(BINDIR)/ ]]; then mkdir $(BINDIR); echo created \'$(BINDIR)\' directory; fi
	@rm -rf $(BINDIR)/*
	@make all $(SRCDIR)/main
	@mv $(SRCDIR)/main $(BINDIR)
	@if [[ -e $(SRCDIR)/main.dSYM ]]; then mv $(SRCDIR)/main.dSYM $(BINDIR); fi

run:
	@./$(BINDIR)/main $(f)

$(SRCDIR)/main: $(OBJ)

all: $(OBJ)

$(OBJ): $(OBJDIR)/%.o: $(SRCDIR)/%.c makefile
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -rf $(TARGETDIR)
