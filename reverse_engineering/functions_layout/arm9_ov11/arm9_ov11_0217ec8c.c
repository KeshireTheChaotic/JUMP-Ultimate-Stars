
void FUN_0217ec8c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r4;
  int iVar5;
  undefined4 uVar6;
  
  iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  iVar5 = *(char *)(param_1 + 0x38) * 0x10c + *(int *)(*(int *)(iVar2 + 4) + 0x10) + 0xa8;
  uVar6 = *(undefined4 *)(**(int **)(iVar5 + 0x24) + 0xc);
  iVar2 = FUN_0217e9ec();
  bVar1 = iVar2 < 1;
  if (0 < iVar2) {
    uVar3 = FUN_021733b4();
    unaff_r4 = FUN_0217e9a0(uVar6,uVar3);
    if (unaff_r4 == 0) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x105) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 0;
    *(undefined1 *)(param_1 + 0x7d) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x7d) == '\0') {
    FUN_0217ec78(*(undefined4 *)(param_1 + 0x24));
    FUN_02176d14();
    *(char *)(param_1 + 0x7d) = *(char *)(param_1 + 0x7d) + '\x01';
    return;
  }
  if (*(char *)(param_1 + 0x7d) != '\x01') {
    return;
  }
  iVar2 = unaff_r4 + 0x9c;
  iVar4 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(unaff_r4 + 0xc) <= iVar4) {
      *(undefined1 *)(param_1 + 0x105) = 1;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x7d) = 0;
      return;
    }
    if (0 < ((int)*(short *)(iVar2 + 0x16) - (int)*(short *)(**(int **)(iVar5 + 0x24) + 0xbe)) *
            0x10000 >> 0x10) break;
    iVar4 = iVar4 + 1;
    iVar2 = iVar2 + 0x20;
  }
  return;
}

