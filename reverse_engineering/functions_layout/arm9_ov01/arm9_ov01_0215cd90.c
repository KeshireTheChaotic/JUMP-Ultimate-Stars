
void FUN_0215cd90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  *(undefined4 *)(param_1 + 0x304) = 2;
  *(undefined4 *)(param_1 + 0x308) = 0;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  uStack_c = param_4;
  func_0x021b4104(uVar1,uVar1,4);
  FUN_02159ea8(param_1,FUN_0215d338);
  FUN_0215aa74(param_1,0);
  FUN_0215aa74(param_1,1);
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x74));
  local_10 = 0xce000;
  FUN_0214f764(*(undefined4 *)(param_1 + 0x7c),&local_10);
  return;
}

