
void FUN_0217d1e4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = FUN_02175628();
  iVar5 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
  piVar6 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (int)*(char *)(*(int *)(iVar5 + 0x20) + 0xca);
  if (0xc < iVar1) {
    iVar2 = FUN_02174f4c(**(undefined4 **)(iVar5 + 0x24));
    iVar1 = (iVar1 + (iVar2 + -3) * 2) * 0x1000000 >> 0x18;
  }
  iVar3 = *piVar6;
  piVar4 = (int *)(iVar3 + 0x10);
  iVar2 = FUN_0217bfe0(iVar5);
  if ((((iVar2 == 0) || (*(char *)((int)piVar6 + 0xe) != iVar1)) ||
      (*(char *)((int)piVar6 + 0xe) == 0xb)) ||
     (*(int *)(iVar5 + (uint)*(byte *)(iVar5 + 0x107) * 4 + 0xdc) < 0x6000)) {
    FUN_0217d750(param_1,*piVar4);
    return;
  }
  if (*(short *)(iVar3 + 0x16) < 1) {
    *(uint *)(piVar6[1] + 0xe4) =
         *(uint *)(piVar6[1] + 0xe4) | *(uint *)(&DAT_02181468 + *piVar4 * 4);
  }
  else {
    if ((short)piVar6[3] == 0) {
      iVar1 = FUN_02179130(*(undefined4 *)(iVar5 + 0x2c),0x1f);
      if (iVar1 == 0) {
        *(undefined1 *)((int)piVar6 + 0x13) = 0;
        FUN_0217d750(param_1,*piVar4);
        return;
      }
      *(undefined1 *)((int)piVar6 + 0x13) = 1;
    }
    if (*(char *)((int)piVar6 + 0x13) != '\0') {
      *(uint *)(piVar6[1] + 0xe4) =
           *(uint *)(piVar6[1] + 0xe4) | *(uint *)(&DAT_02181468 + *piVar4 * 4);
    }
    if ((int)*(short *)(iVar3 + 0x14) +
        (int)*(short *)((int)piVar4 + *(char *)((int)piVar6 + 0xf) * 2 + 6) <=
        (int)(uint)*(ushort *)(piVar6 + 3)) {
      FUN_0217d750(param_1,*piVar4);
      return;
    }
  }
  *(short *)(piVar6 + 3) = (short)piVar6[3] + 1;
  return;
}

