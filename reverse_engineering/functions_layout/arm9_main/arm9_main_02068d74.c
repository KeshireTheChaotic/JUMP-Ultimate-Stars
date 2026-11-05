
undefined4 FUN_02068d74(void)

{
  int iVar1;
  int iVar2;
  uint local_18 [4];
  
  iVar1 = func_0x02198ccc();
  iVar2 = FUN_020673ec(0x10);
  if (iVar1 != 1) {
    return 1;
  }
  local_18[0] = (uint)*(byte *)(iVar2 + 0xd0a);
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  FUN_02068600();
  iVar1 = func_0x0219936c(local_18,0x2067c45);
  if ((iVar1 == 1) || (3 < iVar1)) {
    FUN_02067378(1);
    return 0x11;
  }
  return 2;
}

