
void FUN_02156268(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(DAT_0216e6e0 + 99) < '\f') {
    uVar2 = 0x44;
  }
  else {
    uVar2 = 0x45;
  }
  uVar1 = FUN_02165d64(*(undefined4 *)(DAT_0216e6e0 + 0x58),0);
  FUN_02166014(0,uVar2,uVar1);
  FUN_02165b80(*(undefined4 *)(DAT_0216e6e0 + 0x58),0xffffffff,2);
  iVar3 = *(char *)(DAT_0216e6e0 + 99) * 4;
  FUN_02165bc4(*(undefined4 *)(DAT_0216e6e0 + 0x58),0xffffffff,
               *(undefined2 *)(&DAT_0216a828 + iVar3),*(undefined2 *)(&DAT_0216a82a + iVar3));
  return;
}

