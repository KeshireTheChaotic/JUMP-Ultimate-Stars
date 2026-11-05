
bool FUN_0215e714(short *param_1)

{
  short sVar1;
  bool bVar2;
  
  sVar1 = param_1[1];
  bVar2 = sVar1 == 0;
  if (((!bVar2) && (*param_1 == 0xe)) && ((sVar1 == 9 || ((sVar1 == 0xd || (sVar1 == 0xf)))))) {
    bVar2 = true;
  }
  return bVar2;
}

