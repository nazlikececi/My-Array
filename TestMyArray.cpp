#include"MyArray.cpp"

int main(){
   double arr1[] = {1,2,3,4};
   MyArray myarr1(4,arr1);
   MyArray myarr2(8,2.5);
  
   cout<<myarr1<<endl;
   cout<<myarr2<<endl;
   MyArray myarr3(myarr1);
   cout<<myarr3<<endl;
  
   MyArray myarr4 = myarr3;
   cout<<myarr4<<endl;
}
