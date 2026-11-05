
void FUN_02155a88(undefined4 param_1)

{
  undefined1 auStack_10 [4];
  int local_c;
  
  FUN_02165b60(*(undefined4 *)(DAT_0216e6dc + 0xfc),0,auStack_10,&local_c);
  local_c = local_c + -0xc;
  if ((int)(uint)DAT_0216a4f6 < local_c) {
    FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),4);
    return;
  }
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),4,(uint)DAT_0216a4f6);
  FUN_02155088();
  FUN_021677b8(param_1,0x2155a71);
  return;
}

