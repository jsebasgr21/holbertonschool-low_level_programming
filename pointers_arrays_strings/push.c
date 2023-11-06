ADD = git add .
COM = git commit -m
PUSH = git push

all:
	$(ADD)
	$(COM) cambio
	$(PUSH)
