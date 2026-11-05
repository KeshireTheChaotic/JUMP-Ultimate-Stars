
undefined4 FUN_02002024(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = &DAT_02093018;
  uVar4 = 0;
  iVar3 = 1;
  do {
    if (((*(uint *)(puVar1 + 4) & 0x3ff) >> 7 != 0) && (iVar2 = FUN_020022a8(), iVar2 != 0)) {
      uVar4 = 0xffffffff;
    }
    if (iVar3 < 3) {
      iVar2 = iVar3 * 0x4c;
      iVar3 = iVar3 + 1;
      puVar1 = &DAT_02093018 + iVar2;
    }
    else {
      puVar1 = (undefined *)0x0;
    }
  } while (puVar1 != (undefined *)0x0);
  return uVar4;
}

