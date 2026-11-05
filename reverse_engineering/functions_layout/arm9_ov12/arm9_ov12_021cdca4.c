
undefined4 FUN_021cdca4(uint param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar6 = (undefined *)0x0;
  if (DAT_021d57a0 == 0) {
    return 0;
  }
  uVar1 = 0;
  puVar5 = &DAT_021d57b8;
  do {
    if (param_1 == *(uint *)(puVar5 + 0x38)) {
      puVar6 = &DAT_021d57b8 + uVar1 * 0x94;
      break;
    }
    puVar5 = puVar5 + 0x94;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  if (puVar6 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)(param_2 + 4) == 'A') {
    *(uint *)(puVar6 + 0x30) = (uint)*(ushort *)(param_2 + 6);
    *(undefined4 *)(puVar6 + 0x4c) = 0;
    *(undefined4 *)(puVar6 + 0x6c) = 1;
    return 0;
  }
  if (*(char *)(param_2 + 4) != '@') {
    return 0;
  }
  uVar1 = *(byte *)(param_2 + 5) & 0x7f;
  *(uint *)(puVar6 + 0x24) = uVar1;
  if (4 < uVar1) {
    return 0;
  }
  if (param_3 !=
      (uint)(byte)(&DAT_021d0389)[uVar1 * 2] + (uint)(byte)(&DAT_021d0388)[uVar1 * 2] * 0x44 + 0xc)
  {
    return 0;
  }
  if (param_1 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1 << (param_1 & 0xff);
  }
  if ((DAT_021d5784 & uVar4) == 0) {
    return 0;
  }
  iVar2 = FUN_021cf894();
  if (iVar2 == 0) {
    FUN_021ce9bc(*(undefined4 *)(puVar6 + 0x34));
    FUN_021ce6d8(*(undefined4 *)(puVar6 + 0x34));
    iVar2 = FUN_021cf894();
    if (iVar2 == 0) {
      FUN_021ce964();
      FUN_021ce6a8();
      iVar2 = FUN_021cf894();
    }
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar3 = (iVar2 + 0x45c) - (param_3 + -0xc);
  FUN_02051890(param_2 + 0xc,iVar3);
  *(char *)(iVar2 + 0x11) = (char)*(undefined4 *)(puVar6 + 0x34);
  *(uint *)(iVar2 + 0xc) = uVar1;
  *(int *)(iVar2 + 0x474) = iVar3;
  *(int *)(iVar2 + 0x14) = param_3 + -0xc;
  *(undefined4 *)(iVar2 + 0x464) = param_4;
  *(undefined4 *)(iVar2 + 0x468) = param_5;
  *(char *)(iVar2 + 0x10) = (char)param_1;
  *(uint *)(iVar2 + 0x45c) = *(byte *)(param_2 + 5) & 0x80;
  *(undefined4 *)(iVar2 + 0x460) = *(undefined4 *)(param_2 + 8);
  *(uint *)(iVar2 + 0x18) = (uint)*(ushort *)(param_2 + 6);
  iVar3 = FUN_021cea2c(puVar6,iVar2);
  if (iVar3 == 0) {
    FUN_021cf870(iVar2);
    return 0;
  }
  FUN_021ce65c(iVar2);
  return 1;
}

