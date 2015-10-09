double solveRootPos(a, b, discriminant){
  double root2;
  if(discriminant>0){
    root2 = (-b + sqrt(discriminant))/(2*a);
  }
    
  else 
    printf("There is only 1 or no roots\n");
  return (root2);
}