
void FUN_020379ec(int *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = 0; uVar1 < (uint)param_1[0x1c]; uVar1 = uVar1 + 1) {
    for (uVar2 = 0; uVar2 < (uint)param_1[0x1b]; uVar2 = uVar2 + 1) {
      (**(code **)(*param_1 + 100))(param_1,uVar2,uVar1,param_2);
    }
  }
  return;
}

