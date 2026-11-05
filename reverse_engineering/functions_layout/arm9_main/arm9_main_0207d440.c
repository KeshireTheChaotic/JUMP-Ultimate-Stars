
int FUN_0207d440(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  ushort uVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 == 0 || param_2 == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if (iVar7 == 0) {
    return 0;
  }
  iVar8 = *(int *)(DAT_0214be10 + 0x18);
  if (iVar8 == 0) {
    return 0;
  }
  FUN_02037c24(DAT_0214be10 + 0x18,iVar8,param_3,param_4,param_4);
  FUN_02037b98(iVar7 + 8,iVar8);
  *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(iVar7 + 0x34);
  *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(iVar7 + 0x38);
  uVar2 = *(ushort *)(param_2 + 0xe);
  uVar6 = (uint)uVar2;
  if (uVar6 < 0x100) {
    *(uint *)(iVar8 + 0x10) = uVar6 * 0x14 + 0x209fc2c;
    *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) | *(uint *)(&DAT_0209fb84 + uVar6 * 4);
    *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | *(uint *)(&DAT_0209fbbc + uVar6 * 4);
    *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar7 + 0x3c) | *(uint *)(&DAT_0209fbf4 + uVar6 * 4);
    if ((*(uint *)(iVar8 + 0x14) & 0x20000) != 0) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xfffeffff;
    }
    if (uVar6 == 1) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0xff;
    }
    if ((uVar6 == 2) || ((*(uint *)(iVar7 + 0x34) & 0x1000) != 0)) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | *(uint *)(iVar7 + 0x3c) & 0x30000000;
    }
    if (uVar6 == 9) {
      *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) & 0xffffff00;
    }
    if ((*(uint *)(iVar8 + 0x14) & 0x10f0) != 0) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x100;
    }
    if (uVar6 == 6) {
      if ((*(uint *)(iVar7 + 0x78) & 0x800000) == 0) {
        *(ushort *)(iVar8 + 0x28) = *(byte *)(DAT_0214be10 + 0x14c) + 0x100;
        *(char *)(DAT_0214be10 + 0x14c) = *(char *)(DAT_0214be10 + 0x14c) + '\x01';
      }
      else {
        *(undefined2 *)(iVar8 + 0x28) = *(undefined2 *)(iVar7 + 0xa0);
      }
    }
  }
  else {
    *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar7 + 0x3c) & 0xcfffffff;
    pcVar3 = (char *)((uVar6 - 0x100) * 0x14 + *(int *)(*(int *)(iVar7 + 0x6c) + 0xc));
    *(char **)(iVar8 + 0x10) = pcVar3;
    if (*pcVar3 == '\0') {
      *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) & 0xefffefff | 0x20000000;
    }
    else {
      uVar4 = *(uint *)(iVar8 + 0x14);
      *(uint *)(iVar8 + 0x14) = uVar4 & 0xdfffffff | 0x10000000;
      if ((uVar4 & 0x1000) != 0) {
        *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x8000000;
      }
    }
    if (((*(uint *)(iVar8 + 0x14) & 0x100) != 0) && ((*(uint *)(iVar8 + 0x14) & 0x10000000) != 0)) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x100009f0;
    }
    uVar4 = *(uint *)(iVar8 + 0x1c) & 0xf;
    if (uVar4 != 0) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | uVar4 << 4;
    }
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 0x80;
    if ((*(uint *)(iVar8 + 0x14) & 0x2100) != 0) {
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) & 0x7f;
    }
  }
  *(int *)(iVar8 + 0xc) = iVar7;
  *(ushort *)(iVar8 + 0x26) = uVar2;
  uVar4 = 0;
  do {
    if ((*(uint *)(*(int *)(iVar8 + 0x10) + 8) & 1 << (uVar4 & 0xff)) != 0) {
      *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) | (&DAT_0209fd44)[uVar4];
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | (&DAT_0209fdc4)[uVar4];
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | (&DAT_0209fe44)[uVar4];
    }
    uVar4 = uVar4 + 1;
    if ((*(uint *)(*(int *)(iVar8 + 0x10) + 8) & 0x800000) != 0) {
      *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) | 0x100;
    }
  } while (uVar4 < 0x20);
  if ((*(int *)(iVar7 + 0x70) == 0) || ((*(uint *)(iVar8 + 0x14) & 0x20000000) != 0)) {
    *(int *)(iVar7 + 0x70) = param_2 + 0x2c;
    *(int *)(iVar7 + 0x74) = param_2 + 0x34;
  }
  if (((uVar6 != 6) && ((*(uint *)(iVar8 + 0x14) & 0x10000000) != 0)) && (*(int *)(iVar8 + 4) == 0))
  {
    if ((*(uint *)(iVar8 + 0x18) & 0x10) == 0) {
      *(uint *)(iVar7 + 0x78) = *(uint *)(iVar7 + 0x78) | 0x20000;
    }
    if ((*(uint *)(iVar8 + 0x18) & 8) == 0) {
      *(uint *)(iVar7 + 0x78) = *(uint *)(iVar7 + 0x78) | 0x10000;
    }
  }
  *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) | *(uint *)(iVar8 + 0x18) & 0x18;
  *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0x200000;
  if ((*(uint *)(iVar8 + 0x18) & 0x1000) != 0) {
    uVar6 = *(uint *)(iVar8 + 0x1c) | 0x100000ff;
    *(uint *)(iVar8 + 0x1c) = uVar6;
    *(uint *)(iVar8 + 0x1c) = uVar6 & ~(*(uint *)(iVar8 + 0x14) & 0xf);
    *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) & 0xfffffff0 | 0x100;
  }
  if ((*(uint *)(iVar8 + 0x18) & 0x10000) != 0) {
    puVar5 = *(undefined4 **)(iVar7 + 0x28);
    uVar6 = 0;
    while (puVar5 != (undefined4 *)0x0) {
      piVar1 = puVar5 + 2;
      puVar5 = (undefined4 *)*puVar5;
      if (*piVar1 != 0) {
        uVar6 = uVar6 | *(uint *)(*(int *)(*piVar1 + 0xc) + 0x34) & 0xff;
      }
    }
    if (uVar6 != 0) {
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & 0xffffff00 | ~uVar6 & 0xff;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar8 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(iVar8 + 0x1c);
  *(int *)(iVar8 + 8) = param_2;
  return iVar8;
}

