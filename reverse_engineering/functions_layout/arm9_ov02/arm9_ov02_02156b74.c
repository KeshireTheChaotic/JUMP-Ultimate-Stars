
void FUN_02156b74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  local_a = (short)((uint)param_2 >> 0x10);
  local_6 = (short)((uint)param_3 >> 0x10);
  local_20 = param_4;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_c = (short)param_2;
    local_28 = (int)local_a << 0xc;
    local_24 = (int)local_c << 0xc;
    FUN_02155884(*(undefined4 *)(param_1 + 0xc),&local_24,&local_28);
  }
  local_8 = (short)param_3;
  local_30 = (int)local_6 << 0xc;
  local_2c = (int)local_8 << 0xc;
  FUN_02155884(*(undefined4 *)(param_1 + 8),&local_2c,&local_30);
  return;
}

