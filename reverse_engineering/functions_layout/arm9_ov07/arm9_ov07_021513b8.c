
void FUN_021513b8(int param_1,undefined2 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined2 auStack_58 [32];
  undefined4 uStack_18;
  
  piVar1 = *(int **)(param_1 + 4);
  uStack_18 = param_4;
  (**(code **)(*(int *)piVar1[0x19] + 0x70))();
  (**(code **)(*piVar1 + 0xc4))();
  if (param_2 != (undefined2 *)0x0) {
    if (0 < param_3) {
      if (0x1f < param_3) {
        param_3 = 0x1f;
      }
      FUN_020517fc(auStack_58,0,0x40);
      FUN_02051890(param_2,auStack_58,param_3 << 1);
      auStack_58[param_3] = 0;
      param_2 = auStack_58;
    }
    piVar1 = *(int **)(*(int *)(param_1 + 4) + 100);
    (**(code **)(*piVar1 + 0x6c))(piVar1,param_2,0xffffffff);
  }
  return;
}

