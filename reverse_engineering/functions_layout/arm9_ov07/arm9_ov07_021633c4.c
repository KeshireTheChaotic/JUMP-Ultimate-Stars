
void FUN_021633c4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(*(int *)(piVar1[0x10] + 4) + 0x224) == 0) {
    return;
  }
  FUN_02159ac0(piVar1[0x11]);
  if (piVar1[0xe] < 0) {
    FUN_02158d24(1);
    FUN_02086c24();
  }
  (**(code **)(*(int *)piVar1[1] + 8))();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(*piVar1 + 4) + 0xc))();
  FUN_0201b244(piVar1);
  return;
}

