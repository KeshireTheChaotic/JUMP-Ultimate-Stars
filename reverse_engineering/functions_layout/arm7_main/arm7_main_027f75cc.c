
bool FUN_027f75cc(undefined4 param_1)

{
  bool bVar1;
  ushort local_10 [4];
  
  FUN_027f74fc(local_10);
  bVar1 = (local_10[0] & 0x7f) >> 6 != 0;
  if (bVar1) {
    FUN_027f717c(0x86,0x50,param_1,3);
  }
  return bVar1;
}

