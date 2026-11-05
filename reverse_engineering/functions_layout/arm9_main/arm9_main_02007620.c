
int FUN_02007620(short *param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    sVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return iVar2;
}

