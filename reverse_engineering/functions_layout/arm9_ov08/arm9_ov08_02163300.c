
void FUN_02163300(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_20 [12];
  
  FUN_02165bc4(*DAT_0216e804,0xffffffff,
               *(undefined2 *)(&DAT_0216ae8c + (uint)*(byte *)(DAT_0216e804 + 7) * 4),param_1);
  FUN_02165bc4(DAT_0216e804[1],0xffffffff,
               (uint)DAT_0216ae18 +
               (uint)*(ushort *)(&DAT_0216ae8c + (uint)*(byte *)(DAT_0216e804 + 7) * 4),
               param_1 + DAT_0216ae1a);
  FUN_021632b4(*DAT_0216e804,param_1);
  FUN_021632b4(DAT_0216e804[1],param_1);
  iVar4 = 0;
  uVar5 = (uint)*(byte *)(DAT_0216e804 + 7);
  if ((&DAT_0216ae24)[uVar5] != '\0') {
    iVar3 = 0;
    do {
      iVar1 = uVar5 * 8 + 0x216aebc;
      FUN_02165bc4(*(undefined4 *)((int)DAT_0216e804 + iVar3 + 8),0xffffffff,
                   *(undefined2 *)(iVar1 + (uint)(byte)(&DAT_0216ae3c)[iVar4 + uVar5 * 2] * 4),
                   (param_1 +
                   *(ushort *)(iVar1 + (uint)(byte)(&DAT_0216ae3c)[iVar4 + uVar5 * 2] * 4 + 2)) -
                   (uint)*(ushort *)(&DAT_0216ae8e + uVar5 * 4));
      FUN_021632b4(*(undefined4 *)((int)DAT_0216e804 + iVar3 + 8),param_1);
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
      uVar5 = (uint)*(byte *)(DAT_0216e804 + 7);
    } while (iVar4 < (int)(uint)(byte)(&DAT_0216ae24)[uVar5]);
  }
  param_1 = param_1 & 0xff;
  if (param_1 < 0xc0) {
    uVar2 = param_1 + *(ushort *)(&DAT_0216aea6 + uVar5 * 4);
  }
  else {
    uVar2 = 0;
    param_1 = 0;
  }
  if (0xc0 < uVar2) {
    uVar2 = 0xc0;
  }
  FUN_0216688c((uint)*(ushort *)(&DAT_0216ae8c + uVar5 * 4),param_1,
               (uint)*(ushort *)(&DAT_0216ae8c + uVar5 * 4) +
               (uint)*(ushort *)(&DAT_0216aea4 + uVar5 * 4),uVar2,auStack_20);
  FUN_021669b0(0,0,auStack_20);
  return;
}

