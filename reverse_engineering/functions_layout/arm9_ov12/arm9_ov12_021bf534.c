
void FUN_021bf534(int param_1,undefined4 param_2,undefined4 param_3)

{
  DC_FlushRange(param_3,param_1 + 0x1fU & 0xffffffe0);
  DC_WaitWriteBufferEmpty();
  FUN_021bfc54(param_3,param_1,param_2);
  return;
}

