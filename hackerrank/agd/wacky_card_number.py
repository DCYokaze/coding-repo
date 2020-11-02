if __name__ == '__main__':
  n1 = int(input())
  for i in range(n1):
    # print(i)
    # get the X
    the_x = []
    for row in range(5):
      rx = input().split(" ")
      idx_rx = 0 # start from 0
      for s in rx:
        if(s == 'X'):
          the_x.append([idx_rx, row])
        idx_rx += 1
    # for allxy in the_x:
    # print(the_x)

    the_table = [] # this contain all X of each table
    print("Dataset "+str(i+1))
    if(len(the_x) == 0):
      print("")
      continue
    # get the problem
    n2 = int(input())
    for j in range(n2):
      this_table = [None]*5 # 0-2
      this_table[0] = []
      this_table[0].extend (list(map(int, input().split())))
      this_table[1] = []
      this_table[1].extend (list(map(int, input().split())))
      this_table[2] = []
      this_table[2].extend (list(map(int, input().split())))
      this_table[3] = []
      this_table[3].extend (list(map(int, input().split())))
      this_table[4] = []
      this_table[4].extend (list(map(int, input().split())))

      table_row = []
      for [x,y] in the_x:
        memb = int(this_table[y][x])
        table_row.append(memb)
      # print("____________")
      table_row = (sorted(table_row))
      #check if the same here.
      idx = 1
      for k in the_table:
        if (k == table_row):
          print(str(j+1)+ " => "+str(idx))
          break
        idx+=1

      the_table.append(table_row)
      # print(table_row)
    # start compare and print =>
    print("")
    

  exit()

  # arall = list(map(int, input().split()))