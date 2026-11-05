
void FUN_0207a7e0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* JUS-TAG source_file_inferred="BattleProp.cpp" */
  if (param_1[0x35] != 0) {
    *(int *)(param_1[0x35] + 0xd8) = param_1[0x36];
  }
  piVar2 = param_1 + 0x1c;
  iVar3 = 7;
  piVar1 = param_1;
  if (param_1[0x36] != 0) {
    *(int *)(param_1[0x36] + 0xd4) = param_1[0x35];
  }
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 8))();
      *piVar1 = 0;
    }
    iVar3 = iVar3 + -1;
    piVar1 = piVar1 + 4;
  } while (0 < iVar3);
  iVar3 = 8;
  do {
    if (*piVar2 != 0) {
      FUN_0207b1c0(param_1[0x34]);
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 3;
  } while (0 < iVar3);
  FUN_0201b244(param_1);
  return;
}

