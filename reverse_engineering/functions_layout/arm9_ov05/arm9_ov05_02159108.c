
void FUN_02159108(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  FUN_0215ceec();
  *(undefined1 *)(param_1 + 0x4e6) = 0;
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x4c) + 4));
  func_0x021b65d8(*(undefined4 *)(*(int *)(param_1 + 0x88) + 4));
  local_10 = 0;
  FUN_02150070(*(undefined4 *)(param_1 + 0x44),&local_10);
  FUN_0215ed18(param_1 + 0x4b8,1,0x11,0);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),FUN_021592f0);
  return;
}

