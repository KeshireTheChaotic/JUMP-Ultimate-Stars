
void FUN_0214de6c(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x54);
  *(ushort *)(param_1 + 0x54) = uVar1 + 1;
  if (uVar1 < 0x3d) {
    return;
  }
  *(code **)(param_1 + 0x48) = FUN_0214e3c0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  FUN_0214e5b8(param_1,0,0xffffffff,0x10,1);
  return;
}

