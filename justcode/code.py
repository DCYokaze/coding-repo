import sys

numOfProb = int(input())
pNum = 0
while pNum < numOfProb:
  [a,b,k1,k2,m] = map(int,input().split())

  prStr = str(a) + " " + str(b) + " " + str (k1) + " " + str (k2) \
     + " " + str (m)
  print(prStr)
  #   [a,b,k1,k2,m] = int([a,b,k1,k2,m])
  #   x = 0 - (10**5-1)
  fx = (10**5)/2 #init search value
  foundVal = 0
  x = fx
  x_min = 1
  x_max = 10**5 #-1
  
  last_x = 0


  immortal = a*(x_max**k1) + b*(x_max**k2)
  print ("immortal = {}".format(immortal))
  
  #case that valid x is too high
  if( m > immortal ):
    x = -1
    foundVal = 1

  # if(immortal)
  while foundVal == 0:
    
    x = (x_min + x_max)//2
    x = int(x)
    print("x_min = {} , x_max = {}".format(x_min,x_max))
    print("x = {}".format(x))
    # if(last_x == x):
    #   foundVal = 1

    #calculate this every loop
    h = a*(x**k1) + b*(x**k2)
    print("h = {}".format(h))


    if h > m :
      x_max = x_max/2
      # x = x/2
    elif h < m :
      x_min = x_min*2
      # x = x*2
    else:
      foundVal = 1
    # last_x = x

    if(x_max - x_min < 10):
      # lix = [x_min:x_max]
      for i in range(int(x_min),int(x_max)):
        h = a*(i**k1) + b*(i**k2)
        print("inloop {}".format(i))

        if h < m :
          continue
        elif h > m:
          x = i-1
          break
        else:
          x = i
          break
      break

    if(x_max < x_min):
      # print("x_max < x_min")
      x = -1
      foundVal = 1

  # print("test")
  # print("result = {}".format(x))
  print ("the ans is ", end = "")
  if( x == -1 ):
    print("Love is immortal")
  else:
    print(x)

  pNum += 1 

# Love is immortal
# Love is immortal
# 89
# 409
# 2742
# 744
# 41
# 67
# Love is immortal