
void FUN_0205de58(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x14c) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffffffe;
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffffffb;
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) & 0xfffffffd;
  return;
}

