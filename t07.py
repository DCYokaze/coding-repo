if __name__ == '__main__':
  num = input()
  for n in range(int(num)):
    [size, r] = input().split(" ")
    arr = input().split(" ")
    size = int(size)
    r = int(r)

    s1 = size - r

    #manage the s1
    while s1<0:
      s1+=size
    while s1>=size:
      s1-=size

    sn = s1
    while sn<size:
      print (arr[sn], end=" ")
      sn+=1
    sn = 0
    while sn < s1:
      print (arr[sn], end=" ")
      sn+=1
    print ('\n')



    # print (arr)
  # for i in val1:
  # for x in range(6): from 0 to 5
  exit()
