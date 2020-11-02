def chkA(arrA, idx_a, tofind, change):
  if(idx_a == len(arrA)):
    return 0
  while(arrA[idx_a] < tofind and idx_a < len(arrA)-1 ):
    idx_a += 1
  if(arrA[idx_a] == tofind):
    return change
  return 0

if __name__ == '__main__':

  # i1 = list(map(int, input().split()))
  
  [n, m] = list(map(int, input().split()))
  arall = list(map(int, input().split()))
  arall = sorted(arall)
  ara = list(map(int, input().split()))
  ara = sorted(ara)
  arb = list(map(int, input().split()))
  arb = sorted(arb)
  sum = 0
  idx_a = 0
  idx_b = 0
  for i in range(n):
    # print("i = "+str(i))
    tofind = arall[i]
    sum += chkA(ara,idx_a,tofind, 1)
    sum += chkA(arb,idx_b,tofind, -1)
    
    # print(arall[i])
  print(sum)
  exit()

  # for i in range(len(s)):
  #   arr = arr + [s[i:]]
  # arr = sorted(arr)
  # print (arr[num-1])

  exit()
