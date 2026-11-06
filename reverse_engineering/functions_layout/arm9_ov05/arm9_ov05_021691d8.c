
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021691d8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  param_1[4] = (int)FUN_0216937c;
  param_1[5] = 0;
  FUN_02169624(param_1,param_1[0x19],param_3,param_4,param_4);
  piVar1 = _DAT_021d52d8;
  if (_DAT_021d52d8 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    if (_DAT_021d52d8[0x1a] == 0) {
      (**(code **)(*_DAT_021d52d8 + 0x10))();
    }
    iVar2 = piVar1[0x1a];
  }
  func_0x021cb80c(*(int *)(iVar2 + 4) + 0x1c);
  FUN_02150104(0);
  (**(code **)(*(int *)param_1[0x14] + 8))();
  if ((int *)param_1[0x15] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x15] + 8))();
  }
  (**(code **)(*(int *)param_1[0xf] + 8))();
  (**(code **)(*(int *)param_1[0xb] + 8))();
  (**(code **)(*(int *)param_1[0xc] + 8))();
  (**(code **)(*(int *)param_1[0xd] + 8))();
  FUN_02034d7c(param_1[0xe]);
  (**(code **)(*(int *)param_1[0x10] + 8))();
  _DAT_021d5154 = 0;
  func_0x021b526c(1);
  if (*param_1 != 0) {
    FUN_0206ae98();
  }
  iVar2 = 0;
  do {
    if ((int *)param_1[iVar2 + 7] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar2 + 7] + 0xc))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  (**(code **)(*(int *)param_1[10] + 0xc))();
  FUN_0216d474(param_1[3]);
  FUN_02075848(param_1[2]);
  FUN_0216d330(param_1[1]);
  (**(code **)(*(int *)param_1[6] + 8))();
  FUN_0201b244(param_1);
  func_0x021b65cc();
  return;
}

