
void FUN_02071d84(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_020b0b9a;
  if (uVar1 != param_1) {
    DAT_020b0b9a = (ushort)param_1;
    FUN_02073114(0x8e2,2,uVar1,param_4,param_4);
    DAT_020b02ac = 1;
  }
  return;
}

