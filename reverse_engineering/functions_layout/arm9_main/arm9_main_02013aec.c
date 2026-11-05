
void FUN_02013aec(int param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(param_1 + 0x40) & 4) != 0;
  if (bVar1) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38) << 0xc;
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(bool *)(param_1 + 0x44) = !bVar1;
  return;
}

