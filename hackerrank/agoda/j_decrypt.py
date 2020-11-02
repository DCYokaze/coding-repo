if __name__ == '__main__':
  n1 = int(input())
  for i in range(n1):
    prob = input()
    trans = [0]*300
    n2 = int(input())
    for j in range(n2):
      [x,y] = input().split(" ")
      textLen = len(x)
      k=0
      while k < textLen:
        # print(ord(x[k]))
        # print( x[k] +"  =  "+ y[k])
        trans[ord(x[k])] = ord(y[k])
        k+=1
    
    # try to decrypt
    ans=""
    for j in range(len(prob)):
      # print(ans)
      if(ord(prob[j]) > 90 or ord(prob[j]) < 65):
        ans += prob[j]
        continue
      if(trans[ord(prob[j])] == 0):
        ans = "CANNOT DECODE"
        break
      ans = ans + chr(trans[ord(prob[j])])
    print(str(i+1)+" "+ans)
    
  
  # for i in range(len(trans)):
  #   print(trans[x])
  exit()
