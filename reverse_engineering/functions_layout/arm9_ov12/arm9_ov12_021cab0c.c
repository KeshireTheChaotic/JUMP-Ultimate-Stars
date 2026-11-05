
ushort * FUN_021cab0c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  iVar1 = FUN_021caa84(param_1,param_3,param_3,param_4,param_4);
  if (iVar1 == 0) {
    param_1 = (int *)*param_1;
    for (uVar3 = 0; uVar3 < *(ushort *)(param_1 + 2); uVar3 = uVar3 + 1) {
      puVar2 = *(ushort **)(*param_1 + uVar3 * param_1[1]);
      if (*puVar2 == param_2) {
        return puVar2;
      }
    }
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = (ushort *)*param_1;
    if (*puVar2 != param_2) {
      return (ushort *)0x0;
    }
  }
  return puVar2;
}

