
void FUN_0218fdbc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_021902e8(((int)(uint)*(ushort *)(param_1 + 0xc) >> 8 |
                       (*(ushort *)(param_1 + 0xc) & 0xff) << 8) << 0x10 |
                       (int)(uint)*(ushort *)(param_1 + 0xe) >> 8 |
                       (*(ushort *)(param_1 + 0xe) & 0xff) << 8,
                       ((int)(uint)*(ushort *)(param_1 + 0x10) >> 8 |
                       (*(ushort *)(param_1 + 0x10) & 0xff) << 8) << 0x10 |
                       (int)(uint)*(ushort *)(param_1 + 0x12) >> 8 |
                       (*(ushort *)(param_1 + 0x12) & 0xff) << 8);
  if ((iVar1 != 0) && (iVar1 = FUN_0218fe58(param_1,param_2,param_3), iVar1 == 0)) {
    iVar1 = FUN_021901cc(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0218feb0(param_1,param_2);
      return;
    }
    FUN_02053008();
    iVar1 = FUN_021901cc(param_1,param_2);
    if (iVar1 != 0) {
      FUN_0218feb0(param_1,param_2);
    }
  }
  return;
}

