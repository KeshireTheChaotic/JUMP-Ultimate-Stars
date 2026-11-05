
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_021665f8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = DAT_0216e844 + 0x718 + param_1 * 0x38;
  uVar5 = (uint)(ushort)(&DAT_0216aefa)[param_1 * 2];
  uVar1 = (uint)(ushort)(&DAT_0216aef8)[param_1 * 2];
  uVar2 = FUN_02166ba8(uVar5 * uVar1 * 0x20,0x20);
  *(undefined4 *)(iVar4 + 0x30) = uVar2;
  if (param_1 == 1) {
    _DAT_04001008 = _DAT_04001008 & 3 | 0xc00;
  }
  else {
    _DAT_04000008 = _DAT_04000008 & 3 | 0xc00;
  }
  FUN_0205f640(iVar4,*(undefined4 *)(iVar4 + 0x30),uVar1,uVar5,4);
  iVar3 = DAT_0216e844 + param_2 * 0xc;
  *(int *)(iVar4 + 0x20) = iVar4;
  *(int *)(iVar4 + 0x24) = iVar3;
  *(undefined4 *)(iVar4 + 0x28) = 1;
  *(undefined4 *)(iVar4 + 0x2c) = 1;
  if (param_1 == 1) {
    uVar2 = FUN_02065f98();
  }
  else {
    uVar2 = FUN_02065fb8();
  }
  FUN_0205f4f8(uVar2,uVar1,uVar5,0,0,0x20,(&DAT_0216aef4)[param_1],0xf);
  FUN_021663fc(iVar4,0);
  uVar2 = FUN_02167814(1,0x216656d,DAT_0216e844 + 0x794 + param_1,200);
  *(undefined4 *)(iVar4 + 0x34) = uVar2;
  return iVar4;
}

