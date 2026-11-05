
void FUN_0215b11c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 == -0x7ffef000) {
    uVar2 = (**(code **)*param_2)();
    if ((uVar2 & 4) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
      *(undefined1 *)(iVar1 + 0x71) = 1;
      func_0x021b65bc();
      uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
      uVar4 = 0xffffffff;
      if (uVar2 == 0x4ff0) {
        uVar4 = *(uint *)(iVar1 + 0x5c);
      }
      else if ((uVar2 & 0xf000) != 0) {
        uVar4 = uVar2 & 0xffff0fff;
      }
      if (-1 < (int)uVar4) {
        uVar2 = (**(code **)(**(int **)(*(int *)(iVar1 + 0x44) + 4) + 0x194))();
        if (uVar4 == uVar2) {
          uVar2 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
          iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
          if ((uVar2 & 0x8000) != 0) {
            FUN_0207342c(0x78,2);
            *(undefined1 *)(iVar1 + 0x71) = 0;
            func_0x021b65cc();
            return;
          }
          if (uVar2 == 0x4ff0) {
            uVar3 = FUN_0214dd50();
            FUN_0214dd60(uVar3,3);
          }
          else {
            *(uint *)(iVar1 + 0x80) = uVar2 & 0xffff0fff;
            if ((*(uint *)(*(int *)(param_1 + 4) + 0x124) & 0x2000) == 0) {
              *(undefined1 *)(iVar1 + 0x71) = 1;
              func_0x021b65bc();
              FUN_02159700(*(undefined4 *)(iVar1 + 0x80),0);
              uVar3 = FUN_0214dd50();
              FUN_0214dd60(uVar3,4);
            }
            else {
              *(undefined1 *)(iVar1 + 0x71) = 1;
              func_0x021b65bc();
              FUN_02159700(*(undefined4 *)(iVar1 + 0x80),1);
              uVar3 = FUN_0214dd50();
              FUN_0214dd6c(uVar3,3);
              *(undefined1 *)(iVar1 + 0x72) = 1;
              *(undefined1 *)(iVar1 + 0x73) = 0;
            }
          }
          FUN_0207342c(0x78,0);
          FUN_0215b478(iVar1);
          return;
        }
        FUN_0215b08c(param_1);
      }
      *(undefined1 *)(iVar1 + 0x71) = 0;
      func_0x021b65cc();
      return;
    }
    uVar2 = (**(code **)*param_2)();
    if (((uVar2 & 3) != 0) && ((*(uint *)(*(int *)(param_1 + 4) + 0x90) & 1) == 1)) {
      FUN_0215b08c(param_1);
    }
  }
  else if (iVar1 == -0x7ffeefff) {
    (**(code **)*param_2)();
    return;
  }
  return;
}

