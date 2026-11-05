
undefined4
FUN_0216458c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  ushort uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_4;
  pbVar2 = (byte *)FUN_021653ac();
  uVar1 = *(ushort *)(pbVar2 + 4);
  uVar5 = (uint)uVar1;
  if ((pbVar2[1] != 0) && (iVar3 = FUN_02164434(), iVar3 == 0)) {
    return 0;
  }
  switch(pbVar2[2]) {
  case 0:
    return 0;
  case 1:
    break;
  case 2:
    FUN_021649cc(param_1,uVar5,param_6);
    iVar3 = FUN_02164410();
    if (iVar3 == 0) {
      return 0;
    }
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    if ((DAT_020b0b90 & 0x20) == 0) {
      return 0;
    }
    break;
  case 8:
    uVar5 = FUN_0216d4f8(param_5,uVar5);
    if ((*(uint *)(&DAT_020b0cd4 + (uVar5 >> 5) * 4) & 1 << (uVar5 & 0x1f)) == 0) {
      return 0;
    }
    break;
  case 9:
    if ((*(uint *)(&DAT_020b0cec + (uint)(uVar1 >> 5) * 4) & 1 << (uVar5 & 0x1f)) == 0) {
      return 0;
    }
  }
  if (param_3 == 0) {
    return 1;
  }
  FUN_021653ac(param_1,param_2,param_3 + -1,param_4 + (char)(&DAT_0216d738)[*pbVar2],iVar6);
  uVar4 = FUN_02164234();
  return uVar4;
}

