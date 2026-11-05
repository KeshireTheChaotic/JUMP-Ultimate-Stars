
void FUN_0214da24(int *param_1)

{
  byte bVar1;
  
  FUN_020282f4(*(undefined4 *)(*param_1 + 4));
  bVar1 = *(byte *)(param_1 + 0x39);
  *(byte *)(param_1 + 0x39) = bVar1 | 2;
  if ((bVar1 & 4) == 0) {
    return;
  }
  FUN_02152980(param_1);
  return;
}

