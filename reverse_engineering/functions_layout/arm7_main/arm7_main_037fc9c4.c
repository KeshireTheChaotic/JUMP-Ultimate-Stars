
int FUN_037fc9c4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 100);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      param_1[1] = 0;
      *(undefined4 *)(iVar2 + 0x5c) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x60) = 0;
    }
  }
  return iVar2;
}

