
undefined4 FUN_02191d24(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_18 [2];
  undefined1 auStack_14 [4];
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(iVar2 + 100);
  FUN_02053ed0(iVar3 + 0xe0);
  FUN_0218f398(*(undefined2 *)(param_1 + 0x10),0,0);
  FUN_0218f2d8();
  *(undefined4 *)(iVar3 + 0xf8) = 0;
  uVar1 = FUN_0218f1f4(local_18,auStack_14);
  **(undefined2 **)(param_1 + 0x14) = local_18[0];
  **(undefined4 **)(param_1 + 0x18) = uVar1;
  *(ushort *)(iVar2 + 0x70) = *(ushort *)(iVar2 + 0x70) | 4;
  FUN_02053e60(iVar3 + 0xe0);
  return 0;
}

