
void FUN_021a1c5c(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  FUN_02051890(s_JUpiJUdMJUpsJU1wJUReJUPn_021a36f0,param_1,4);
  *(undefined4 *)(param_1 + 4) = 0x50;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) | 2;
  FUN_020517fc(param_1 + 8,0,0x14);
  uVar2 = FUN_02071f08();
  FUN_02051890(uVar2,param_1 + 8,0x14);
  FUN_020517fc(param_1 + 0x1c,0,0x14);
  FUN_02051890(param_1 + 8,param_1 + 0x1c,0x14);
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xdf;
  uVar1 = FUN_020726bc();
  *(undefined2 *)(param_1 + 0x30) = uVar1;
  uVar1 = FUN_02072734();
  *(undefined2 *)(param_1 + 0x32) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  return;
}

