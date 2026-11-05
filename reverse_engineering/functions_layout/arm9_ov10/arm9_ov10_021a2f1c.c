
void FUN_021a2f1c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x34);
  if (bVar1 == 0) {
    return;
  }
  if ((bVar1 & 0x80) == 0) {
    uVar2 = FUN_02199e10();
    bVar1 = FUN_0217ed94(*(byte *)(param_1 + 0x34) & 0x7f,uVar2,8);
  }
  else {
    bVar1 = FUN_0217ed94(bVar1 & 0x7f,s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0 + 8,4);
  }
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & ~bVar1;
  if ((*(byte *)(param_1 + 0x34) & 0x7f) == 0) {
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}

