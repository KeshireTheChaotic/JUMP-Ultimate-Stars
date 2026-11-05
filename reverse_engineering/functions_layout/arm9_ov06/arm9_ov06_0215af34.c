
void FUN_0215af34(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = FUN_0215b158();
  if (iVar3 != 0) {
    FUN_021590fc(param_1,0,0x11);
    if (599 < *(short *)(param_1 + 0x10e)) {
      *(undefined2 *)(param_1 + 0x10e) = 0;
      if ((&DAT_02171478)[*(ushort *)(param_1 + 0x100)] != -1) {
        *(ushort *)(param_1 + 0x100) = (short)(char)(&DAT_02171478)[*(ushort *)(param_1 + 0x100)];
      }
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
    sVar1 = *(short *)(iVar3 + 0x14a);
    uVar2 = FUN_0200d12c(*(short *)(iVar3 + 0x148) * 100);
    *(undefined2 *)(param_1 + 0x10a) = uVar2;
    uVar2 = FUN_0200d12c(sVar1 * 0x48,100);
    *(undefined2 *)(param_1 + 0x10c) = uVar2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x10);
    if (*(int *)(iVar3 + 0x28) == 0) {
      pcVar4 = (code *)(&PTR_FUN_021721a0)[*(ushort *)(param_1 + 0x100)];
    }
    else {
      *(undefined2 *)(*(int *)(iVar3 + 0x5c) + 0x26) = 0;
      pcVar4 = FUN_0215b568;
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x24) = 0;
    }
    *(code **)(param_1 + 0xfc) = pcVar4;
    FUN_0215aed0(*(undefined4 *)(param_1 + 0x1a4),5);
    if (*(char *)(param_1 + 0x11e) != 0) {
      FUN_0207342c(0x7a,(&DAT_021713d8)[*(char *)(param_1 + 0x11e)]);
    }
    *(undefined1 *)(param_1 + 0x1e9) = 0;
  }
  (*(code *)(&PTR_FUN_02172190)[*(char *)(param_1 + 0x11e)])(param_1);
  iVar3 = (**(code **)(param_1 + 0xfc))(param_1);
  if (iVar3 == 0) {
    return;
  }
  FUN_0215b40c(param_1);
  iVar3 = FUN_021598f0(param_1);
  if (iVar3 != 0) {
    FUN_02157450(param_1,0xb);
    FUN_02157494(param_1,0x11,FUN_0215bdf0,FUN_0215be20,0x10);
    return;
  }
  iVar3 = FUN_021599f0(param_1);
  if (iVar3 != 0) {
    FUN_0215b2b0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x174) + 4),0x20);
    FUN_0215f2d8(*(undefined4 *)(param_1 + 0x1a0),0);
    FUN_02157494(param_1,0x12,FUN_0215be34,FUN_0215be64,0x10);
    return;
  }
  iVar3 = FUN_0215dec8(param_1);
  if (iVar3 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}

