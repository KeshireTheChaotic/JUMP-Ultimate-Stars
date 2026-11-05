
undefined4 FUN_02159924(undefined4 param_1,int param_2,short param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_3 * 0x4dc;
  *(code **)(param_2 + iVar1 + 0x1dc) = FUN_0215998c;
  *(undefined1 *)(param_2 + 0x4f2 + iVar1) = 0x10;
  FUN_0215790c();
  iVar2 = FUN_0203b3f4();
  FUN_0214e2d8(*(undefined4 *)(iVar2 + 0x88),1,0x1e);
  iVar2 = FUN_0203b3f4();
  uVar3 = (uint)*(byte *)(param_2 + 0x4f2 + iVar1);
  FUN_021597b4(*(undefined4 *)(iVar2 + 0x88),uVar3,0x10 - uVar3);
  FUN_0214d6e8();
  return 1;
}

