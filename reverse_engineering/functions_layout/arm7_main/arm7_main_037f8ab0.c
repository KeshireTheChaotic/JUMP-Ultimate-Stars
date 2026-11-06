
undefined4 FUN_037f8ab0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(short *)((int)param_2 + 10) == -0x40e3) {
    if ((short)param_2[2] == 0) {
      OS_DisableIrqMask(0x1000000);
      if (*(short *)(param_1 + 2) == 0) {
        *param_2 = -1;
        *param_1 = param_2;
      }
      else {
        iVar2 = param_1[1];
        *param_2 = iVar2;
        *(int **)(iVar2 + 4) = param_2;
      }
      param_2[1] = -1;
      *(undefined2 *)(param_2 + 2) = *(undefined2 *)((int)param_1 + 10);
      param_1[1] = param_2;
      *(short *)(param_1 + 2) = *(short *)(param_1 + 2) + 1;
      OS_EnableIrqMask();
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

