
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020854c4(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar5 = *(int *)(iVar7 + 0xc);
  bVar1 = *(byte *)(iVar7 + 0x15);
  iVar6 = *(int *)(iVar7 + 0x10);
  if ((*(char *)(*(int *)(iVar7 + 4) + 0x60) == '\0') &&
     (iVar2 = (int)*(char *)(iVar5 + 5), iVar2 != -1)) {
    iVar4 = *(int *)(_DAT_02172960 + 0x158) + -1;
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    piVar3 = *(int **)(iVar6 + 4);
    if (iVar2 == *(int *)(_DAT_02172960 + *(int *)(_DAT_02172960 + 0x15c) * 4 + 0x4c)) {
      (**(code **)(*piVar3 + 0xd8))(piVar3,1);
    }
    else {
      (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    }
  }
  *(short *)(iVar7 + 0x16) = *(short *)(iVar7 + 0x16) + 1;
  if (*(ushort *)(iVar7 + 0x16) <= *(ushort *)(iVar5 + 8 + (uint)bVar1 * 4)) {
    return;
  }
  *(undefined2 *)(iVar7 + 0x16) = 0;
  bVar1 = *(char *)(iVar7 + 0x15) + 1;
  *(byte *)(iVar7 + 0x15) = bVar1;
  if (*(byte *)(iVar5 + 4) <= bVar1) {
    *(undefined1 *)(iVar7 + 0x15) = 0;
  }
  FUN_020796b8(iVar6,*(undefined1 *)(iVar5 + 8 + (uint)*(byte *)(iVar7 + 0x15) * 4 + 2));
  return;
}

