
void FUN_02089cd0(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02088904(*(short *)(param_1 + 2),s_CommLib_cpp_020a0338,0x81d);
    return;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 8);
  uVar1 = *(ushort *)(param_1 + 10);
  if (uVar1 < DAT_0214be46) {
    DAT_0214be48 = (ushort)(1 << (uVar3 - 1 & 0xff));
    DAT_0214be46 = uVar1;
  }
  else if (DAT_0214be46 == uVar1) {
    DAT_0214be48 = DAT_0214be48 | (ushort)(1 << (uVar3 - 1 & 0xff));
  }
  iVar2 = FUN_02089d44(uVar3 + 1 & 0xffff);
  if (iVar2 == 0x18) {
    DAT_0214bea4 = 7;
    return;
  }
  if (iVar2 != 2) {
    FUN_02088904(iVar2,s_CommLib_cpp_020a0338,0x83c);
  }
  return;
}

