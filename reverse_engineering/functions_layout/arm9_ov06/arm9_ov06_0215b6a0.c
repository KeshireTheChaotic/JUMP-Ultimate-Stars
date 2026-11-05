
undefined4 FUN_0215b6a0(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
  sVar1 = *(short *)(param_1 + 0x10c);
  *(short *)(iVar2 + 0x30) = *(short *)(iVar2 + 0x30) + *(short *)(param_1 + 0x10a);
  *(short *)(iVar2 + 0x32) = *(short *)(iVar2 + 0x32) + sVar1;
  if (*(char *)(param_1 + 0x11e) == '\x02') {
    FUN_02157450(param_1,*(undefined4 *)(&DAT_021713ec + (uint)*(ushort *)(param_1 + 0x100) * 8));
  }
  else {
    FUN_02157450(param_1,*(undefined4 *)(&DAT_021713e8 + (uint)*(ushort *)(param_1 + 0x100) * 8));
  }
  *(undefined1 **)(param_1 + 0xfc) = &LAB_0215b720;
  return 0;
}

