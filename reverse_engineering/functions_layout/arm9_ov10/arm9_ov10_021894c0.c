
void FUN_021894c0(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  
  if (DAT_021a7d30 != 0) {
    iVar2 = FUN_0200131c();
    iVar2 = iVar2 + -1;
    if (-1 < iVar2) {
      puVar5 = &DAT_021a3518;
      puVar4 = local_24;
      iVar3 = 0x10;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      do {
        puVar4 = local_24;
        puVar5 = local_34;
        iVar3 = 0x10;
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        DAT_021a64d0 = &DAT_021a64e4;
        FUN_02189a28(local_34,0xf);
        FUN_02189548(iVar2,0,0,local_34,0);
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
    }
    FUN_02001320(DAT_021a7d30);
    DAT_021a7d30 = 0;
  }
  return;
}

