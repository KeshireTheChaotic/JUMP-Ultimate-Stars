
void FUN_020249d0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x3c) == (param_2 | 0x80000000)) {
    return;
  }
  *(uint *)(param_1 + 0x3c) = param_2 | 0x80000000;
  FUN_02027edc();
  for (uVar2 = 0; uVar2 < *(ushort *)(param_1 + 0x74); uVar2 = uVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x6c) + uVar2 * *(int *)(param_1 + 0x70));
    (**(code **)(*piVar1 + 0x94))(piVar1,param_2);
  }
  return;
}

