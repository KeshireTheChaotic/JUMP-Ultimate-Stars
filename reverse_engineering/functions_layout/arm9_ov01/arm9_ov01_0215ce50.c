
void FUN_0215ce50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x54) + 4),0x881008,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x54) + 4) + 0x68) + 0x6c))();
  local_10 = 0x1a000;
  FUN_0215b3f4(*(undefined4 *)(param_1 + 0x54),&local_10);
  ALWidgetImp::Create(param_1,*(undefined4 *)(param_1 + 0x68),7,FUN_0215d13c);
  ALWidgetImp::Create(param_1,*(undefined4 *)(param_1 + 0x68),0x1a,0x215a535);
  func_0x021b58e4(*(undefined4 *)(*(int *)(param_1 + 0x68) + 4),0x34);
  FUN_0215b740(*(undefined4 *)(param_1 + 0x68));
  return;
}

