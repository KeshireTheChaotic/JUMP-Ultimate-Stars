
undefined4 FUN_0217cc80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = FUN_02178448();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02178448();
  uVar2 = *(undefined4 *)(iVar1 + param_1 * 4 + 0xf4);
  iVar1 = FUN_02178448();
  iVar3 = FUN_02178448();
  *(uint *)(iVar1 + 0x2e8) =
       *(uint *)(iVar1 + 0x2e8) & ~(1 << (uint)*(byte *)(iVar3 + param_1 + 0x2c8));
  FUN_0217cc00();
  if (param_1 < param_2 + -1) {
    iVar3 = 0;
    iVar1 = (param_2 - param_1) + -1;
    if (0 < iVar1) {
      do {
        iVar4 = param_1 + iVar3;
        iVar9 = iVar4 + 1;
        iVar8 = iVar9 * 4;
        iVar7 = iVar4 * 4;
        iVar5 = FUN_02178448();
        iVar6 = FUN_02178448();
        *(undefined4 *)(iVar5 + iVar7 + 0x24) = *(undefined4 *)(iVar6 + iVar8 + 0x24);
        iVar5 = FUN_02178448();
        iVar6 = FUN_02178448();
        *(undefined2 *)(iVar5 + iVar4 * 2 + 0xa4) = *(undefined2 *)(iVar6 + iVar9 * 2 + 0xa4);
        iVar5 = FUN_02178448();
        iVar6 = FUN_02178448();
        *(undefined4 *)(iVar5 + iVar7 + 0xf4) = *(undefined4 *)(iVar6 + iVar8 + 0xf4);
        iVar5 = FUN_02178448();
        iVar6 = FUN_02178448();
        *(undefined4 *)(iVar5 + iVar7 + 0x208) = *(undefined4 *)(iVar6 + iVar8 + 0x208);
        iVar5 = FUN_02178448();
        iVar6 = FUN_02178448();
        *(undefined2 *)(iVar5 + iVar4 * 2 + 0x288) = *(undefined2 *)(iVar6 + iVar9 * 2 + 0x288);
        iVar5 = FUN_02178448();
        iVar6 = FUN_02178448();
        *(undefined1 *)(iVar5 + iVar4 + 0x2c8) = *(undefined1 *)(iVar6 + iVar9 + 0x2c8);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  if (0 < param_2) {
    param_2 = param_2 + -1;
    iVar3 = param_2 * 4;
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + iVar3 + 0x24) = 0;
    iVar1 = FUN_02178448();
    *(undefined2 *)(iVar1 + param_2 * 2 + 0xa4) = 0;
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + iVar3 + 0xf4) = 0;
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + iVar3 + 0x208) = 0;
    iVar1 = FUN_02178448();
    *(undefined2 *)(iVar1 + param_2 * 2 + 0x288) = 0;
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + param_2 + 0x2c8) = 0;
  }
  return uVar2;
}

