
void FUN_0218d784(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint local_18;
  uint local_14;
  
  FUN_02004a34(param_2,s__08X_04X_021a68f0,&local_18,&local_14);
  uVar1 = local_14 & 0xffff;
  local_18 = local_18 << 0x18 | (local_18 & 0xff00) << 8 | local_18 >> 0x18 | local_18 >> 8 & 0xff00
  ;
  if (((local_18 != 0) && (uVar1 != 0)) &&
     ((*(uint *)(param_1 + 0x104) != local_18 || (*(ushort *)(param_1 + 0x108) != uVar1)))) {
    *(uint *)(param_1 + 0x104) = local_18;
    *(short *)(param_1 + 0x108) = (short)local_14;
    (**(code **)(param_1 + 0xa8))(local_18,uVar1,*(undefined4 *)(param_1 + 0x10c));
  }
  return;
}

