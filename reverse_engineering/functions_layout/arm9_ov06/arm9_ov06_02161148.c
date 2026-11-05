
void FUN_02161148(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  param_1[0x14] = 0;
  uVar4 = *(uint *)*param_1;
  uVar3 = *(uint *)(uVar4 + *(int *)(uVar4 + 0x70) * 4 + 0x18);
  iVar1 = uVar4 + *(int *)(uVar4 + 0x74) * 4;
  bVar5 = (uVar3 & 8) != 0;
  if (bVar5) {
    uVar4 = param_1[0x14];
  }
  uVar2 = *(uint *)(iVar1 + 0x18);
  if (bVar5) {
    uVar4 = uVar4 | 4;
    param_1[0x14] = uVar4;
  }
  bVar5 = (uVar3 & 4) != 0;
  if (bVar5) {
    uVar4 = param_1[0x14];
  }
  if (bVar5) {
    uVar4 = uVar4 | 8;
    param_1[0x14] = uVar4;
  }
  bVar5 = (uVar3 & 1) != 0;
  if (bVar5) {
    uVar4 = param_1[0x14];
  }
  uVar2 = uVar3 & ~uVar2;
  if (bVar5) {
    param_1[0x14] = uVar4 | 1;
  }
  if ((uVar3 & 2) != 0) {
    param_1[0x14] = param_1[0x14] | 2;
    param_1[0x14] = param_1[0x14] | 2;
  }
  if ((uVar2 & 0x10) != 0) {
    param_1[0x14] = param_1[0x14] | 0x10;
  }
  if ((uVar3 & 0x10) != 0) {
    param_1[0x14] = param_1[0x14] | 0x20;
  }
  if ((uVar2 & 0x20) != 0) {
    param_1[0x14] = param_1[0x14] | 0x80;
  }
  if ((uVar3 & 0x20) != 0) {
    param_1[0x14] = param_1[0x14] | 0x400;
  }
  if ((uVar2 & 0x80) != 0) {
    param_1[0x14] = param_1[0x14] | 0x100;
  }
  if ((uVar3 & 0x80) != 0) {
    param_1[0x14] = param_1[0x14] | 0x800;
  }
  if ((uVar2 & 0x40) != 0) {
    param_1[0x14] = param_1[0x14] | 0x40;
  }
  if ((uVar3 & 0x40) != 0) {
    param_1[0x14] = param_1[0x14] | 0x200;
  }
  if ((uVar2 & 0x100) != 0) {
    param_1[0x14] = param_1[0x14] | 0x4000;
  }
  if ((uVar2 & 0x200) != 0) {
    param_1[0x14] = param_1[0x14] | 0x8000;
  }
  if ((uVar2 & 0x4000) != 0) {
    param_1[0x14] = param_1[0x14] | 0x1000;
  }
  if ((uVar3 & 0x4000) != 0) {
    param_1[0x14] = param_1[0x14] | 0x2000;
  }
  if (*(char *)(param_1 + 0x17) != '\0') {
    uVar4 = param_1[0x14];
    if ((uVar4 & 4) == 0) {
      if ((uVar4 & 8) != 0) {
        param_1[0x14] = uVar4 & 0xfffffff7 | 4;
      }
    }
    else {
      param_1[0x14] = uVar4 & 0xfffffffb | 8;
    }
  }
  uVar4 = param_1[0x14];
  if (((uint)*(ushort *)(param_1 + 0x15) != (uVar4 & 0xffff)) ||
     (*(short *)((int)param_1 + 0x56) = *(short *)((int)param_1 + 0x56) + 1,
     599 < *(ushort *)((int)param_1 + 0x56))) {
    iVar1 = param_1[0x13];
    param_1[0x13] = iVar1 + 1;
    if (0xf < iVar1 + 1) {
      param_1[0x13] = 0;
    }
    *(undefined2 *)(param_1 + param_1[0x13] + 3) = *(undefined2 *)(param_1 + 0x15);
    *(undefined2 *)((int)param_1 + param_1[0x13] * 4 + 0xe) = *(undefined2 *)((int)param_1 + 0x56);
    *(short *)(param_1 + 0x15) = (short)uVar4;
    *(undefined2 *)((int)param_1 + 0x56) = 0;
  }
  uVar4 = (**(code **)(**(int **)(param_1[1] + 4) + 0x128))();
  *(bool *)((int)param_1 + 0x5a) = (uVar4 & 1) != 0;
  uVar4 = (**(code **)(**(int **)(param_1[1] + 4) + 0x130))();
  *(bool *)((int)param_1 + 0x5b) = (uVar4 & 1) != 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1[1] + 4) + 0x50) + 0xc);
  *(char *)(param_1 + 0x16) = (char)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
  iVar1 = *(int *)(*(int *)(*(int *)(param_1[1] + 4) + 0x50) + 0x10);
  *(char *)((int)param_1 + 0x59) = (char)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
  return;
}

