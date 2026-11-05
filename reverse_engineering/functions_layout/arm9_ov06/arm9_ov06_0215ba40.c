
undefined4 FUN_0215ba40(int param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
  sVar1 = *(short *)(param_1 + 0x10c);
  *(short *)(iVar2 + 0x30) = *(short *)(iVar2 + 0x30) + *(short *)(param_1 + 0x10a);
  *(short *)(iVar2 + 0x32) = *(short *)(iVar2 + 0x32) + sVar1;
  FUN_02157450(param_1,0x13);
  *(code **)(param_1 + 0xfc) = FUN_0215bab8;
  FUN_0215b4c4(param_1,(int)*(char *)(param_1 + 0x115) << 1);
  FUN_0207ce7c(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
  return 0;
}

