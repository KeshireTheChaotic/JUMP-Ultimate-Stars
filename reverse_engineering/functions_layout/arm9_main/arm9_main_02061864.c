
void FUN_02061864(uint *param_1,uint *param_2)

{
  int iVar1;
  ushort local_10 [2];
  
  iVar1 = FUN_02061ab0(0,local_10);
  if (iVar1 == 0) {
    if (param_1 != (uint *)0x0) {
      *param_1 = (uint)((local_10[0] & 8) != 0);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = (uint)((local_10[0] & 4) != 0);
    }
  }
  return;
}

