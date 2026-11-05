
undefined4 FUN_0216ba2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0216ce38(param_1 + 0x2c);
  if ((*(ushort *)(param_1 + 0x26) & 1) == 0) {
    iVar3 = (uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x48) * 0x100;
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - (short)((uint)iVar3 >> 0x10);
    iVar1 = (uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) - (short)((uint)iVar1 >> 0x10);
    if (((int)*(short *)(param_1 + 0x58) - (iVar3 >> 0x10) < 0) ||
       ((int)*(short *)(param_1 + 0x5a) - (iVar1 >> 0x10) < 0)) {
      iVar3 = *(int *)(param_1 + 0x30);
      for (uVar4 = 0; uVar4 < 0x20; uVar4 = uVar4 + 1) {
        if ((*(byte *)(iVar3 + 6) & 1) == 0) {
          FUN_0216c5f0(iVar3,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x10),param_4);
          break;
        }
        iVar3 = iVar3 + 8;
      }
    }
    FUN_0216cd10(param_1,param_1 + 0x2c);
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_0216cd9c(param_1,param_1 + 0x2c);
  }
  return uVar2;
}

