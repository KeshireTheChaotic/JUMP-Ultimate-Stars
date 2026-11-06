
void FUN_02155088(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = (int)*(char *)(DAT_0216e6dc + 0x121) - 0x2f;
  if (uVar2 < 6) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar2) {
    case 0:
      uVar4 = 0x42;
      break;
    case 1:
      uVar4 = 0x41;
      break;
    case 2:
      uVar4 = 0x43;
      break;
    case 3:
      uVar4 = 0x41;
      break;
    case 4:
      uVar4 = 0x45;
    }
  }
  else {
    uVar4 = 0x40;
  }
  uVar1 = FUN_02165d64(*(undefined4 *)(DAT_0216e6dc + 0x114),0);
  FUN_02166014(0,uVar4,uVar1);
  FUN_02165b80(*(undefined4 *)(DAT_0216e6dc + 0x114),0xffffffff,2);
  iVar3 = *(char *)(DAT_0216e6dc + 0x121) * 4;
  FUN_02165bc4(*(undefined4 *)(DAT_0216e6dc + 0x114),0xffffffff,
               *(undefined2 *)(&DAT_0216a5d8 + iVar3),*(undefined2 *)(&DAT_0216a5da + iVar3));
  return;
}

