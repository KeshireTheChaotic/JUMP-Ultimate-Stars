
void FUN_027f69c0(void)

{
  byte bVar1;
  ushort local_10;
  ushort local_e [3];
  
  FUN_027f7554(&local_10);
  if (((local_10 & 0x1f) >> 4 != 0) || ((local_10 & 0x3f) >> 5 != 0)) {
    FUN_027f74fc(local_e);
    bVar1 = (local_10 & 0x1f) >> 4 != 0;
    if ((bool)bVar1) {
      local_e[0] = local_e[0] & 0xfff0;
    }
    if ((local_10 & 0x3f) >> 5 != 0) {
      bVar1 = bVar1 | 2;
      local_e[0] = local_e[0] & 0xffbf;
    }
    FUN_027f74d0(local_e);
    FUN_027f6f0c(0x30,bVar1);
  }
  return;
}

