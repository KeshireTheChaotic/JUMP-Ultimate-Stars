
void FUN_027e0000(short param_1)

{
  int iVar1;
  
  iVar1 = DAT_027f97f0;
  *(short *)(DAT_027f97f0 + 0x32) = param_1;
  if (*(short *)(iVar1 + 0x188) == 0) {
    *(short *)(iVar1 + 0x3a) = param_1 + 2;
  }
  else {
    *(short *)(iVar1 + 0x38) = param_1 + 2;
  }
  return;
}

