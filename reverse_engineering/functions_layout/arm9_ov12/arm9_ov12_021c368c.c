
void FUN_021c368c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  if ((*(byte *)((int)param_1 + 0xa9) & 1) != 0) {
    uStack_c = param_4;
    FUN_021c4728();
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    (**(code **)(**(int **)(*(int *)(param_1[2] + 4) + 0x68) + 0x70))();
    local_10 = 0x100000;
    FUN_021b956c(param_1[2],&local_10);
    ALNodeImp::Create(param_1);
    FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  }
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  return;
}

