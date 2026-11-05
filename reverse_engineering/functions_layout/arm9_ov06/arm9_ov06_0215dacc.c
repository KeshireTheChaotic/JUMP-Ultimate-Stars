
undefined4 FUN_0215dacc(int param_1)

{
  int iVar1;
  
  *(char *)(param_1 + 0x1de) = *(char *)(param_1 + 0x1de) + '\x01';
  if (*(char *)(param_1 + 0x1de) < '\f') {
    iVar1 = FUN_0215a824();
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x1de) = 0;
      *(undefined1 **)(param_1 + 0x1d4) = &LAB_0215db24;
    }
  }
  else {
    *(code **)(param_1 + 0x1d4) = FUN_0215da84;
  }
  return 0;
}

