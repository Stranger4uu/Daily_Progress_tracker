void main(){

  print(10/3);
  print(10~/3); // Truncating division (~)
  // 10/3 = 3.333 => 3
  print(10/0);

  try{
    print(10~/0);

  }
  catch (e){
    print(e);
  }finally{
    print('This bllock will executed for sure');
  }
  
  print('Yash');
}