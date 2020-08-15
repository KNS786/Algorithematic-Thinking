def PeakFind(arr,key,size):
    if(size==0):
        return 0;
    mid=int(size/2);
    found=False;
    if(key==arr[mid]):
      for i in range(0,mid):
          if(arr[i]==key):
             return i;
      for j in range(mid+1,size):
          if(arr[j]==key):
              return j;

      if(found==False):
          return found;


arr=[10,20,30,40,590];
key=30;
c=PeakFind(arr,key,len(arr));
print(c);
