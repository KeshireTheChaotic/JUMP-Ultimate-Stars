
void FUN_021a11c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ushort local_20 [2];
  uint local_1c;
  undefined4 uStack_18;
  
  *(undefined1 *)(param_1 + 3) = 1;
  *(uint *)(param_1 + 0xafc) = *(int *)(param_1 + 0xafc) + 1U & 0x7fff;
  uStack_18 = param_4;
  if ((*(char *)(param_1 + 2) == '\0') &&
     (iVar1 = FUN_021a1bf8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x14)),
     iVar1 == 0)) {
    local_20[0] = (ushort)*(undefined4 *)(param_1 + 0x14) & 0x7fff;
    piVar2 = (int *)FUN_02028920(0);
    iVar1 = FUN_020208ec(0);
    iVar3 = (*(int **)(iVar1 + 4))[0x14];
    iVar4 = *(int *)(iVar3 + 0x10);
    iVar3 = *(int *)(iVar3 + 0xc);
    iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x128))();
    local_1c = iVar1 << 0xc | *(uint *)(*piVar2 + *(int *)(*piVar2 + 0x70) * 4 + 0x18) & 0xffff |
               ((int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc & 0xffU) << 0x10 |
               ((int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc) << 0x18;
    FUN_021a1b3c(*(undefined4 *)(param_1 + 0x3c),local_20);
    *(uint *)(param_1 + 0xb04) = local_1c;
    *(undefined1 *)(param_1 + 3) = 0;
    local_20[0] = (ushort)*(undefined4 *)(param_1 + 0x14) & 0x7fff;
    local_1c = *(undefined4 *)(param_1 + 0xafc);
    FUN_021a1b3c(param_1 + 0x8f0,local_20);
  }
  FUN_021a0c08(param_1);
  return;
}

