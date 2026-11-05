
void FUN_02161bac(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint unaff_r4;
  uint uVar5;
  uint *unaff_r5;
  uint uVar6;
  int unaff_r6;
  uint in_r12;
  int in_lr;
  
  uVar2 = param_4 - in_lr;
  if (in_r12 < (uint)(param_4 - in_lr)) {
    uVar2 = in_r12;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_02051890(param_3,*(int *)(param_1 + 0x10) + in_lr,uVar2);
  }
  *unaff_r5 = *unaff_r5 | unaff_r4;
  *(int *)(unaff_r6 + 0xc) = *(int *)(unaff_r6 + 0xc) + -1;
  if (*(int *)(unaff_r6 + 0xc) == 0) {
    *(undefined1 *)(unaff_r6 + 1) = 4;
    return;
  }
  uVar2 = (uint)*(ushort *)(unaff_r6 + 0x16c);
  uVar5 = *(uint *)(unaff_r6 + 8);
  uVar6 = uVar2;
  if (uVar5 <= uVar2) {
    uVar6 = uVar5 - 1;
  }
  do {
    do {
      uVar2 = uVar2 + 1;
      if (uVar5 <= uVar2) {
        uVar2 = 0;
      }
      if (uVar2 == uVar6) {
        uVar2 = (uint)*(ushort *)(unaff_r6 + 0x16e);
        goto LAB_02161c80;
      }
    } while ((1 << (uVar2 & 0x1f) & *(uint *)(unaff_r6 + ((int)uVar2 >> 5) * 4 + 0x10)) != 0);
    iVar4 = 0;
    do {
      if (uVar2 == *(ushort *)(unaff_r6 + iVar4 * 2 + 0x16c)) break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  } while (iVar4 < 2);
LAB_02161c80:
  iVar4 = 1;
  do {
    iVar3 = iVar4 + -1;
    iVar1 = iVar4 * 2;
    iVar4 = iVar4 + -1;
    *(undefined2 *)(unaff_r6 + iVar1 + 0x16c) = *(undefined2 *)(unaff_r6 + iVar3 * 2 + 0x16c);
  } while (0 < iVar4);
  *(short *)(unaff_r6 + 0x16c) = (short)uVar2;
  *(undefined2 *)(unaff_r6 + 2) = *(undefined2 *)(unaff_r6 + 0x16c);
  return;
}

