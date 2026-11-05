
void FUN_0215ab8c(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_0216e774[0xe] == 0) {
    if (*(char *)((int)DAT_0216e774 + 0x57) == '\0') {
      iVar1 = FUN_02154488();
      if (iVar1 == 0) {
        FUN_02162378(7);
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        if (DAT_0216e76c == 4) {
          *(undefined1 *)(DAT_0216e774 + 0x15) = 1;
          FUN_02162378(6);
          FUN_0215a434();
        }
        else {
          iVar1 = FUN_020507a8(DAT_0216e770,0x1c);
          uVar2 = (uint)DAT_0216e76c;
          if (*(char *)(*DAT_0216e774 + (uVar2 + iVar1) * 0x2a + 0x28) == '\x02') {
            FUN_02162378(9);
            FUN_02161614();
            FUN_02154424();
            FUN_02163654(0xe,1,1,0xffffffff,0);
            FUN_02157088(0x215a411);
            return;
          }
          *(undefined1 *)(DAT_0216e774 + 0x15) = 1;
          *(char *)((int)DAT_0216e774 + 0x52) = (char)(uVar2 + iVar1);
          FUN_02162378(6);
        }
      }
      FUN_02157088(0x215ab71);
    }
  }
  return;
}

