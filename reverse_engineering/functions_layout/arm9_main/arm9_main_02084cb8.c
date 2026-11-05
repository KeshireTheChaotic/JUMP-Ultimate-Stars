
void FUN_02084cb8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(param_3 * 0x1c + *(int *)(param_1 + param_2 * 8 + 0x44));
  if (*(byte *)(piVar1 + 5) < 2) {
    FUN_020282f4(*(undefined4 *)(*(int *)piVar1[4] + 4));
    return;
  }
  if (*(byte *)(piVar1 + 5) == 2) {
    FUN_020282f4(*(undefined4 *)(*piVar1 + 4));
    return;
  }
  return;
}

