
undefined4 FUN_0215bc44(int param_1)

{
  int iVar1;
  
  FUN_02157450(param_1,0x17);
  *(code **)(param_1 + 0xfc) = FUN_0215bc8c;
  iVar1 = *(int *)(param_1 + 0x1a4);
  if ((iVar1 != 0) && (*(short *)(iVar1 + 0x5c) != -1)) {
    *(short *)(iVar1 + 0x5c) = *(short *)(iVar1 + 0x5c) + 1;
  }
  return 0;
}

