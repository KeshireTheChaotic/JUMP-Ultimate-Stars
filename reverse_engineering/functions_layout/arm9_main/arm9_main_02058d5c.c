
int FUN_02058d5c(undefined4 param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_02058060();
  iVar3 = FUN_02057f40(5,7,9,8);
  if (iVar3 != 0) {
    return iVar3;
  }
  sVar1 = **(short **)(iVar2 + 4);
  if ((sVar1 == 7) || (sVar1 == 9)) {
    if ((param_2 == 0) || (0xf < param_2)) {
      return 6;
    }
    DC_InvalidateRange(*(short **)(iVar2 + 4) + 0xc1,2);
    if (((uint)*(ushort *)(*(int *)(iVar2 + 4) + 0x182) & 1 << (param_2 & 0xff)) == 0) {
      return 7;
    }
  }
  else if (param_2 != 0) {
    return 6;
  }
  FUN_02058214(0xd,param_1);
  iVar2 = FUN_020580e8(0xd,1,1 << (param_2 & 0xff));
  if (iVar2 == 0) {
    iVar2 = 2;
  }
  return iVar2;
}

