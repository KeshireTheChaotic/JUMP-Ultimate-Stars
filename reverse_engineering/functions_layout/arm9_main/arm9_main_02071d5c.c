
void FUN_02071d5c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_020b0b98;
  if (uVar1 != param_1) {
    DAT_020b0b98 = (ushort)param_1;
    FUN_02073114(0x8e0,2,uVar1,param_4,param_4);
    DAT_020b02ac = 1;
  }
  return;
}

