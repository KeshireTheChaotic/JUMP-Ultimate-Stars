
void FUN_02156a04(undefined4 param_1)

{
  undefined1 auStack_10 [4];
  int local_c;
  
  FUN_02165b60(*(undefined4 *)(DAT_0216e6e0 + 0x40),0,auStack_10,&local_c);
  local_c = local_c + -0xc;
  if ((int)(uint)DAT_0216a7d2 < local_c) {
    FUN_02156354(4);
    return;
  }
  FUN_02156354(4,(uint)DAT_0216a7d2);
  FUN_02156268();
  FUN_021677b8(param_1,0x21569ed);
  return;
}

