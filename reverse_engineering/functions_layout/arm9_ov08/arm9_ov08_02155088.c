
void FUN_02155088(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(*(undefined1 *)(DAT_0216e6dc + 0x121)) {
  case 0x2f:
    uVar3 = 0x42;
    break;
  case 0x30:
    uVar3 = 0x41;
    break;
  case 0x31:
    uVar3 = 0x43;
    break;
  case 0x32:
    uVar3 = 0x41;
    break;
  case 0x33:
  case 0x34:
    uVar3 = 0x45;
    break;
  default:
    uVar3 = 0x40;
  }
  uVar1 = FUN_02165d64(*(undefined4 *)(DAT_0216e6dc + 0x114),0);
  FUN_02166014(0,uVar3,uVar1);
  FUN_02165b80(*(undefined4 *)(DAT_0216e6dc + 0x114),0xffffffff,2);
  iVar2 = *(char *)(DAT_0216e6dc + 0x121) * 4;
  FUN_02165bc4(*(undefined4 *)(DAT_0216e6dc + 0x114),0xffffffff,
               *(undefined2 *)(&DAT_0216a5d8 + iVar2),*(undefined2 *)(&DAT_0216a5da + iVar2));
  return;
}

