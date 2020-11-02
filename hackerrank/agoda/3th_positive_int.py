def procVal(ansList, val):

  if(ansList[0] == val or
    ansList[1] == val or
    ansList[2] == val ):
    return

  if(val > ansList[2]):# ignore them.
    return
  if(val > ansList[1]):# < 2 , > 1
    ansList[2] = val
    return
  if(val > ansList[0]):# < 1 , > 0
    ansList[2] = ansList[1]
    ansList[1] = val
    return
  ansList[2] = ansList[1]
  ansList[1] = ansList[0]
  ansList[0] = val
  return

if __name__ == '__main__':
  n1 = int(input())
  for i in range(n1):
    pAll = list(map(int, input().split()))
    pArr = pAll[2:]
    # print (pArr)
    ans = [2000]*3 # 0-2
    for j in pArr:
      if(j < 0):
        continue
      procVal(ans, j)
      # print(i)
    # print(ans)
    if(ans[0] == 2000 or
      ans[1] == 2000 or
      ans[2] == 2000 ):
      print(str(i+1) + " na")
      continue

    print( str(i+1) + " " + str(ans[2]))#result right?
    
  exit()
