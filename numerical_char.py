ch="apple123 123"
word=0
n=len(ch)
for i in range (0,n):
	if(ch[i]>='0' and ch[i]<='9'):
		word=word+1
print word
