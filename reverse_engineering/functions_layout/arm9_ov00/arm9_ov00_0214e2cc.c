
void FUN_0214e2cc(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = FUN_0203b424(3);
  iVar2 = (**(code **)(*(int *)(*(int *)(iVar2 + 0x88) + 4) + 0x948))();
  if (0 < (int)param_2) {
    param_2 = (int)((param_2 - 1) * 0x10000) >> 0x10;
  }
  iVar3 = param_3 * 0x40 + ((int)(param_2 + ((uint)((int)param_2 >> 1) >> 0x1e)) >> 2);
  iVar1 = (param_2 & 3) << 3;
  uVar4 = *(uint *)(iVar2 + iVar3 * 4) & ~(0xff << iVar1);
  *(uint *)(iVar2 + iVar3 * 4) = uVar4;
  *(uint *)(iVar2 + iVar3 * 4) = uVar4 | (uint)*(ushort *)(param_1 + 0x52) << iVar1;
  if (param_3 != 0) {
    iVar5 = iVar3 + -0x40;
    uVar4 = *(uint *)(iVar2 + iVar5 * 4) & ~(0xff << iVar1);
    *(uint *)(iVar2 + iVar5 * 4) = uVar4;
    *(uint *)(iVar2 + iVar5 * 4) = uVar4 | (uint)*(ushort *)(param_1 + 0x52) << iVar1;
  }
  uVar4 = (param_2 & 3) + 1;
  if (3 < uVar4) {
    uVar4 = 0;
    iVar3 = iVar3 + 1;
  }
  iVar1 = uVar4 << 3;
  uVar4 = *(uint *)(iVar2 + iVar3 * 4) & ~(0xff << iVar1);
  *(uint *)(iVar2 + iVar3 * 4) = uVar4;
  *(uint *)(iVar2 + iVar3 * 4) = uVar4 | (uint)*(ushort *)(param_1 + 0x52) << iVar1;
  if (param_3 == 0) {
    return;
  }
  iVar3 = iVar3 + -0x40;
  uVar4 = *(uint *)(iVar2 + iVar3 * 4) & ~(0xff << iVar1);
  *(uint *)(iVar2 + iVar3 * 4) = uVar4;
  *(uint *)(iVar2 + iVar3 * 4) = uVar4 | (uint)*(ushort *)(param_1 + 0x52) << iVar1;
  return;
}

