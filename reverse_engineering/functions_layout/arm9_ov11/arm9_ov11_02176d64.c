
undefined4 FUN_02176d64(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_1 == 0) {
    return 1;
  }
  iVar6 = *param_2;
  iVar7 = param_2[1];
  iVar4 = iVar6 - *(int *)(param_1 + 300);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  iVar1 = iVar7 - *(int *)(param_1 + 0x130);
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar5 = iVar4 >> 8;
  if (iVar4 >> 8 < 6) {
    iVar5 = iVar1 >> 8;
  }
  if ((iVar5 < 6) && (*(char *)(param_1 + 0x18b) != '\0')) {
    return 0;
  }
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  FUN_02175628();
  iVar4 = FUN_0217718c();
  iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x5c);
  iVar4 = param_2[1] >> 8;
  iVar1 = *(int *)(iVar5 + 0xc) >> 8;
  iVar5 = *(int *)(iVar5 + 0x10) >> 8;
  iVar10 = *param_2 >> 8;
  bVar3 = false;
  for (puVar2 = *(undefined4 **)(DAT_02183a38 + 8); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    iVar8 = (int)*(short *)(puVar2 + 2);
    if ((((iVar8 < iVar10) && (iVar9 = (int)*(short *)(puVar2 + 3), iVar10 < iVar9)) &&
        (*(short *)((int)puVar2 + 10) < iVar4)) && (iVar4 < *(short *)((int)puVar2 + 0xe))) {
      if ((*(uint *)(param_1 + 0x180) & 0x10) == 0) {
        if (iVar1 < iVar8) {
          iVar10 = iVar8 + -8;
          bVar3 = true;
        }
        if (iVar9 < iVar1) {
          bVar3 = true;
          iVar10 = iVar9 + 8;
        }
      }
    }
    else if (((*(short *)((int)puVar2 + 10) <= iVar5) && (iVar5 <= *(short *)((int)puVar2 + 0xe)))
            && ((*(short *)((int)puVar2 + 10) <= iVar4 && (iVar4 <= *(short *)((int)puVar2 + 0xe))))
            ) {
      if (iVar10 < iVar1) {
        if (iVar10 < iVar8) {
          bVar3 = true;
          iVar10 = *(short *)(puVar2 + 3) + 8;
        }
      }
      else if (*(short *)(puVar2 + 3) < iVar1) {
        bVar3 = true;
        iVar10 = iVar8 + -8;
      }
    }
  }
  if (bVar3) {
    iVar6 = iVar10 << 8;
    iVar7 = iVar4 << 8;
    param_3 = -1;
  }
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  FUN_02175628();
  iVar4 = FUN_02083b4c(iVar6,iVar7 + -0x200);
  if (iVar4 != 0) {
    return 2;
  }
  if (param_3 < 0) {
    param_3 = FUN_020837b0(iVar6,iVar7);
  }
  iVar1 = DAT_02183a38 + 0x3c + param_3 * 0x20;
  iVar4 = FUN_02083acc((int)*(char *)(iVar1 + 0x1e));
  if (iVar4 == 0) {
    return 3;
  }
  iVar4 = FUN_020836b4(iVar6,iVar7);
  if (iVar4 == 0) {
    return 4;
  }
  iVar4 = *(int *)(iVar1 + 0xc) + 0x400;
  if (iVar6 < iVar4) {
    iVar6 = iVar4;
  }
  iVar4 = *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x14) + -0x400;
  if (iVar4 < iVar6) {
    iVar6 = iVar4;
  }
  if ((*(char *)(param_1 + 0x18b) == '\0') &&
     (*(undefined1 *)(param_1 + 0x18b) = 1, (*(uint *)(param_1 + 0x180) & 0x40) == 0)) {
    *(undefined4 *)(param_1 + 0x184) = 0xf0;
    *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) | 0x40;
  }
  *(int *)(param_1 + 300) = iVar6;
  *(int *)(param_1 + 0x130) = iVar7;
  *(short *)(param_1 + 0x144) = (short)param_3;
  *(undefined1 *)(param_1 + 0x146) = *(undefined1 *)(iVar1 + 0x1e);
  FUN_02051890(iVar1 + 0xc,param_1 + 0x134,0x10);
  *(undefined2 *)(param_1 + 0x160) = 0xffff;
  *(undefined2 *)(param_1 + 0x17c) = *(undefined2 *)(param_1 + 0x160);
  *(uint *)(param_1 + 0x180) = *(uint *)(param_1 + 0x180) & 0xffffff7b | 0x20;
  return 0;
}

