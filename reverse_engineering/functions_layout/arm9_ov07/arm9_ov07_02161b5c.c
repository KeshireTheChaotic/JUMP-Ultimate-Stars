
void FUN_02161b5c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  if (*(uint *)(iVar7 + 8) <= param_2) {
    return;
  }
  uVar2 = 1 << (param_2 & 0x1f);
  puVar6 = (uint *)(iVar7 + 0x10 + ((int)param_2 >> 5) * 4);
  if ((*(uint *)(iVar7 + 0x10 + ((int)param_2 >> 5) * 4) & uVar2) != 0) {
    return;
  }
  uVar8 = (uint)*(ushort *)(iVar7 + 0x16a);
  uVar5 = *(int *)(param_1 + 0x14) - param_2 * uVar8;
  if (uVar8 < uVar5) {
    uVar5 = uVar8;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_02051890(param_3,*(int *)(param_1 + 0x10) + param_2 * uVar8,uVar5);
  }
  *puVar6 = *puVar6 | uVar2;
  *(int *)(iVar7 + 0xc) = *(int *)(iVar7 + 0xc) + -1;
  if (*(int *)(iVar7 + 0xc) == 0) {
    *(undefined1 *)(iVar7 + 1) = 4;
    return;
  }
  uVar2 = (uint)*(ushort *)(iVar7 + 0x16c);
  uVar8 = *(uint *)(iVar7 + 8);
  uVar5 = uVar2;
  if (uVar8 <= uVar2) {
    uVar5 = uVar8 - 1;
  }
  do {
    do {
      uVar2 = uVar2 + 1;
      if (uVar8 <= uVar2) {
        uVar2 = 0;
      }
      if (uVar2 == uVar5) {
        uVar2 = (uint)*(ushort *)(iVar7 + 0x16e);
        goto LAB_02161c80;
      }
    } while ((1 << (uVar2 & 0x1f) & *(uint *)(iVar7 + ((int)uVar2 >> 5) * 4 + 0x10)) != 0);
    iVar4 = 0;
    do {
      if (uVar2 == *(ushort *)(iVar7 + iVar4 * 2 + 0x16c)) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  } while (iVar4 < 2);
LAB_02161c80:
  iVar4 = 1;
  do {
    iVar3 = iVar4 + -1;
    iVar1 = iVar4 * 2;
    iVar4 = iVar4 + -1;
    *(undefined2 *)(iVar7 + iVar1 + 0x16c) = *(undefined2 *)(iVar7 + iVar3 * 2 + 0x16c);
  } while (0 < iVar4);
  *(short *)(iVar7 + 0x16c) = (short)uVar2;
  *(undefined2 *)(iVar7 + 2) = *(undefined2 *)(iVar7 + 0x16c);
  return;
}

