
void FUN_0215f0fc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x174);
  uVar1 = 100;
  if (param_3 <= param_2 >> 1) {
    uVar1 = FUN_0200d12c(param_3 * 100);
  }
  *(undefined4 *)(piVar2[1] + 0x50) = uVar1;
  FUN_0206d484(piVar2[1],*(undefined4 *)(*piVar2 + 8));
  return;
}

