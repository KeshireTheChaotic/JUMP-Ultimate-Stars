
void FUN_02155e04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_r5;
  bool bVar7;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  bVar7 = ((uint)*(byte *)(iVar6 + *(int *)(iVar6 + 0xf4) + 0xfc) &
          1 << (*(uint *)(iVar6 + 0xf8) & 0xff)) != 0;
  if (bVar7) {
    unaff_r5 = 0x5f;
  }
  if (!bVar7) {
    unaff_r5 = 0x5e;
  }
  if (*(int *)(iVar6 + 0xd4) == 0) {
    uVar2 = func_0x021ba49c(0,3,1);
    *(undefined4 *)(iVar6 + 0xd4) = uVar2;
  }
  if (*(int *)(iVar6 + 0xd4) != 0) {
    func_0x021bac28(*(int *)(iVar6 + 0xd4),unaff_r5,0,0,0,0,0,0,param_4);
    *(uint *)(iVar6 + 0xec) = *(uint *)(iVar6 + 0xec) | 0x80;
    while (iVar3 = func_0x021bad2c(*(undefined4 *)(iVar6 + 0xd4)), iVar3 == 0) {
      (*DAT_020a0e18)();
    }
    iVar3 = func_0x021bacfc(*(undefined4 *)(iVar6 + 0xd4));
    (*DAT_020a0e18)();
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar6 + 0xfc + *(int *)(iVar6 + 0xf4));
      uVar4 = *(uint *)(iVar6 + 0xf8);
      if (((uint)bVar1 & 1 << (uVar4 & 0xff)) == 0) {
        bVar1 = bVar1 | (byte)(1 << (uVar4 & 0xff));
      }
      else {
        bVar1 = bVar1 & ~(byte)(1 << (uVar4 & 0xff));
      }
      *(byte *)(iVar6 + 0xfc + *(int *)(iVar6 + 0xf4)) = bVar1;
      *(uint *)(iVar6 + 0xec) = *(uint *)(iVar6 + 0xec) | 8;
    }
    *(uint *)(iVar6 + 0xec) = *(uint *)(iVar6 + 0xec) & 0xffffff7f;
  }
  iVar3 = 0;
  do {
    iVar5 = *(int *)(iVar6 + iVar3 * 4 + 0x34);
    if (iVar5 != 0) {
      func_0x021b65e0(*(undefined4 *)(iVar5 + 4));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (*(int *)(iVar6 + 0x38) != 0) {
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar6 + 0x38) + 4),1);
  }
  return;
}

