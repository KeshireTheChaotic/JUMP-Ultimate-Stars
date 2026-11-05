
undefined4 FUN_0205cecc(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = FUN_020575a4();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_02057624(param_1);
  uVar2 = iVar1 - 1;
  iVar1 = param_1 + (*(int *)(param_1 + 0x38) + param_2) * 4;
  bVar5 = param_2 < uVar2;
  if (bVar5) {
    uVar2 = *(uint *)(iVar1 + 0x40);
  }
  iVar1 = *(int *)(iVar1 + 0x3c);
  if (!bVar5) {
    uVar2 = *(uint *)(param_1 + 8);
  }
  iVar4 = uVar2 - iVar1;
  if (param_4 == 0) {
    return 0;
  }
  iVar3 = FUN_0205cc44(param_4,iVar4 + 0x20,FUN_0205cfac,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar1 = FUN_0205c3e4(param_3,iVar3,iVar4,iVar1);
  if (iVar4 == iVar1) {
    DC_StoreRange(iVar3,iVar4);
    FUN_020575ec(param_1,param_2,iVar3);
    return 1;
  }
  return 0;
}

