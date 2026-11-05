
void FUN_02162ba4(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar5 = (int *)(*(int *)(param_1 + 0x18) + param_2 * 0x18);
  *(byte *)((int)piVar5 + 0x15) = *(byte *)((int)piVar5 + 0x15) & 8;
  iVar1 = *(int *)(param_1 + 0x18) + param_2 * 0x18;
  if (*(short *)(iVar1 + 0x10) != -1) {
    iVar3 = *(short *)(iVar1 + 0x10) * 0x18 + *(int *)(param_1 + 0x18);
    *(undefined2 *)(iVar3 + 0x12) = 0xffff;
    *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) & 0xfd;
  }
  if (*(short *)(iVar1 + 0x12) != -1) {
    iVar3 = *(short *)(iVar1 + 0x12) * 0x18 + *(int *)(param_1 + 0x18);
    *(undefined2 *)(iVar3 + 0x10) = 0xffff;
    *(byte *)(iVar3 + 0x15) = *(byte *)(iVar3 + 0x15) & 0xfe;
  }
  *(undefined2 *)(iVar1 + 0x10) = 0xffff;
  *(undefined2 *)(iVar1 + 0x12) = 0xffff;
  *(byte *)(iVar1 + 0x15) = *(byte *)(iVar1 + 0x15) & 0xfc;
  iVar4 = *piVar5;
  iVar2 = piVar5[2];
  iVar1 = FUN_02162928(param_1,piVar5[1],iVar2,iVar4,param_4);
  iVar3 = FUN_02162928(param_1,piVar5[1] + piVar5[3]);
  for (; iVar1 <= iVar3; iVar1 = iVar1 + *(short *)(*(int *)(param_1 + 0x10) + 4)) {
    for (iVar6 = iVar4 >> 0xc; iVar6 <= iVar4 + iVar2 >> 0xc; iVar6 = iVar6 + 1) {
      iVar7 = *(int *)(param_1 + 0x14);
      *(undefined2 *)(iVar7 + (iVar6 + iVar1) * 8) = 0xffff;
      iVar7 = iVar7 + (iVar6 + iVar1) * 8;
      *(undefined1 *)(iVar7 + 2) = 0;
      *(undefined1 *)(iVar7 + 3) = 1;
    }
  }
  return;
}

