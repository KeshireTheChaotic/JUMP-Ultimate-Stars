
void FUN_027e66b8(void)

{
  int iVar1;
  
  iVar1 = DAT_027f97f0;
  if (*(short *)(DAT_027f97f0 + 0xe6) == 1) {
    if (DAT_0380bc68 != 0) {
      FUN_037fdff4();
    }
    FUN_027e6680(0xd1,FUN_027e6260,3);
  }
  else if (*(short *)(DAT_027f97f0 + 0xe6) == 2) {
    *(undefined4 *)(DAT_027f97f0 + 0x1c) = 0;
    if (DAT_0380bc68 != 0) {
      FUN_037fdff4();
    }
    FUN_027e6680(200,FUN_027e6414,1);
    *(undefined4 *)(iVar1 + 0xd8) = 0;
  }
  return;
}

