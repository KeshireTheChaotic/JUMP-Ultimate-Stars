
undefined4 FUN_0215b568(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x100);
  iVar4 = *(int *)(&DAT_021713e8 + uVar3 * 8);
  if ((*(char *)(param_1 + 0x11f) == '\x01') || (8 < uVar3)) {
    if (iVar4 - 0xfU < 2) {
      iVar4 = 0xc;
    }
    FUN_02157450(param_1,iVar4,uVar3,param_4,param_4);
  }
  if ((0x32 < iVar4) && (iVar4 < 0x37)) {
    uVar6 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    bVar5 = (int)uVar6 == 0;
    if (bVar5) {
      uVar2 = 1;
    }
    if (!bVar5) {
      uVar2 = 0;
    }
    FUN_02083950(*(undefined4 *)(param_1 + 0x1a8),uVar2);
  }
  sVar1 = *(short *)(param_1 + 0x100);
  if (sVar1 == 0xd) {
    FUN_0215f334(*(undefined4 *)(param_1 + 0x1a0),0);
  }
  else if (sVar1 == 0xe || sVar1 == 0xf) {
    FUN_0215b204(*(undefined4 *)(param_1 + 0x1a8),1);
  }
  *(code **)(param_1 + 0xfc) = FUN_0215b648;
  return 0;
}

