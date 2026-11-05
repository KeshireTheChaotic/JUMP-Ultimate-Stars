
void FUN_027e1f54(void)

{
  ushort uVar1;
  int local_18;
  
  while( true ) {
    FUN_037fcbcc(&DAT_027f82c8,&local_18,1);
    if (local_18 == 0) break;
    uVar1 = *(ushort *)(local_18 + 0xc);
    if ((((uVar1 & 0xff00) == 0) || ((uVar1 & 0xff00) == 0x100)) && ((uVar1 & 0x80) != 0)) {
      FUN_027e1e08(local_18);
    }
    else {
      FUN_037fcc6c(&DAT_027f82f8,local_18,1);
    }
  }
  FUN_037fc640();
  return;
}

