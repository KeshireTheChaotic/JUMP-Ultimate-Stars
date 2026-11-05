
void FUN_02161c74(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0216e7f0;
  FUN_020517fc(DAT_0216e7f0 + 0x400,0,0xef);
  FUN_02051890(param_1,iVar1 + 0x4d1,5);
  FUN_02051890(param_1 + 6,iVar1 + 0x4d6,5);
  FUN_02051890(param_1 + 0xc,iVar1 + 0x4db,5);
  FUN_02051890(param_1 + 0x12,iVar1 + 0x4e0,5);
  FUN_02051890(param_1 + 0x18,iVar1 + 0x460,0x20);
  FUN_02051890(param_1 + 0x39,iVar1 + 0x480,0xd);
  FUN_02051890(param_1 + 0x47,iVar1 + 0x490,0xd);
  FUN_02051890(param_1 + 0x55,iVar1 + 0x4a0,0xd);
  FUN_02051890(param_1 + 99,iVar1 + 0x4b0,0xd);
  FUN_02051890(param_1 + 0x71,iVar1 + 0x440,0x20);
  *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 0xfc | 2;
  *(byte *)(iVar1 + 0x4e6) = *(byte *)(iVar1 + 0x4e6) & 3;
  *(undefined1 *)(iVar1 + 0x4e7) = 1;
  FUN_020517fc(iVar1 + 0x4f0,0,4);
  *(undefined1 *)(iVar1 + 0x4f5) = 1;
  *(undefined1 *)(iVar1 + 0x4f6) = 1;
  FUN_02161e54();
  return;
}

