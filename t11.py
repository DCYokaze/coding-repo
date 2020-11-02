if __name__ == '__main__':
  num = input()
  acc = []
  for n in range(int(num)):
    s = input()
    acc = acc+[s]

    acc_len = len(acc)
    count = 0
    for i in range(acc_len):
      if(acc[i]<s):
        count+=1
    print(count)
  exit()
