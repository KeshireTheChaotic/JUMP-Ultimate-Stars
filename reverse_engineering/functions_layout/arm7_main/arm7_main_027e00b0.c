
void FUN_027e00b0(short param_1)

{
  int iVar1;
  
  iVar1 = DAT_027f97f0;
  *(short *)(DAT_027f97f0 + 0x30) = param_1;
  *(short *)(iVar1 + 0x34) = param_1;
  if (*(short *)(iVar1 + 0x188) == 0) {
    *(short *)(iVar1 + 0x3c) = param_1 + 4;
    *(short *)(iVar1 + 0x38) = param_1 + 4;
    return;
  }
  *(short *)(iVar1 + 0x3e) = param_1 + 4;
  *(short *)(iVar1 + 0x3a) = param_1 + 4;
  return;
}

