
void FUN_0207b000(int param_1,int param_2)

{
  int *piVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* JUS-TAG source_file_inferred="BattleCol.cpp" */
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  (**(code **)(param_2 + 0x24))(param_2);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar5 = extraout_r1;
  while (iVar2 != 0) {
    iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x20);
    if (iVar3 != 0) {
      piVar1 = (int *)*(int *)(iVar3 + 0x10);
      while (piVar1 != (int *)0x0) {
        if (piVar1 != (int *)iVar2) {
          iVar5 = *(int *)(param_2 + 0x10);
        }
        iVar4 = *piVar1;
        if ((piVar1 != (int *)iVar2 && piVar1 != (int *)iVar5) &&
           (iVar5 = *(int *)(piVar1[3] + 0x20), iVar5 == param_2)) {
          FUN_0207ad04(piVar1,param_1,iVar3);
          iVar5 = extraout_r1_00;
        }
        piVar1 = (int *)iVar4;
      }
    }
    FUN_0207ad04(iVar2,param_1,param_2);
    iVar5 = extraout_r1_01;
    iVar2 = *(int *)(param_2 + 0x10);
  }
  iVar5 = *(int *)(param_2 + 8);
  while (iVar5 != 0) {
    FUN_0207bc2c(param_2,iVar5);
    if (*(code **)(iVar5 + 0x28) != (code *)0x0) {
      (**(code **)(iVar5 + 0x28))(iVar5,*(undefined4 *)(iVar5 + 0x24));
    }
    FUN_0207ac70(param_2 + 8,0,iVar5,100);
    iVar5 = *(int *)(param_2 + 8);
  }
  if (*(code **)(param_2 + 0x2c) != (code *)0x0) {
    (**(code **)(param_2 + 0x2c))(param_2,*(undefined4 *)(param_2 + 0x30));
  }
  FUN_0207ac70(param_1 + 8,0,param_2,0x40);
  return;
}

