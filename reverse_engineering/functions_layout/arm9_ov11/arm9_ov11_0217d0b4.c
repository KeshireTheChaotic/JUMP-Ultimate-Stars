
void FUN_0217d0b4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = FUN_02175628();
  iVar4 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
  iVar1 = FUN_0217bfe0(iVar4);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = (int)*(char *)(*(int *)(iVar4 + 0x20) + 0xca);
  piVar5 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (0xc < iVar1) {
    iVar2 = FUN_02174f4c(**(undefined4 **)(iVar4 + 0x24));
    iVar1 = (iVar1 + (iVar2 + -3) * 2) * 0x1000000 >> 0x18;
  }
  if (*(char *)((int)piVar5 + 0xe) == iVar1) {
    return;
  }
  *(char *)((int)piVar5 + 0xe) = (char)iVar1;
  iVar1 = FUN_021733b4(iVar1);
  bVar6 = iVar1 < 0;
  if (bVar6) {
    iVar1 = 0;
  }
  iVar4 = *(int *)(**(int **)(iVar4 + 0x24) + 0xc);
  if (!bVar6) {
    iVar1 = *(int *)(iVar4 + iVar1 * 4 + 8);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar4 + iVar1;
    }
  }
  *piVar5 = iVar1;
  if (iVar1 == 0) {
    return;
  }
  *(undefined2 *)(piVar5 + 3) = 0;
  *(undefined1 *)((int)piVar5 + 0xf) = 0;
  *(undefined1 *)((int)piVar5 + 0x11) = 0;
  *(undefined1 *)(piVar5 + 4) = 0;
  if (*(int *)*piVar5 == 0) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),(&PTR_LAB_021819b0)[*(int *)*piVar5]);
  *(undefined1 *)((int)piVar5 + 0x12) = 1;
  piVar3 = (int *)*piVar5;
  if (*piVar3 != 1) {
    return;
  }
  if (*(short *)((int)piVar3 + 0x16) < 1) {
    return;
  }
  if (0 < *(short *)((int)piVar3 + 0x1a)) {
    *(undefined1 *)((int)piVar5 + 0xf) = 2;
    return;
  }
  if ((short)piVar3[6] < 1) {
    *(undefined1 *)((int)piVar5 + 0xf) = 0;
  }
  else {
    *(undefined1 *)((int)piVar5 + 0xf) = 1;
  }
  return;
}

