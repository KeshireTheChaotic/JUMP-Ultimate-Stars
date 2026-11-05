
void FUN_02168414(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int *piVar2;
  int local_10;
  undefined4 uStack_c;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  local_10 = ((int)((uint)*(byte *)(piVar2 + 9) * 0x800) >> 4) + 0x1800;
  *piVar2 = local_10;
  uStack_c = param_4;
  FUN_02168488(piVar2[2],&local_10);
  bVar1 = *(byte *)(piVar2 + 9);
  *(byte *)(piVar2 + 9) = bVar1 + 1;
  if (0xf < bVar1) {
    *(undefined1 *)(piVar2 + 9) = 0x10;
    FUN_02028384(*(undefined4 *)(piVar2[2] + 4),FUN_021684a4);
  }
  return;
}

