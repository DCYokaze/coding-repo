def proc(pInt):
  sum = 0
  idx = 0
  while(idx<pInt):
    sum += pInt[idx]
    sum += pInt[idx+1]
    idx += 2

if __name__ == '__main__':
  n1 = int(input())
  for i in range(n1):
    pLen = int(input())
    pInt = []
    while(len(pInt) < pLen):
      pInt.extend (list(map(int, input().split())))
    print(pInt)

  #proc pArr = pAll[2:]

    
  exit()
