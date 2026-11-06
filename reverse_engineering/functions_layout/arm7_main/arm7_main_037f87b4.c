
undefined4 FUN_037f87b4(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  OS_DisableIrqMask(0x1000000);
  if (*(short *)(param_1 + 2) == 0) {
    *param_2 = -1;
    *param_1 = param_2;
  }
  else {
    iVar1 = param_1[1];
    *param_2 = iVar1;
    *(int **)(iVar1 + 4) = param_2;
  }
  param_2[1] = -1;
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)((int)param_1 + 10);
  *(undefined2 *)((int)param_2 + 10) = 0xbf1d;
  param_1[1] = param_2;
  *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
  OS_EnableIrqMask();
  return 0;
}

