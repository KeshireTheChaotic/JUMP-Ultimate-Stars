
void FUN_02165298(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = FUN_021646ac();
  if (uVar2 < 10) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar2) {
    case 0:
      *(undefined4 *)(DAT_0216e82c + 0xa98) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 3;
      return;
    case 1:
      FUN_02164620();
      return;
    case 3:
      return;
    case 7:
      uVar1 = FUN_021644a0();
      *(undefined2 *)(DAT_0216e82c + 0x64a) = uVar1;
      *(undefined4 *)(DAT_0216e82c + 0xa98) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 3;
      return;
    case 9:
      FUN_02164170();
      return;
    }
  }
  FUN_02055684();
  return;
}

