
void FUN_0215e4ac(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x26) = 0;
    *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2e) =
         *(short *)(param_1 + 0xba) << 1;
    *(undefined1 *)(param_1 + 0xd9) = 0;
    *(undefined1 *)(param_1 + 0xdc) = 0;
    *(undefined1 *)(param_1 + 0xda) = 0;
    FUN_02157450(param_1,4);
    FUN_0207d3a0(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10));
    *(undefined1 *)(param_1 + 0xdb) = 0;
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}

