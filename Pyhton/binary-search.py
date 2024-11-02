def binary_search(myList, key):
  start = 0
  end = len(myList)-1
  
  while(start<= end):
    mid = (start+end)/2
    guess = myList[mid]
    
    if(guess == key):
      return mid
    elif(guess > key):
      end = mid -1
    else:
      start = mid + 1
    
    return None
  
def main():
    my_list = [1, 3, 5, 7, 9]
    
    print(binary_search(my_list, 7))
    
if __name__ == "__main__":
  main()