if __name__ == '__main__':
  [s, num] = input().split(" ")
  num = int(num)
  # print (s)

  arr = []

  for i in range(len(s)):
    arr = arr + [s[i:]]
  arr = sorted(arr)
  print (arr[num-1])

  exit()
