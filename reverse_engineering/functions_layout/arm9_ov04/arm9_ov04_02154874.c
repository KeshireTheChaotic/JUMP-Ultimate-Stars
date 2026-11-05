
void FUN_02154874(int param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = (*(byte *)(*(int *)(*(int *)piVar2[0xb] + 4) + 0x28) & 3) >> 1;
  bVar3 = uVar1 == 0;
  if (bVar3) {
    uVar1 = *(uint *)(*(int *)(*(int *)(*(int *)piVar2[0xb] + 4) + 0x34) + 0x244);
  }
  if (bVar3 && uVar1 == 0) {
    return;
  }
  FUN_02154750(piVar2,0);
  FUN_02028384(*(undefined4 *)(*piVar2 + 4),&DAT_02154870);
  return;
}

