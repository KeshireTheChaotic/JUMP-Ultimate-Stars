
bool FUN_027f76b8(undefined4 param_1)

{
  bool bVar1;
  ushort local_10 [4];
  
  FUN_027f74fc(local_10);
  bVar1 = (local_10[0] & 0xb) == 1;
  if (bVar1) {
    FUN_027f717c(6,0x10,param_1,1);
  }
  return bVar1;
}

