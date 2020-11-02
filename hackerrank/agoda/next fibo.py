if __name__ == '__main__':
  n = int(input())
  for i in range(n):
    res = 1
    in_val = int(input())
    # print(in_val)
    toval = in_val
    while(toval > 1):
      if((toval%2) == 0):
        toval = toval/2
      else:
        toval = toval*3+1
      res += 1
    print( str(i+1)+ " " + str(in_val) + " " + str(res))
  exit()