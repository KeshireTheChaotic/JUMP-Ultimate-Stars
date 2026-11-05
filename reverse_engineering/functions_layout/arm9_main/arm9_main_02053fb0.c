
void FUN_02053fb0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_cr7;
  undefined4 in_cr14;
  
  uVar2 = 0;
  do {
    uVar1 = 0;
    do {
      coproc_moveto_Data_Synchronization(0);
      coprocessor_moveto(0xf,0,2,uVar2 | uVar1,in_cr7,in_cr14);
      uVar1 = uVar1 + 0x20;
    } while ((int)uVar1 < 0x400);
    uVar2 = uVar2 + 0x40000000;
  } while (uVar2 != 0);
  return;
}

