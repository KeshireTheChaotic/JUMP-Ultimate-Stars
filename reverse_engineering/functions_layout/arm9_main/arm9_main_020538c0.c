
int FUN_020538c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x80);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      param_1[1] = 0;
      *(undefined4 *)(iVar2 + 0x78) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x7c) = 0;
    }
  }
  return iVar2;
}

