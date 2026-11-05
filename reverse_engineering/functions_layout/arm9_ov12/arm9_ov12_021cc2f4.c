
void FUN_021cc2f4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  while( true ) {
    *(undefined1 *)(iVar2 + 6) = 0;
    iVar1 = FUN_020618d0(1,&LAB_021cc14c_1,iVar2);
    if (iVar1 == 0) break;
    (*DAT_020a0e18)();
  }
  while (*(char *)(iVar2 + 6) == '\0') {
    (*DAT_020a0e18)();
  }
  while( true ) {
    *(undefined1 *)(iVar2 + 6) = 0;
    iVar1 = FUN_020618b0(3,&LAB_021cc158_1,iVar2);
    if (iVar1 == 0) break;
    (*DAT_020a0e18)();
  }
  while (*(char *)(iVar2 + 6) == '\0') {
    (*DAT_020a0e18)();
  }
  iVar1 = FUN_0200d338(*(int *)(iVar2 + 0x1c) * 16000,1000);
  *(undefined4 *)(iVar2 + 0xcc) = 3;
  *(undefined4 *)(iVar2 + 0xd0) = *(undefined4 *)(iVar2 + 0xe8);
  *(int *)(iVar2 + 0xd4) = iVar1 << 1;
  *(undefined4 *)(iVar2 + 0xd8) = 0x1040;
  *(undefined4 *)(iVar2 + 0xdc) = 1;
  *(undefined4 *)(iVar2 + 0xe0) = 0;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  *(undefined1 *)(iVar2 + 7) = 1;
  while (*(char *)(iVar2 + 6) == '\0') {
    (*DAT_020a0e18)();
  }
  for (uVar3 = 0; uVar3 < 0x1e; uVar3 = uVar3 + 1) {
    (*DAT_020a0e18)();
  }
  iVar2 = 0;
  for (uVar3 = 0; uVar3 < 0x220; uVar3 = uVar3 + 1) {
    iVar1 = (int)uVar3 >> 0x1f;
    iVar1 = (uVar3 * 0x20000000 + iVar1 >> 0x1d | iVar1 << 3) - iVar1;
    bVar4 = iVar1 == 7;
    if (bVar4) {
      iVar1 = iVar2 * -0x10000;
    }
    (&DAT_021d5340)[uVar3] = (short)iVar2;
    if (bVar4) {
      iVar2 = iVar1 >> 0x10;
    }
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_021cc49c_1);
  return;
}

