
undefined4 FUN_021cf5d0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  if (((iVar1 == 0) || (param_1[1] == 0)) || (8 < (uint)param_1[1])) {
    return 0;
  }
  DAT_021d66e4 = iVar1;
  FUN_020517fc(iVar1,0,param_1[1] * 0x18);
  FUN_020517fc(&DAT_021d6710,0,0x18);
  FUN_020517fc(&DAT_021d66f8,0,0x18);
  uVar3 = 0;
  iVar1 = 1;
  if (param_1[1] != 1) {
    iVar2 = 0;
    do {
      uVar3 = uVar3 + 1;
      *(uint *)(DAT_021d66e4 + iVar2 + 0x14) = DAT_021d66e4 + uVar3 * 0x18;
      iVar2 = iVar2 + 0x18;
      iVar1 = param_1[1];
    } while (uVar3 < iVar1 - 1U);
  }
  *(undefined4 *)(DAT_021d66e4 + iVar1 * 0x18 + -4) = 0;
  DAT_021d66e8 = 0;
  DAT_021d66d8 = 0;
  DAT_021d66d4 = 0;
  DAT_021d7bf4 = 0;
  DAT_021d66ec = FUN_02054b44;
  DAT_021d66f0 = 0x5d588b65;
  DAT_021d66f4 = 0x269ec3;
  return 1;
}

