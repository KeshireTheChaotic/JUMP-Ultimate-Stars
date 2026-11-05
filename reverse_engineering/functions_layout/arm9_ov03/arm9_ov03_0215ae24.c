
void FUN_0215ae24(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar6 = FUN_02054b44();
  if ((int)((ulonglong)uVar6 >> 0x20) ==
      *(int *)(iVar4 + 0xfc) + (uint)((uint)uVar6 < *(uint *)(iVar4 + 0xf8)) &&
      (uint)uVar6 - *(uint *)(iVar4 + 0xf8) < 5000000) {
    return;
  }
  if (*(char *)(iVar4 + 1) == '\0') {
    FUN_02073ebc(3,1);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215aca8);
    return;
  }
  if (*(int *)(iVar4 + 0x48) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(iVar4 + 0x48) + 4);
  (**(code **)(*piVar1 + 0x148))(piVar1,0x10);
  uVar6 = FUN_02054b44();
  *(undefined8 *)(iVar4 + 0xf8) = uVar6;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215b04c);
  FUN_02073f64(8,0,0x3f);
  FUN_02073fa4(0x11,0,0x3f);
  iVar2 = FUN_0203b3f4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(undefined1 *)(iVar2 + 0x901) = 1;
  *(undefined4 *)(iVar2 + 0x8c8) = 0x1f;
  iVar2 = FUN_0203b3f4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(undefined1 *)(iVar2 + 0x901) = 1;
  *(undefined1 *)(iVar2 + 0x8fd) = 0;
  iVar2 = FUN_0203b3f4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(undefined1 *)(iVar2 + 0x8ff) = 1;
  *(undefined1 *)(iVar2 + 0x901) = 1;
  iVar2 = FUN_0203b3f4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(undefined1 *)(iVar2 + 0x901) = 1;
  *(undefined4 *)(iVar2 + 0x8d4) = 0x1f;
  iVar2 = FUN_0203b3f4();
  iVar2 = *(int *)(*(int *)(iVar2 + 0x88) + 4);
  *(uint *)(iVar2 + 0x8bc) = *(uint *)(iVar2 + 0x8bc) & 0xfffffffe | 1;
  *(undefined1 *)(iVar2 + 0x901) = 1;
  iVar2 = 0;
  do {
    iVar5 = iVar2;
    uVar3 = FUN_02042460(DAT_020a0f64,iVar5 + 0x10,&LAB_0215b270,iVar4);
    iVar2 = iVar5 + 1;
    *(undefined4 *)(iVar4 + iVar5 * 4 + 0x88) = uVar3;
  } while (iVar2 < 10);
  uVar3 = FUN_02042460(DAT_020a0f64,iVar5 + 0x11,&LAB_0215b1fc,iVar4);
  *(undefined4 *)(iVar4 + iVar2 * 4 + 0x88) = uVar3;
  iVar5 = iVar5 + 2;
  iVar2 = 9;
  do {
    uVar3 = FUN_02042460(DAT_020a0f64,0x9c - iVar2,&LAB_0215b2c4,iVar4);
    *(undefined4 *)(iVar4 + iVar5 * 4 + 0x88) = uVar3;
    iVar5 = iVar5 + 1;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar3 = FUN_02042460(DAT_020a0f64,0x9d,&LAB_0215b318,0);
  *(undefined4 *)(iVar4 + iVar5 * 4 + 0x88) = uVar3;
  *(undefined2 *)(iVar4 + 0xec) = 0x13a;
  *(undefined2 *)(iVar4 + 0xee) = 1;
  return;
}

