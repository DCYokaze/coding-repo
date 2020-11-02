if __name__ == '__main__':
  num = input()
  for n in range(int(num)):
    dim = int(input())
    a=[]
    for d in range(dim):
      # i1 = input().split()
      i1 = list(map(int, input().split()))
      a=a+[i1]
    # print(a)
    # print(a[0][0])
    # print(a[1][1])
    count = 0
    for i in range(dim):
      for j in range(dim):
        for k in range(i,dim):
          for l in range(j,dim):
            if(a[i][j]>a[k][l]):
              count+=1
    print(count)
  exit()
