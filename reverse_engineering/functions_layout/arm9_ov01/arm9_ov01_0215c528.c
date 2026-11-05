
void FUN_0215c528(int param_1)

{
  undefined4 uVar1;
  
  FUN_02071f54();
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(uint *)(param_1 + 0x308) = (uint)DAT_020afeb4;
  FUN_0215aa74(param_1,1);
  FUN_0215aa74(param_1,2);
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x7c));
  FUN_0215a9cc(*(undefined4 *)(param_1 + 0x78));
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xac) + 4);
  func_0x021b4104(uVar1,uVar1,4);
  FUN_02159ea8(param_1,0x215c7f5);
  return;
}

