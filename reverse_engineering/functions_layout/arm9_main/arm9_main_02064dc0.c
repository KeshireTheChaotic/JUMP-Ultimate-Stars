
uint FUN_02064dc0(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1 & 0xc000;
  if ((*param_1 & (ushort)0xc000) == 0) {
    return 0;
  }
  if (uVar1 == 0x4000) {
    return *param_1 & 0x1f;
  }
  if (uVar1 == 0x8000) {
    return -(*param_1 & 0x1f);
  }
  return 0;
}

