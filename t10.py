if __name__ == '__main__':
  num = input()
  for n in range(int(num)):
    s = input()
    # print (s[1])
    # print (len(s))
    len_s = len(s)
    isPal = 1
    for i in range(len_s):
      j=len_s-1-i
      if(i>j):
        break
      if(s[i]!=s[j]):
        isPal=0
        break
    if(isPal==1):
      print("YES ",end="")
      m = len_s%2#-(len//2)#divmod(len,2)
      if(m==0):
        print("EVEN")
      else:
        print("ODD")
    else:
      print("NO")



  exit()
