
void FUN_0203d36c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *in_r12;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(uint **)(param_1 + 0x908) != (uint *)0x0) {
    **(uint **)(param_1 + 0x908) =
         ((*(int *)(param_1 + 0x8fc) << 0xc) >> 0x10) << 0x10 |
         (*(int *)(param_1 + 0x8f8) << 0xc) >> 0x10 & 0xffffU;
    *(uint *)(*(int *)(param_1 + 0x908) + 4) =
         ((*(int *)(param_1 + 0x904) << 0xc) >> 0x10) << 0x10 |
         (*(int *)(param_1 + 0x900) << 0xc) >> 0x10 & 0xffffU;
    iVar5 = *(int *)(param_1 + 0x8f4);
    iVar4 = *(int *)(param_1 + 0x8ec) - iVar5;
    iVar2 = *(int *)(param_1 + 0x904);
    iVar3 = *(int *)(param_1 + 0x8e8) - *(int *)(param_1 + 0x8f0);
    iVar1 = *(int *)(param_1 + 0x900);
    *(int *)(*(int *)(param_1 + 0x908) + 8) =
         *(int *)(param_1 + 0x8f8) * iVar3 + *(int *)(param_1 + 0x8fc) * iVar4 +
         *(int *)(param_1 + 0x8f0) * 0x1000 >> 4;
    *(int *)(*(int *)(param_1 + 0x908) + 0xc) = iVar1 * iVar3 + iVar2 * iVar4 + iVar5 * 0x1000 >> 4;
    return;
  }
  bVar6 = *(int *)(param_1 + 0x8e4) != 0;
  if (bVar6) {
    in_r12 = *(uint **)(param_1 + 0x910);
  }
  if (bVar6 && in_r12 != (uint *)0x0) {
    *in_r12 = *(uint *)(param_1 + 0x8e8) & 0x1ff | (*(uint *)(param_1 + 0x8ec) & 0x1ff) << 0x10;
    return;
  }
  return;
}

