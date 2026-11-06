
void FUN_0214e478(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x54);
  *(ushort *)(param_1 + 0x54) = uVar1 + 1;
  if (4 < uVar1) {
    *(code **)(param_1 + 0x48) = FUN_0214e4c4;
    FUN_0214e5b8(param_1,0xfffffff0,1,0x10,1);
  }
  (*DAT_020a0e18)();
  return;
}

