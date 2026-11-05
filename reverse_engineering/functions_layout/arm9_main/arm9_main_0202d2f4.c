
int FUN_0202d2f4(int param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (cVar1 == 'x') {
    return param_1 + 0x14;
  }
  if (cVar1 == 'y') {
    return param_1 + 0x30;
  }
  if (cVar1 == 'z') {
    return param_1 + 0x4c;
  }
  return 0;
}

