
void FUN_02177e54(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_118 [268];
  
  if (((code *)DAT_021a75a4[0x11] != (code *)0x0) && (*DAT_021a75a4 != 1)) {
    (*(code *)DAT_021a75a4[0x11])(param_1,DAT_021a75a4[0x12]);
  }
  if (DAT_021a75a4[0xd] != 0) {
    uVar1 = FUN_02178420(DAT_021a75a4[6] + param_1 * 0xc,auStack_118);
    (*(code *)DAT_021a75a4[0xd])(param_1,uVar1,auStack_118,DAT_021a75a4[0xe]);
  }
  return;
}

