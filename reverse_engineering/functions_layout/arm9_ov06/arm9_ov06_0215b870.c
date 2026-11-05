
undefined4 FUN_0215b870(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x100);
  if (*(char *)(param_1 + 0x11e) == '\x02') {
    FUN_02157450(param_1,*(undefined4 *)(&DAT_021713ec + uVar2 * 8),uVar2,param_4,param_4);
  }
  else {
    FUN_02157450(param_1,*(undefined4 *)(&DAT_021713e8 + uVar2 * 8),uVar2,param_4,param_4);
  }
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
  sVar1 = *(short *)(param_1 + 0x10c);
  *(short *)(iVar3 + 0x30) = *(short *)(iVar3 + 0x30) + *(short *)(param_1 + 0x10a);
  *(short *)(iVar3 + 0x32) = *(short *)(iVar3 + 0x32) + sVar1;
  *(code **)(param_1 + 0xfc) = FUN_0215b910;
  *(undefined1 *)(param_1 + 0x117) = 0;
  *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)(param_1 + 0x117);
  FUN_0215b4c4(param_1,(int)*(char *)(param_1 + 0x115));
  return 0;
}

