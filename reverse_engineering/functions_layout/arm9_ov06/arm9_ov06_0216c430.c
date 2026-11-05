
undefined4 FUN_0216c430(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_r4;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(char *)(param_1 + 0x4d) = *(char *)(param_1 + 0x4d) + '\x01';
  FUN_0216ce38(param_1 + 0x2c);
  if ((*(ushort *)(param_1 + 0x26) & 1) == 0) {
    iVar1 = (uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x48) * 0x100;
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) - (short)((uint)iVar1 >> 0x10);
    iVar2 = (uint)*(ushort *)(param_1 + 0x20) * (int)*(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x5a) = *(short *)(param_1 + 0x5a) - (short)((uint)iVar2 >> 0x10);
    if (((int)*(short *)(param_1 + 0x58) - (iVar1 >> 0x10) < 0) ||
       ((int)*(short *)(param_1 + 0x5a) - (iVar2 >> 0x10) < 0)) {
      unaff_r4 = *(int *)(param_1 + 0x30);
      for (uVar4 = 0; uVar4 < 0x20; uVar4 = uVar4 + 1) {
        if ((*(byte *)(unaff_r4 + 6) & 1) == 0) {
          FUN_0216c5f0(unaff_r4,param_1 + 0x2c,*(undefined4 *)(param_1 + 0x2c),param_1,
                       *(undefined4 *)(*(int *)(param_1 + 8) + 0x10));
          *(byte *)(unaff_r4 + 6) = *(byte *)(unaff_r4 + 6) | 4;
          break;
        }
        unaff_r4 = unaff_r4 + 8;
      }
    }
    uVar4 = 0;
    local_1c = 0;
    local_18 = 0;
    do {
      if ((*(byte *)(unaff_r4 + 6) & 1) != 0) {
        FUN_0216c958(param_1,unaff_r4,param_1 + 0x2c,&local_1c);
      }
      uVar4 = uVar4 + 1;
      unaff_r4 = unaff_r4 + 8;
    } while (uVar4 < 0x20);
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_0216cd9c(param_1,param_1 + 0x2c);
  }
  return uVar3;
}

