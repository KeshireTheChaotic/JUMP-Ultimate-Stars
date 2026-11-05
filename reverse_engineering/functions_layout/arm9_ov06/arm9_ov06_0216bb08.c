
undefined4 FUN_0216bb08(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x4d) + '\x01';
  FUN_0216ce38(param_1 + 0x2c);
  if ((*(ushort *)(param_1 + 0x26) & 1) == 0) {
    *(short *)(param_1 + 0x58) =
         *(short *)(param_1 + 0x58) -
         (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x48) * 0x100 >> 0x10
                );
    *(short *)(param_1 + 0x5a) =
         *(short *)(param_1 + 0x5a) -
         (short)((uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x4a) * 0x100 >> 0x10
                );
    iVar4 = *(int *)(param_1 + 8);
    if (((int)(uint)*(byte *)(param_1 + 0x4e) <= (int)*(char *)(iVar4 + 0x1c)) &&
       (*(short *)(param_1 + 0x58) < 0)) {
      iVar2 = *(int *)(param_1 + 0x30);
      for (uVar3 = 0; uVar3 < 0x20; uVar3 = uVar3 + 1) {
        if ((*(byte *)(iVar2 + 6) & 1) == 0) {
          if ((uint)*(byte *)(param_1 + 0x4e) == (int)*(char *)(iVar4 + 0x1c)) {
            FUN_0216c5f0(iVar2,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                         *(undefined4 *)(iVar4 + 0x18),param_4);
          }
          else {
            FUN_0216c5f0(iVar2,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                         *(undefined4 *)(iVar4 + 0x10),param_4);
          }
          *(char *)(param_1 + 0x4e) = *(char *)(param_1 + 0x4e) + '\x01';
          break;
        }
        iVar2 = iVar2 + 8;
      }
    }
    FUN_0216cd10(param_1,param_1 + 0x2c);
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0216cd9c(param_1,param_1 + 0x2c);
  }
  return uVar1;
}

