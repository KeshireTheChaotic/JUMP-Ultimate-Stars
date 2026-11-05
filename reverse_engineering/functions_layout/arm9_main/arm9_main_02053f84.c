
void FUN_02053f84(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      coproc_moveto_Clean_Data_Cache_by_Index(uVar2 | uVar1);
      uVar1 = uVar1 + 0x20;
    } while ((int)uVar1 < 0x400);
    uVar2 = uVar2 + 0x40000000;
  } while (uVar2 != 0);
  return;
}

