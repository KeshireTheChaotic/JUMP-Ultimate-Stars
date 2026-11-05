
void FUN_0206bcf0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    iVar1 = param_1 + param_3 * 4;
    *(undefined4 **)(iVar1 + 0x50) = param_2;
    *(undefined4 *)(iVar1 + 0x34) = *param_2;
    *param_2 = *(undefined4 *)(iVar1 + 0x20);
  }
  *(undefined4 *)(**(int **)(param_1 + param_3 * 4 + 0x20) + 0xe0) = 0;
  return;
}

