
void FUN_021544b8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  bVar1 = (&DAT_0216a420)[param_1];
  DAT_0216e688 = FUN_02166b8c(0x1c,4);
  *(undefined1 *)(DAT_0216e688 + 0x16) = 0xfe;
  *(char *)(DAT_0216e688 + 0x17) = (char)param_1;
  iVar5 = 0;
  if (bVar1 != 0) {
    puVar4 = &DAT_0216a430 + param_1 * 2;
    iVar3 = 0;
    do {
      uVar2 = FUN_02165fc4(0,*puVar4,1);
      *(undefined4 *)(DAT_0216e688 + iVar3) = uVar2;
      FUN_02165b80(*(undefined4 *)(DAT_0216e688 + iVar3),0xffffffff,1);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)bVar1);
  }
  uVar2 = FUN_02165fc4(0,1,1);
  *(undefined4 *)(DAT_0216e688 + 8) = uVar2;
  FUN_02165b80(*(undefined4 *)(DAT_0216e688 + 8),0xffffffff,1);
  FUN_021543b0(0xc0);
  uVar2 = FUN_02167814(0,0x2154369,0,0x78);
  *(undefined4 *)(DAT_0216e688 + 0xc) = uVar2;
  return;
}

