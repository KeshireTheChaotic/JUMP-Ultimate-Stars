
uint FUN_021bf508(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (param_2 = param_2 >> 1; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar2 + uVar1;
  }
  uVar2 = (uVar2 >> 0x10) + (uVar2 & 0xffff);
  return (uVar2 + (uVar2 >> 0x10) ^ 0xffff) & 0xffff;
}

