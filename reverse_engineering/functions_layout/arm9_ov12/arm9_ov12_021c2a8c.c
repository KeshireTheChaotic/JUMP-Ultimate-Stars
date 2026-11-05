
undefined4 FUN_021c2a8c(int param_1,uint *param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_5[1];
  if (param_3 < param_5[1]) {
    iVar1 = param_3;
  }
  if (iVar1 < 2) {
    *param_2 = 0;
  }
  else {
    uVar2 = 0;
    if (0 < iVar1) {
      do {
        *(short *)(param_1 + uVar2 * 2) = (short)uVar2;
        uVar2 = uVar2 + 1 & 0xffff;
      } while ((int)uVar2 < iVar1);
    }
    *param_2 = uVar2;
    if (*(short *)(*param_5 + (iVar1 + -1) * 4) != -1) {
      FUN_021c2ae8(param_1,param_2);
    }
  }
  if ((int)*param_2 < 1) {
    return 0;
  }
  return 1;
}

