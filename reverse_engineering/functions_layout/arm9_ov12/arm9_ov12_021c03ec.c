
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_021c03ec(void)

{
  byte *pbVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  byte local_10 [16];
  
  pbVar1 = local_10;
  FUN_020554a8(local_10);
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + (uint)*pbVar1;
    pbVar1 = pbVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  FUN_0200d338((iVar3 + _DAT_027ffc3c) * 7,0x14);
  return extraout_r1;
}

