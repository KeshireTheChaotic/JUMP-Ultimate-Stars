
void FUN_0206bd14(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(ushort *)((int)param_1 + 0x6e) & 1) == 0) {
    iVar2 = 0;
    do {
      if ((int *)param_1[iVar2 + 0x14] != (int *)0x0) {
        *(int *)param_1[iVar2 + 0x14] = param_1[iVar2 + 0xd];
        param_1[iVar2 + 0x14] = 0;
        param_1[iVar2 + 0xd] = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if ((int *)param_1[0x18] != (int *)0x0) {
      *(int *)param_1[0x18] = param_1[0x11];
      param_1[0x18] = 0;
      param_1[0x11] = 0;
    }
    if (param_1[0x12] != 0) {
      func_0x021b70f8();
      param_1[0x12] = 0;
    }
    if (param_1[0x13] != 0) {
      func_0x021b3bc8();
      param_1[0x13] = 0;
    }
  }
  if (param_1[1] != 0) {
    piVar1 = *(int **)(param_1[1] + 4);
    iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,4);
    param_1[2] = iVar2;
  }
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  (*(code *)param_1[6])(param_1);
  return;
}

