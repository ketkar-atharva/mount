#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int bnsearch(int arr[],int str,int end){
   
if(str<=end){
   int mid= str+(end-str)/2;
   if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
      return mid;
   }
   if(arr[mid-1]<arr[mid]){
      return bnsearch(arr,mid+1,end);
   }else{
      return bnsearch(arr,str,mid-1);
   }
}
return -1;

 }



int main()
{
   int arr[]={0,2,3,5,6,1};
   int a=bnsearch(arr,1,4);
printf(" peak index of mountain array is %d , %d",a,arr[a]);

 return 0;
}