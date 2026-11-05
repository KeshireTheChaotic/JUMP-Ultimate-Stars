
void FUN_0215cf70(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = *(int *)(iVar3 + 0xac);
  iVar1 = (**(code **)(*param_2 + 8))();
  if ((iVar1 == -0x7ffef000) && (iVar1 = (**(code **)*param_2)(), iVar1 == 4)) {
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    iVar1 = (**(code **)(**(int **)(iVar4 + 4) + 0x194))();
    if (iVar1 != -1) {
      if (*(int *)(iVar3 + 0x304) == 0) {
        iVar1 = FUN_020720d8();
        if (iVar1 == 0x32) {
          func_0x021bac28(*(undefined4 *)(iVar3 + 0x2d8),0x74,0,0,0,0,0,0);
          FUN_0207342c(0x78,2);
          func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 4));
          while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0x2d8)), iVar1 == 0) {
            (*DAT_020a0e18)();
          }
          func_0x021b65e0(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 4));
          func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x60) + 4),1);
          func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0xac) + 4),1);
          piVar2 = *(int **)(*(int *)(iVar3 + 0xac) + 4);
          (**(code **)(*piVar2 + 0x198))(piVar2,0);
          *(undefined4 *)(iVar3 + 0x304) = 2;
          FUN_021594ec(iVar3);
        }
        else {
          iVar1 = FUN_0215a664(iVar3);
          if (iVar1 != 0) {
            FUN_0207342c(0x78,0);
            DAT_020afeb0 = 0;
            DAT_020afeb4 = (**(code **)(**(int **)(*(int *)(iVar3 + 0xac) + 4) + 0x194))();
            *(undefined1 *)(iVar3 + 0x311) = 0;
            FUN_02159ef4(iVar3);
          }
        }
      }
      else if (*(int *)(iVar3 + 0x304) == 2) {
        FUN_0207342c(0x78,0);
        FUN_0215ceb4(iVar3);
      }
    }
  }
  return;
}

