
void FUN_021681ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_28 = param_4;
  if (*(char *)(iVar4 + 0x5b) == '\0') {
    puVar6 = &DAT_021715f8;
    bVar2 = true;
    iVar5 = 0;
    do {
      iVar3 = iVar4 + iVar5 * 2;
      *(short *)(iVar3 + 0x4c) = *(short *)(iVar3 + 0x4c) + 1;
      sVar1 = *(short *)(iVar3 + 0x4c);
      if (-1 < sVar1) {
        if (sVar1 < 0xc) {
          iVar3 = FUN_0200d12c(sVar1 * 0xc0,0xc);
          local_2c = ((*(short *)((int)puVar6 + 0x12) + 0xc0) - iVar3) * 0x1000;
          FUN_02150070(*(undefined4 *)(iVar4 + iVar5 * 4 + 0x24),&local_2c);
          bVar2 = false;
        }
        else {
          local_30 = (int)*(short *)((int)puVar6 + 0x12) << 0xc;
          FUN_02150070(*(undefined4 *)(iVar4 + iVar5 * 4 + 0x24),&local_30);
        }
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 9;
    } while (iVar5 < 5);
    if (bVar2) {
      *(undefined1 *)(iVar4 + 0x5b) = 1;
    }
  }
  if (*(char *)(iVar4 + 0x5b) != '\0') {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021682e0);
  }
  return;
}

