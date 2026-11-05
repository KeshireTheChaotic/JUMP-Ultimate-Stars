
void FUN_021af058(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *(undefined1 *)(param_1 + 0x143) = param_2;
  piVar1 = *(int **)(param_1 + 0x10c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xd8))
              (piVar1,*(uint *)(param_1 + 0x180) < *(uint *)(param_1 + 0x148),
               *(code **)(*piVar1 + 0xd8),piVar1,param_4);
  }
  return;
}

