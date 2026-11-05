
void FUN_020575ec(int param_1,int param_2,undefined4 param_3)

{
  FUN_02056ae0();
  *(undefined4 *)(param_1 + param_2 * 4 + 0x3c) = param_3;
  DC_StoreRange(param_1 + 0x3c + param_2 * 4,4);
  FUN_02056acc();
  return;
}

