
undefined4 FUN_021cef50(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (DAT_021d6710 != 2) {
    bVar1 = *(byte *)(param_1 + 8);
    if (bVar1 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1 << (uint)bVar1;
    }
    if ((DAT_021d66d8 & uVar4) == 0) {
      return 0;
    }
    DAT_021d6710 = 2;
    DAT_021d671c = 0;
    DAT_021d6714 = bVar1;
    iVar2 = FUN_021cf234(&DAT_021d6710,param_1);
    if (((iVar2 == -3) || (iVar2 == -2)) || (iVar2 == -1)) {
      DAT_021d6710 = 0;
      return 0;
    }
    iVar3 = FUN_021cf2fc(param_1,&DAT_021d6710);
    *param_2 = iVar3;
    param_2[1] = (int)&DAT_021d6710;
    *(int *)(param_2[1] + 0xc) = iVar2;
LAB_021cf01e:
    if (*param_2 == 10) {
      FUN_021cf3c4(1);
      uVar5 = OS_GetTick();
    }
    else {
      FUN_021cf3c4(0);
      uVar5 = 0;
    }
    DAT_021d66e0 = (undefined4)((ulonglong)uVar5 >> 0x20);
    DAT_021d66dc = (undefined4)uVar5;
    return 1;
  }
  if (DAT_021d6714 != *(byte *)(param_1 + 8)) {
    FUN_021cf3c4(1);
    return 0;
  }
  iVar2 = FUN_021cf234(&DAT_021d6710,param_1);
  if (iVar2 != -3) {
    if (iVar2 == -2) {
      *param_2 = 0xc;
      param_2[1] = 0;
      return 1;
    }
    if (iVar2 != -1) {
      iVar3 = FUN_021cf2fc(param_1,&DAT_021d6710);
      *param_2 = iVar3;
      param_2[1] = (int)&DAT_021d6710;
      *(int *)(param_2[1] + 0xc) = iVar2;
      goto LAB_021cf01e;
    }
  }
  return 0;
}

