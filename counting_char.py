ch="apple is a fruit"
count=0
n=len(ch)
for i in range (0,n):
  if(ch[i]!=' ' and ch[i]!='\0'):
    count=count+1
print count
