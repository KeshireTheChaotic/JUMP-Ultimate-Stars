
void FUN_021ac85c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == -0x7ffeeffe) {
    iVar1 = (**(code **)(*param_1 + 0x19c))();
    iVar2 = (**(code **)*param_2)();
    if (iVar1 != iVar2) {
      FUN_021b7714(param_1,0x10000);
      uVar3 = (**(code **)*param_2)();
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar3,0);
      return;
    }
  }
  else {
    if (iVar1 == -0x7ffeeffc) {
      FUN_021b7714(param_1,0x10000);
      iVar1 = (**(code **)(*param_1 + 0x19c))();
      iVar2 = (**(code **)*param_2)();
      if (((char)param_1[0x50] == '\0') || (param_1 == (int *)0xfffffebe)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,iVar1 + iVar2,uVar3);
      return;
    }
    if (iVar1 == -0x7ffeeffa) {
      iVar1 = (**(code **)*param_2)();
      if (iVar1 != 0) {
        FUN_021b7714(param_1,0x10000);
        uVar3 = (**(code **)*param_2)();
        (**(code **)(*param_1 + 0x1a4))(param_1,uVar3);
        return;
      }
    }
    else {
      FUN_021b6470(param_1,param_2);
    }
  }
  return;
}

